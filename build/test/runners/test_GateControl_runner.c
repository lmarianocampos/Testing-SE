/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#ifdef __WIN32__
#define UNITY_INCLUDE_SETUP_STUBS
#endif
#include "unity.h"
#ifndef UNITY_EXCLUDE_SETJMP_H
#include <setjmp.h>
#endif
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_WaterSpeedWithSubmergedGate(void);
extern void test_WaterSpeedWitFreeGate(void);
extern void test_calculateSection(void);
extern void test_calculateFlow(void);
extern void test_calculateFlowWithSubmergedGate(void);
extern void test_SensorInitialization(void);
extern void test_ValueIncorrectGatePosition(void);
extern void test_calculateFlowWithSubmergedGateAndValueIncorrect(void);
extern void test_GateIncorrectValueRejection(void);
extern void test_SetepperMotorSendPulseTrain(void);
extern void test_StepperMotorMoveTurns(void);
extern void test_StepperMotorMoveAngle(void);
extern void test_StepperMotorWitdhValueIncorrect(void);


/*=======Suite Setup=====*/
static void suite_setup(void)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  suiteSetUp();
#endif
}

/*=======Suite Teardown=====*/
static int suite_teardown(int num_failures)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  return suiteTearDown(num_failures);
#else
  return num_failures;
#endif
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("test_GateControl.c");
  RUN_TEST(test_WaterSpeedWithSubmergedGate, 6);
  RUN_TEST(test_WaterSpeedWitFreeGate, 24);
  RUN_TEST(test_calculateSection, 41);
  RUN_TEST(test_calculateFlow, 51);
  RUN_TEST(test_calculateFlowWithSubmergedGate, 65);
  RUN_TEST(test_SensorInitialization, 84);
  RUN_TEST(test_ValueIncorrectGatePosition, 91);
  RUN_TEST(test_calculateFlowWithSubmergedGateAndValueIncorrect, 98);
  RUN_TEST(test_GateIncorrectValueRejection, 134);
  RUN_TEST(test_SetepperMotorSendPulseTrain, 145);
  RUN_TEST(test_StepperMotorMoveTurns, 162);
  RUN_TEST(test_StepperMotorMoveAngle, 179);
  RUN_TEST(test_StepperMotorWitdhValueIncorrect, 198);

  return suite_teardown(UnityEnd());
}
