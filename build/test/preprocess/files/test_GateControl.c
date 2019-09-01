#include "build/temp/_test_GateControl.c"
#include "StepperMotor.h"
#include "gate.h"
#include "unity.h"




void test_WaterSpeedWithSubmergedGate(void){

float gatePosition = 30;

float gateWidth = 25;



  GateInit(&gate,gateWidth);

  SensorInit(&s1,100);

  UnityAssertEqualNumber((UNITY_INT)((100)), (UNITY_INT)((s1.level)), (

 ((void *)0)

 ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

  SensorInit(&s2,75);

  UnityAssertEqualNumber((UNITY_INT)((75)), (UNITY_INT)((s2.level)), (

 ((void *)0)

 ), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);

  SetGatePosition(&gate, gatePosition);

  UnityAssertEqualNumber((UNITY_INT)((30)), (UNITY_INT)((gate.gatePosition)), (

 ((void *)0)

 ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

  SetIsGateWorkFree(&gate,&s2);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((gate.isGateWorkFree)), (

 ((void *)0)

 ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);

  WaterVelocityCalcultion(&gate);

  UnityAssertEqualNumber((UNITY_INT)((159.4)), (UNITY_INT)((gate.velocityWater)), (

 ((void *)0)

 ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

}





void test_WaterSpeedWitFreeGate(void){

float gatePosition = 30;

float gateWidth =25;



GateInit(&gate,gateWidth);

  SensorInit(&s1,150);

  UnityAssertEqualNumber((UNITY_INT)((150)), (UNITY_INT)((s1.level)), (

 ((void *)0)

 ), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);

  SensorInit(&s2,30);

  UnityAssertEqualNumber((UNITY_INT)((30)), (UNITY_INT)((s2.level)), (

 ((void *)0)

 ), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);

  SetGatePosition(&gate, gatePosition);

  UnityAssertEqualNumber((UNITY_INT)((30)), (UNITY_INT)((gate.gatePosition)), (

 ((void *)0)

 ), (UNITY_UINT)(34), UNITY_DISPLAY_STYLE_INT);

  SetIsGateWorkFree(&gate,&s2);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((gate.isGateWorkFree)), (

 ((void *)0)

 ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);

  WaterVelocityCalcultion(&gate);

  UnityAssertEqualNumber((UNITY_INT)((860.82)), (UNITY_INT)((gate.velocityWater)), (

 ((void *)0)

 ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_INT);

}



void test_calculateSection(void){

float gatePosition = 35;

float gateWidth = 25;

  GateInit(&gate,gateWidth);

  SetGatePosition(&gate, gatePosition);

  calculationSectionGate(&gate);

  UnityAssertEqualNumber((UNITY_INT)((875)), (UNITY_INT)((gate.section)), (

 ((void *)0)

 ), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT);

}





void test_calculateFlow(void){

float gatePosition = 30;

float gateWidth = 25;

  GateInit(&gate,gateWidth);

  SetGatePosition(&gate, gatePosition);

  SensorInit(&s1,150);

  SensorInit(&s2, 30);

  WaterVelocityCalcultion(&gate);

  calculationSectionGate(&gate);

  calculateflow(&gate);

  UnityAssertEqualNumber((UNITY_INT)((645620.62)), (UNITY_INT)((gate.waterFlow)), (

 ((void *)0)

 ), (UNITY_UINT)(61), UNITY_DISPLAY_STYLE_INT);

}





void test_calculateFlowWithSubmergedGate(void){

float gatePosition = 45;

float gateWidth = 25;

  GateInit(&gate,gateWidth);

  SetGatePosition(&gate, gatePosition);

  SensorInit(&s1,100);

  UnityAssertEqualNumber((UNITY_INT)((100)), (UNITY_INT)((s1.level)), (

 ((void *)0)

 ), (UNITY_UINT)(71), UNITY_DISPLAY_STYLE_INT);

  SensorInit(&s2, 65);

  UnityAssertEqualNumber((UNITY_INT)((65)), (UNITY_INT)((s2.level)), (

 ((void *)0)

 ), (UNITY_UINT)(73), UNITY_DISPLAY_STYLE_INT);

  SetIsGateWorkFree(&gate,&s2);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((gate.isGateWorkFree)), (

 ((void *)0)

 ), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_INT);

  WaterVelocityCalcultion(&gate);

  UnityAssertEqualNumber((UNITY_INT)((223.1775)), (UNITY_INT)((gate.velocityWater)), (

 ((void *)0)

 ), (UNITY_UINT)(77), UNITY_DISPLAY_STYLE_INT);

  calculationSectionGate(&gate);

  calculateflow(&gate);

  UnityAssertEqualNumber((UNITY_INT)((251074.68)), (UNITY_INT)((gate.waterFlow)), (

 ((void *)0)

 ), (UNITY_UINT)(80), UNITY_DISPLAY_STYLE_INT);

}





void test_SensorInitialization(void){

  SensorInit(&s1,451);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((s1.level)), (

 ((void *)0)

 ), (UNITY_UINT)(86), UNITY_DISPLAY_STYLE_INT);

  SensorInit(&s2,-158);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((s2.level)), (

 ((void *)0)

 ), (UNITY_UINT)(88), UNITY_DISPLAY_STYLE_INT);

}



void test_ValueIncorrectGatePosition(void){

  SetGatePosition(&gate,-2);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.gatePosition)), (

 ((void *)0)

 ), (UNITY_UINT)(93), UNITY_DISPLAY_STYLE_INT);

  SetGatePosition(&gate,351);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.gatePosition)), (

 ((void *)0)

 ), (UNITY_UINT)(95), UNITY_DISPLAY_STYLE_INT);

}



void test_calculateFlowWithSubmergedGateAndValueIncorrect(void){

float gatePosition = 351;

float gateWidth = 25;

  GateInit(&gate,gateWidth);

  SetGatePosition(&gate, gatePosition);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.gatePosition)), (

 ((void *)0)

 ), (UNITY_UINT)(103), UNITY_DISPLAY_STYLE_INT);

  SensorInit(&s1,150);

  UnityAssertEqualNumber((UNITY_INT)((150)), (UNITY_INT)((s1.level)), (

 ((void *)0)

 ), (UNITY_UINT)(105), UNITY_DISPLAY_STYLE_INT);

  SensorInit(&s2, 250);

  UnityAssertEqualNumber((UNITY_INT)((250)), (UNITY_INT)((s2.level)), (

 ((void *)0)

 ), (UNITY_UINT)(107), UNITY_DISPLAY_STYLE_INT);

  SetIsGateWorkFree(&gate,&s2);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.isGateWorkFree)), (

 ((void *)0)

 ), (UNITY_UINT)(109), UNITY_DISPLAY_STYLE_INT);

   WaterVelocityCalcultion(&gate);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.velocityWater)), (

 ((void *)0)

 ), (UNITY_UINT)(111), UNITY_DISPLAY_STYLE_INT);

  calculationSectionGate(&gate);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.section)), (

 ((void *)0)

 ), (UNITY_UINT)(113), UNITY_DISPLAY_STYLE_INT);

  calculateflow(&gate);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.waterFlow)), (

 ((void *)0)

 ), (UNITY_UINT)(115), UNITY_DISPLAY_STYLE_INT);

  gatePosition = 100;

  gateWidth = -1;

  GateInit(&gate,gateWidth);

  SetGatePosition(&gate, gatePosition);

  UnityAssertEqualNumber((UNITY_INT)((100)), (UNITY_INT)((gate.gatePosition)), (

 ((void *)0)

 ), (UNITY_UINT)(120), UNITY_DISPLAY_STYLE_INT);

  SensorInit(&s1,350);

  UnityAssertEqualNumber((UNITY_INT)((350)), (UNITY_INT)((s1.level)), (

 ((void *)0)

 ), (UNITY_UINT)(122), UNITY_DISPLAY_STYLE_INT);

  SensorInit(&s2, 250);

  UnityAssertEqualNumber((UNITY_INT)((250)), (UNITY_INT)((s2.level)), (

 ((void *)0)

 ), (UNITY_UINT)(124), UNITY_DISPLAY_STYLE_INT);

  SetIsGateWorkFree(&gate,&s2);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((gate.isGateWorkFree)), (

 ((void *)0)

 ), (UNITY_UINT)(126), UNITY_DISPLAY_STYLE_INT);

  WaterVelocityCalcultion(&gate);

  UnityAssertEqualNumber((UNITY_INT)((637.65)), (UNITY_INT)((gate.velocityWater)), (

 ((void *)0)

 ), (UNITY_UINT)(128), UNITY_DISPLAY_STYLE_INT);

  calculationSectionGate(&gate);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.section)), (

 ((void *)0)

 ), (UNITY_UINT)(130), UNITY_DISPLAY_STYLE_INT);

  calculateflow(&gate);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.waterFlow)), (

 ((void *)0)

 ), (UNITY_UINT)(132), UNITY_DISPLAY_STYLE_INT);

}

void test_GateIncorrectValueRejection(void){

  GateInit(&gate,301);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.gateWidth)), (

 ((void *)0)

 ), (UNITY_UINT)(136), UNITY_DISPLAY_STYLE_INT);

  GateInit(&gate,-177);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.gateWidth)), (

 ((void *)0)

 ), (UNITY_UINT)(138), UNITY_DISPLAY_STYLE_INT);

  SetGatePosition(&gate, 351);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.gatePosition)), (

 ((void *)0)

 ), (UNITY_UINT)(140), UNITY_DISPLAY_STYLE_INT);

  SetGatePosition(&gate, -1);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.gatePosition)), (

 ((void *)0)

 ), (UNITY_UINT)(142), UNITY_DISPLAY_STYLE_INT);



}

void test_SetepperMotorSendPulseTrain(void){

int32_t sPerRevolution=200;

int32_t cPulse=400;

int8_t enableSM=1;

int8_t tSense=1;



  StepperMotorInit(&stepper, sPerRevolution);

  UnityAssertEqualNumber((UNITY_INT)((200)), (UNITY_INT)((stepper.stepsPerRevolution)), (

 ((void *)0)

 ), (UNITY_UINT)(152), UNITY_DISPLAY_STYLE_INT);

  StepperMotorSetEnableMotor(&stepper , enableSM);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((stepper.enable)), (

 ((void *)0)

 ), (UNITY_UINT)(154), UNITY_DISPLAY_STYLE_INT);

  StepperMotorSetTurningSense(&stepper,tSense );

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((stepper.turningSense)), (

 ((void *)0)

 ), (UNITY_UINT)(156), UNITY_DISPLAY_STYLE_INT);

  StepperMotorSetTrainPulse(& stepper, cPulse);

  UnityAssertEqualNumber((UNITY_INT)((400)), (UNITY_INT)((stepper.counterPulse)), (

 ((void *)0)

 ), (UNITY_UINT)(158), UNITY_DISPLAY_STYLE_INT);



}



void test_StepperMotorMoveTurns(void){

int32_t sPerRevolution = 200;

float nTurns = 2.5;

int8_t enableSM = 1;

int8_t tSense = 0;

float sAngle=1.8;

  StepperMotorInit(&stepper, sPerRevolution);

  UnityAssertEqualNumber((UNITY_INT)((200)), (UNITY_INT)((stepper.stepsPerRevolution)), (

 ((void *)0)

 ), (UNITY_UINT)(169), UNITY_DISPLAY_STYLE_INT);

  StepperMotorSetAngle(&stepper, sAngle);

  StepperMotorSetEnableMotor(&stepper , enableSM);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((stepper.enable)), (

 ((void *)0)

 ), (UNITY_UINT)(172), UNITY_DISPLAY_STYLE_INT);

  StepperMotorSetTurningSense(&stepper,tSense);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((stepper.turningSense)), (

 ((void *)0)

 ), (UNITY_UINT)(174), UNITY_DISPLAY_STYLE_INT);

  StepperMotorNumberOfTurns(&stepper, nTurns);

  UnityAssertEqualNumber((UNITY_INT)((500)), (UNITY_INT)((stepper.counterPulse)), (

 ((void *)0)

 ), (UNITY_UINT)(176), UNITY_DISPLAY_STYLE_INT);

}



void test_StepperMotorMoveAngle(void){

int32_t sPerRevolution = 200;

float cAngle = 1080;

int8_t enableSM = 1;

int8_t tSense = 0;

float sAngle=1.8;



  StepperMotorInit(&stepper, sPerRevolution);

  UnityAssertEqualNumber((UNITY_INT)((200)), (UNITY_INT)((stepper.stepsPerRevolution)), (

 ((void *)0)

 ), (UNITY_UINT)(187), UNITY_DISPLAY_STYLE_INT);

  StepperMotorSetAngle(&stepper, sAngle);

  StepperMotorSetEnableMotor(&stepper , enableSM);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((stepper.enable)), (

 ((void *)0)

 ), (UNITY_UINT)(190), UNITY_DISPLAY_STYLE_INT);

  StepperMotorSetTurningSense(&stepper,tSense );

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((stepper.turningSense)), (

 ((void *)0)

 ), (UNITY_UINT)(192), UNITY_DISPLAY_STYLE_INT);

  StepperMotorMoveAngle(&stepper, cAngle);

  UnityAssertEqualNumber((UNITY_INT)((600)), (UNITY_INT)((stepper.counterPulse)), (

 ((void *)0)

 ), (UNITY_UINT)(194), UNITY_DISPLAY_STYLE_INT);



}



void test_StepperMotorWitdhValueIncorrect(void){

int32_t sPerRevolution=-122;

int8_t enableSM=-71;

int8_t tSense=2;

int32_t cPulse=701;

float sAngle=10.01;



  StepperMotorInit(&stepper, sPerRevolution);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((stepper.stepsPerRevolution)), (

 ((void *)0)

 ), (UNITY_UINT)(206), UNITY_DISPLAY_STYLE_INT);

  StepperMotorSetAngle(&stepper,sAngle);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((stepper.stepperAngle)), (

 ((void *)0)

 ), (UNITY_UINT)(208), UNITY_DISPLAY_STYLE_INT);

  StepperMotorSetEnableMotor(&stepper,enableSM);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((stepper.enable)), (

 ((void *)0)

 ), (UNITY_UINT)(210), UNITY_DISPLAY_STYLE_INT);

  StepperMotorSetTurningSense(&stepper,tSense );

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((stepper.turningSense)), (

 ((void *)0)

 ), (UNITY_UINT)(212), UNITY_DISPLAY_STYLE_INT);

  StepperMotorSetTrainPulse(& stepper,cPulse);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((stepper.counterPulse)), (

 ((void *)0)

 ), (UNITY_UINT)(214), UNITY_DISPLAY_STYLE_INT);

  StepperMotorSetTrainPulse(& stepper, -118);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((stepper.counterPulse)), (

 ((void *)0)

 ), (UNITY_UINT)(216), UNITY_DISPLAY_STYLE_INT);

  StepperMotorNumberOfTurns(&stepper,4);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((stepper.counterPulse)), (

 ((void *)0)

 ), (UNITY_UINT)(218), UNITY_DISPLAY_STYLE_INT);

  StepperMotorMoveAngle(&stepper,1261);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((stepper.counterPulse)), (

 ((void *)0)

 ), (UNITY_UINT)(220), UNITY_DISPLAY_STYLE_INT);

  StepperMotorMoveAngle(&stepper,-1261);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((stepper.counterPulse)), (

 ((void *)0)

 ), (UNITY_UINT)(222), UNITY_DISPLAY_STYLE_INT);

}
