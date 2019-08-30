#include "unity.h"
#include "gate.h"	
/*calcula la velocidad del agua la compuerta esta trabajando sumergida*/
void test_WaterSpeedWithSubmergedGate(void){
	float gatePosition = 30;
	float gateWidth = 25;
	
	GateInit(&gate,gateWidth);
	SensorInit(&s1,100);
	TEST_ASSERT_EQUAL(100,s1.level);
	SensorInit(&s2	,75);
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
	SensorInit(&s2, 30);
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
	TEST_ASSERT_EQUAL(645620.62,gate.waterFlow	);
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
   TEST_ASSERT_EQUAL(251074.68,gate.waterFlow	);
}

//verifico la función que establece los valores obtenidos del sensor
void test_SensorInitialization(void){
	SensorInit(&s1,451);
	TEST_ASSERT_EQUAL(-1,s1.level);
	SensorInit(&s2,-158);
	TEST_ASSERT_EQUAL(-1,s2.level);
}
 	
void test_ValueIncorrectGatePosition(void){
	SetGatePosition(&gate,-2);
	TEST_ASSERT_EQUAL(-1,gate.gatePosition)	;
}
		
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
   TEST_ASSERT_EQUAL(-1,gate.waterFlow	);
}
