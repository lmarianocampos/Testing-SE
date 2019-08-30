#include "build/temp/_test_GateControl.c"
#include "gate.h"
#include "unity.h"


void test_WaterSpeedWithSubmergedGate(void){

 float gatePosition = 30;

 float gateWidth = 25;



 GateInit(&gate,gateWidth);

 SensorInit(&s1,100);

 UnityAssertEqualNumber((UNITY_INT)((100)), (UNITY_INT)((s1.level)), (

((void *)0)

), (UNITY_UINT)(10), UNITY_DISPLAY_STYLE_INT);

 SensorInit(&s2 ,75);

 UnityAssertEqualNumber((UNITY_INT)((75)), (UNITY_INT)((s2.level)), (

((void *)0)

), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

 SetGatePosition(&gate, gatePosition);

 UnityAssertEqualNumber((UNITY_INT)((30)), (UNITY_INT)((gate.gatePosition)), (

((void *)0)

), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);

 SetIsGateWorkFree(&gate,&s2);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((gate.isGateWorkFree)), (

((void *)0)

), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

 WaterVelocityCalcultion(&gate);

 UnityAssertEqualNumber((UNITY_INT)((159.4)), (UNITY_INT)((gate.velocityWater)), (

((void *)0)

), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);

}





void test_WaterSpeedWitFreeGate(void){

    float gatePosition = 30;

 float gateWidth =25;



 GateInit(&gate,gateWidth);

 SensorInit(&s1,150);

 UnityAssertEqualNumber((UNITY_INT)((150)), (UNITY_INT)((s1.level)), (

((void *)0)

), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

 SensorInit(&s2, 30);

 UnityAssertEqualNumber((UNITY_INT)((30)), (UNITY_INT)((s2.level)), (

((void *)0)

), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);

 SetGatePosition(&gate, gatePosition);

 UnityAssertEqualNumber((UNITY_INT)((30)), (UNITY_INT)((gate.gatePosition)), (

((void *)0)

), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);

 SetIsGateWorkFree(&gate,&s2);

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((gate.isGateWorkFree)), (

((void *)0)

), (UNITY_UINT)(34), UNITY_DISPLAY_STYLE_INT);

    WaterVelocityCalcultion(&gate);

    UnityAssertEqualNumber((UNITY_INT)((860.82)), (UNITY_INT)((gate.velocityWater)), (

   ((void *)0)

   ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);

}





void test_calculateSection(void){

 float gatePosition = 35;

 float gateWidth = 25;

 GateInit(&gate,gateWidth);

 SetGatePosition(&gate, gatePosition);

 calculationSectionGate(&gate);

 UnityAssertEqualNumber((UNITY_INT)((875)), (UNITY_INT)((gate.section)), (

((void *)0)

), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_INT);

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

), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT);

}





void test_calculateFlowWithSubmergedGate(void){

 float gatePosition = 45;

 float gateWidth = 25;

 GateInit(&gate,gateWidth);

 SetGatePosition(&gate, gatePosition);

 SensorInit(&s1,100);

 UnityAssertEqualNumber((UNITY_INT)((100)), (UNITY_INT)((s1.level)), (

((void *)0)

), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_INT);

 SensorInit(&s2, 65);

 UnityAssertEqualNumber((UNITY_INT)((65)), (UNITY_INT)((s2.level)), (

((void *)0)

), (UNITY_UINT)(72), UNITY_DISPLAY_STYLE_INT);

 SetIsGateWorkFree(&gate,&s2);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((gate.isGateWorkFree)), (

((void *)0)

), (UNITY_UINT)(74), UNITY_DISPLAY_STYLE_INT);

 WaterVelocityCalcultion(&gate);

 UnityAssertEqualNumber((UNITY_INT)((223.1775)), (UNITY_INT)((gate.velocityWater)), (

((void *)0)

), (UNITY_UINT)(76), UNITY_DISPLAY_STYLE_INT);

 calculationSectionGate(&gate);

 calculateflow(&gate);

   UnityAssertEqualNumber((UNITY_INT)((251074.68)), (UNITY_INT)((gate.waterFlow)), (

  ((void *)0)

  ), (UNITY_UINT)(79), UNITY_DISPLAY_STYLE_INT);

}





void test_SensorInitialization(void){

 SensorInit(&s1,451);

 UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((s1.level)), (

((void *)0)

), (UNITY_UINT)(85), UNITY_DISPLAY_STYLE_INT);

 SensorInit(&s2,-158);

 UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((s2.level)), (

((void *)0)

), (UNITY_UINT)(87), UNITY_DISPLAY_STYLE_INT);

}



void test_ValueIncorrectGatePosition(void){

 SetGatePosition(&gate,-2);

 UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.gatePosition)), (

((void *)0)

), (UNITY_UINT)(92), UNITY_DISPLAY_STYLE_INT) ;

}



void test_calculateFlowWithSubmergedGateAndValueIncorrect(void){

  float gatePosition = 351;

 float gateWidth = 25;

 GateInit(&gate,gateWidth);

 SetGatePosition(&gate, gatePosition);

 UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.gatePosition)), (

((void *)0)

), (UNITY_UINT)(100), UNITY_DISPLAY_STYLE_INT);

 SensorInit(&s1,150);

 UnityAssertEqualNumber((UNITY_INT)((150)), (UNITY_INT)((s1.level)), (

((void *)0)

), (UNITY_UINT)(102), UNITY_DISPLAY_STYLE_INT);

 SensorInit(&s2, 250);

 UnityAssertEqualNumber((UNITY_INT)((250)), (UNITY_INT)((s2.level)), (

((void *)0)

), (UNITY_UINT)(104), UNITY_DISPLAY_STYLE_INT);

 SetIsGateWorkFree(&gate,&s2);

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.isGateWorkFree)), (

   ((void *)0)

   ), (UNITY_UINT)(106), UNITY_DISPLAY_STYLE_INT);

  WaterVelocityCalcultion(&gate);

 UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.velocityWater)), (

((void *)0)

), (UNITY_UINT)(108), UNITY_DISPLAY_STYLE_INT);

 calculationSectionGate(&gate);

 UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.section)), (

((void *)0)

), (UNITY_UINT)(110), UNITY_DISPLAY_STYLE_INT);

 calculateflow(&gate);

   UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((gate.waterFlow)), (

  ((void *)0)

  ), (UNITY_UINT)(112), UNITY_DISPLAY_STYLE_INT);

}
