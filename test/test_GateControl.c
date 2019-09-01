#include "unity.h"
#include "gate.h"	
#include "StepperMotor.h"

/*calcula la velocidad del agua la compuerta esta trabajando sumergida*/
void test_WaterSpeedWithSubmergedGate(void){
float gatePosition = 30;
float gateWidth = 25;
	
  GateInit(&gate,gateWidth);
  SensorInit(&s1,100);
  TEST_ASSERT_EQUAL(100,s1.level);
  SensorInit(&s2,75);
  TEST_ASSERT_EQUAL(75,s2.level);
  SetGatePosition(&gate, gatePosition);
  TEST_ASSERT_EQUAL(30,gate.gatePosition);
  SetIsGateWorkFree(&gate,&s2);
  TEST_ASSERT_EQUAL(0,gate.isGateWorkFree);
  WaterVelocityCalcultion(&gate);	
  TEST_ASSERT_EQUAL(159.4,gate.velocityWater);		
}

//calcula la velocidad del agua con Compuerta libre
void test_WaterSpeedWitFreeGate(void){
float gatePosition = 30;							 	
float gateWidth =25;

GateInit(&gate,gateWidth);
  SensorInit(&s1,150);
  TEST_ASSERT_EQUAL(150,s1.level);
  SensorInit(&s2,30);
  TEST_ASSERT_EQUAL(30,s2.level);
  SetGatePosition(&gate, gatePosition);	
  TEST_ASSERT_EQUAL(30,gate.gatePosition);	
  SetIsGateWorkFree(&gate,&s2);
  TEST_ASSERT_EQUAL(1,gate.isGateWorkFree);
  WaterVelocityCalcultion(&gate);
  TEST_ASSERT_EQUAL(860.82,gate.velocityWater);
}
//calcula la sección por donde fluye al agua la compuerta esta trabajando sumergida 
void test_calculateSection(void){
float gatePosition = 35;
float gateWidth = 25;
  GateInit(&gate,gateWidth);
  SetGatePosition(&gate, gatePosition);	
  calculationSectionGate(&gate);
  TEST_ASSERT_EQUAL(875,gate.section);
}

//calcula el caudal de agua que pasa por debajo de la compuerta que esta trabajando libre
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
  TEST_ASSERT_EQUAL(645620.62,gate.waterFlow);
}

//calcula el caudal de agua que pasa por debajo de la compuerta que esta trabajando sumergida
void test_calculateFlowWithSubmergedGate(void){
float gatePosition = 45;
float gateWidth = 25;	
  GateInit(&gate,gateWidth);
  SetGatePosition(&gate, gatePosition);	
  SensorInit(&s1,100);
  TEST_ASSERT_EQUAL(100,s1.level);
  SensorInit(&s2, 65);
  TEST_ASSERT_EQUAL(65,s2.level);
  SetIsGateWorkFree(&gate,&s2);
  TEST_ASSERT_EQUAL(0,gate.isGateWorkFree);
  WaterVelocityCalcultion(&gate);
  TEST_ASSERT_EQUAL(223.1775,gate.velocityWater);
  calculationSectionGate(&gate);
  calculateflow(&gate);
  TEST_ASSERT_EQUAL(251074.68,gate.waterFlow);
}

//verifico la función que establece los valores obtenidos del sensor
void test_SensorInitialization(void){
  SensorInit(&s1,451);
  TEST_ASSERT_EQUAL(-1,s1.level);
  SensorInit(&s2,-158);
  TEST_ASSERT_EQUAL(-1,s2.level);
}
 /* */	
void test_ValueIncorrectGatePosition(void){
  SetGatePosition(&gate,-2);
  TEST_ASSERT_EQUAL(-1,gate.gatePosition);
  SetGatePosition(&gate,351);
  TEST_ASSERT_EQUAL(-1,gate.gatePosition);
}
/*Pruebo el rechazo de valores Incorrectos*/
void test_calculateFlowWithSubmergedGateAndValueIncorrect(void){
float gatePosition = 351;
float gateWidth = 25;	
  GateInit(&gate,gateWidth);
  SetGatePosition(&gate, gatePosition);	
  TEST_ASSERT_EQUAL(-1,gate.gatePosition);
  SensorInit(&s1,150);
  TEST_ASSERT_EQUAL(150,s1.level);
  SensorInit(&s2, 250);
  TEST_ASSERT_EQUAL(250,s2.level);
  SetIsGateWorkFree(&gate,&s2);
  TEST_ASSERT_EQUAL(-1,gate.isGateWorkFree);
   WaterVelocityCalcultion(&gate);
  TEST_ASSERT_EQUAL(-1,gate.velocityWater);
  calculationSectionGate(&gate);
  TEST_ASSERT_EQUAL(-1,gate.section);
  calculateflow(&gate);
  TEST_ASSERT_EQUAL(-1,gate.waterFlow);
  gatePosition = 100;
  gateWidth = -1;
  GateInit(&gate,gateWidth);
  SetGatePosition(&gate, gatePosition);	
  TEST_ASSERT_EQUAL(100,gate.gatePosition);
  SensorInit(&s1,350);
  TEST_ASSERT_EQUAL(350,s1.level);
  SensorInit(&s2, 250);
  TEST_ASSERT_EQUAL(250,s2.level);
  SetIsGateWorkFree(&gate,&s2);
  TEST_ASSERT_EQUAL(0,gate.isGateWorkFree);
  WaterVelocityCalcultion(&gate);
  TEST_ASSERT_EQUAL(637.65,gate.velocityWater);
  calculationSectionGate(&gate);
  TEST_ASSERT_EQUAL(-1,gate.section);
  calculateflow(&gate);
  TEST_ASSERT_EQUAL(-1,gate.waterFlow);
} 
void test_GateIncorrectValueRejection(void){
  GateInit(&gate,301);
  TEST_ASSERT_EQUAL(-1,gate.gateWidth);
  GateInit(&gate,-177);
  TEST_ASSERT_EQUAL(-1,gate.gateWidth);
  SetGatePosition(&gate, 351);	
  TEST_ASSERT_EQUAL(-1,gate.gatePosition);
  SetGatePosition(&gate, -1);	
  TEST_ASSERT_EQUAL(-1,gate.gatePosition);

}
void test_SetepperMotorSendPulseTrain(void){
int32_t sPerRevolution=200;
int32_t  cPulse=400;
int8_t enableSM=1;
int8_t tSense=1;
  
  StepperMotorInit(&stepper, sPerRevolution);
  TEST_ASSERT_EQUAL(200,stepper.stepsPerRevolution);  
  StepperMotorSetEnableMotor(&stepper , enableSM);   //habilto el motor
  TEST_ASSERT_EQUAL(1,stepper.enable);
  StepperMotorSetTurningSense(&stepper,tSense ); // establezco el sentido de de giro del eje a derecha
  TEST_ASSERT_EQUAL(1,stepper.turningSense);
  StepperMotorSetTrainPulse(& stepper,  cPulse);
  TEST_ASSERT_EQUAL(400,stepper.counterPulse);

}

void test_StepperMotorMoveTurns(void){
int32_t sPerRevolution = 200;
float  nTurns = 2.5;
int8_t enableSM = 1;
int8_t tSense = 0;
float sAngle=1.8;	
  StepperMotorInit(&stepper, sPerRevolution);
  TEST_ASSERT_EQUAL(200,stepper.stepsPerRevolution);  
  StepperMotorSetAngle(&stepper,  sAngle);
  StepperMotorSetEnableMotor(&stepper , enableSM);   //habilto el motor
  TEST_ASSERT_EQUAL(1,stepper.enable);
  StepperMotorSetTurningSense(&stepper,tSense); // establezco el sentido de de giro del eje a Izquierda
  TEST_ASSERT_EQUAL(0,stepper.turningSense);
  StepperMotorNumberOfTurns(&stepper, nTurns);
  TEST_ASSERT_EQUAL(500,stepper.counterPulse);
}

void test_StepperMotorMoveAngle(void){
int32_t sPerRevolution = 200;
float cAngle = 1080;// ángulo que se debe girar el eje del motor
int8_t enableSM = 1;
int8_t tSense = 0;
float sAngle=1.8;

  StepperMotorInit(&stepper, sPerRevolution);
  TEST_ASSERT_EQUAL(200,stepper.stepsPerRevolution);  
  StepperMotorSetAngle(&stepper,  sAngle);
  StepperMotorSetEnableMotor(&stepper , enableSM);   //habilto el motor
  TEST_ASSERT_EQUAL(1,stepper.enable);
  StepperMotorSetTurningSense(&stepper,tSense ); // establezco el sentido de de giro del eje a Izquierda
  TEST_ASSERT_EQUAL(0,stepper.turningSense);
  StepperMotorMoveAngle(&stepper, cAngle);
  TEST_ASSERT_EQUAL(600,stepper.counterPulse);
	
}

void test_StepperMotorWitdhValueIncorrect(void){
int32_t sPerRevolution=-122;
int8_t enableSM=-71;
int8_t tSense=2;
int32_t  cPulse=701;
float sAngle=10.01;
	
  StepperMotorInit(&stepper, sPerRevolution);
  TEST_ASSERT_EQUAL(-1,stepper.stepsPerRevolution);
  StepperMotorSetAngle(&stepper,sAngle);
  TEST_ASSERT_EQUAL(-1,stepper.stepperAngle);
  StepperMotorSetEnableMotor(&stepper,enableSM);   //habilto el motor
  TEST_ASSERT_EQUAL(-1,stepper.enable);
  StepperMotorSetTurningSense(&stepper,tSense ); 
  TEST_ASSERT_EQUAL(-1,stepper.turningSense);
  StepperMotorSetTrainPulse(& stepper,cPulse);
  TEST_ASSERT_EQUAL(-1,stepper.counterPulse);       
  StepperMotorSetTrainPulse(& stepper,  -118);
  TEST_ASSERT_EQUAL(-1,stepper.counterPulse); 
  StepperMotorNumberOfTurns(&stepper,4);
  TEST_ASSERT_EQUAL(-1,stepper.counterPulse);
  StepperMotorMoveAngle(&stepper,1261);
  TEST_ASSERT_EQUAL(-1,stepper.counterPulse);
  StepperMotorMoveAngle(&stepper,-1261);
  TEST_ASSERT_EQUAL(-1,stepper.counterPulse);
} 
