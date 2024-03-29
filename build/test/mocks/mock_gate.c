/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_gate.h"

static const char* CMockString_GateInit = "GateInit";
static const char* CMockString_GetLevelWater = "GetLevelWater";
static const char* CMockString_GetPosition = "GetPosition";
static const char* CMockString_IsGateFree = "IsGateFree";
static const char* CMockString_SensorInit = "SensorInit";
static const char* CMockString_WaterVelocityCalcultion = "WaterVelocityCalcultion";
static const char* CMockString_calculateflow = "calculateflow";
static const char* CMockString_calculationSectionGate = "calculationSectionGate";
static const char* CMockString_g = "g";
static const char* CMockString_gatePosition = "gatePosition";
static const char* CMockString_gateWidth = "gateWidth";
static const char* CMockString_isGateWorkFree = "isGateWorkFree";
static const char* CMockString_levelWater = "levelWater";
static const char* CMockString_s = "s";

typedef struct _CMOCK_SensorInit_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  SensorUlt_t* Expected_s;
  float Expected_levelWater;

} CMOCK_SensorInit_CALL_INSTANCE;

typedef struct _CMOCK_GetLevelWater_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  float ReturnVal;
  int CallOrder;
  SensorUlt_t* Expected_s;

} CMOCK_GetLevelWater_CALL_INSTANCE;

typedef struct _CMOCK_GateInit_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  Gate_t* Expected_g;
  uint8_t Expected_isGateWorkFree;
  float Expected_gatePosition;
  float Expected_gateWidth;

} CMOCK_GateInit_CALL_INSTANCE;

typedef struct _CMOCK_IsGateFree_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  uint8_t ReturnVal;
  int CallOrder;
  Gate_t* Expected_g;

} CMOCK_IsGateFree_CALL_INSTANCE;

typedef struct _CMOCK_GetPosition_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  float ReturnVal;
  int CallOrder;
  Gate_t* Expected_g;

} CMOCK_GetPosition_CALL_INSTANCE;

typedef struct _CMOCK_WaterVelocityCalcultion_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  Gate_t* Expected_g;

} CMOCK_WaterVelocityCalcultion_CALL_INSTANCE;

typedef struct _CMOCK_calculationSectionGate_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  Gate_t* Expected_g;

} CMOCK_calculationSectionGate_CALL_INSTANCE;

typedef struct _CMOCK_calculateflow_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  Gate_t* Expected_g;

} CMOCK_calculateflow_CALL_INSTANCE;

static struct mock_gateInstance
{
  int SensorInit_IgnoreBool;
  CMOCK_SensorInit_CALLBACK SensorInit_CallbackFunctionPointer;
  int SensorInit_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE SensorInit_CallInstance;
  int GetLevelWater_IgnoreBool;
  float GetLevelWater_FinalReturn;
  CMOCK_GetLevelWater_CALLBACK GetLevelWater_CallbackFunctionPointer;
  int GetLevelWater_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE GetLevelWater_CallInstance;
  int GateInit_IgnoreBool;
  CMOCK_GateInit_CALLBACK GateInit_CallbackFunctionPointer;
  int GateInit_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE GateInit_CallInstance;
  int IsGateFree_IgnoreBool;
  uint8_t IsGateFree_FinalReturn;
  CMOCK_IsGateFree_CALLBACK IsGateFree_CallbackFunctionPointer;
  int IsGateFree_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE IsGateFree_CallInstance;
  int GetPosition_IgnoreBool;
  float GetPosition_FinalReturn;
  CMOCK_GetPosition_CALLBACK GetPosition_CallbackFunctionPointer;
  int GetPosition_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE GetPosition_CallInstance;
  int WaterVelocityCalcultion_IgnoreBool;
  CMOCK_WaterVelocityCalcultion_CALLBACK WaterVelocityCalcultion_CallbackFunctionPointer;
  int WaterVelocityCalcultion_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE WaterVelocityCalcultion_CallInstance;
  int calculationSectionGate_IgnoreBool;
  CMOCK_calculationSectionGate_CALLBACK calculationSectionGate_CallbackFunctionPointer;
  int calculationSectionGate_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE calculationSectionGate_CallInstance;
  int calculateflow_IgnoreBool;
  CMOCK_calculateflow_CALLBACK calculateflow_CallbackFunctionPointer;
  int calculateflow_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE calculateflow_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_gate_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.SensorInit_IgnoreBool)
    Mock.SensorInit_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_SensorInit);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.SensorInit_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.SensorInit_CallbackFunctionPointer != NULL)
    Mock.SensorInit_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.GetLevelWater_IgnoreBool)
    Mock.GetLevelWater_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_GetLevelWater);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.GetLevelWater_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.GetLevelWater_CallbackFunctionPointer != NULL)
    Mock.GetLevelWater_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.GateInit_IgnoreBool)
    Mock.GateInit_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_GateInit);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.GateInit_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.GateInit_CallbackFunctionPointer != NULL)
    Mock.GateInit_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.IsGateFree_IgnoreBool)
    Mock.IsGateFree_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_IsGateFree);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.IsGateFree_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.IsGateFree_CallbackFunctionPointer != NULL)
    Mock.IsGateFree_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.GetPosition_IgnoreBool)
    Mock.GetPosition_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_GetPosition);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.GetPosition_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.GetPosition_CallbackFunctionPointer != NULL)
    Mock.GetPosition_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.WaterVelocityCalcultion_IgnoreBool)
    Mock.WaterVelocityCalcultion_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_WaterVelocityCalcultion);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.WaterVelocityCalcultion_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.WaterVelocityCalcultion_CallbackFunctionPointer != NULL)
    Mock.WaterVelocityCalcultion_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.calculationSectionGate_IgnoreBool)
    Mock.calculationSectionGate_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_calculationSectionGate);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.calculationSectionGate_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.calculationSectionGate_CallbackFunctionPointer != NULL)
    Mock.calculationSectionGate_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.calculateflow_IgnoreBool)
    Mock.calculateflow_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_calculateflow);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.calculateflow_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.calculateflow_CallbackFunctionPointer != NULL)
    Mock.calculateflow_CallInstance = CMOCK_GUTS_NONE;
}

void mock_gate_Init(void)
{
  mock_gate_Destroy();
}

void mock_gate_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.SensorInit_CallbackFunctionPointer = NULL;
  Mock.SensorInit_CallbackCalls = 0;
  Mock.GetLevelWater_CallbackFunctionPointer = NULL;
  Mock.GetLevelWater_CallbackCalls = 0;
  Mock.GateInit_CallbackFunctionPointer = NULL;
  Mock.GateInit_CallbackCalls = 0;
  Mock.IsGateFree_CallbackFunctionPointer = NULL;
  Mock.IsGateFree_CallbackCalls = 0;
  Mock.GetPosition_CallbackFunctionPointer = NULL;
  Mock.GetPosition_CallbackCalls = 0;
  Mock.WaterVelocityCalcultion_CallbackFunctionPointer = NULL;
  Mock.WaterVelocityCalcultion_CallbackCalls = 0;
  Mock.calculationSectionGate_CallbackFunctionPointer = NULL;
  Mock.calculationSectionGate_CallbackCalls = 0;
  Mock.calculateflow_CallbackFunctionPointer = NULL;
  Mock.calculateflow_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void SensorInit(SensorUlt_t* s, float levelWater)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_SensorInit_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_SensorInit);
  cmock_call_instance = (CMOCK_SensorInit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.SensorInit_CallInstance);
  Mock.SensorInit_CallInstance = CMock_Guts_MemNext(Mock.SensorInit_CallInstance);
  if (Mock.SensorInit_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.SensorInit_CallbackFunctionPointer != NULL)
  {
    Mock.SensorInit_CallbackFunctionPointer(s, levelWater, Mock.SensorInit_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_SensorInit,CMockString_s);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_s), (void*)(s), sizeof(SensorUlt_t), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_SensorInit,CMockString_levelWater);
    UNITY_TEST_ASSERT_EQUAL_FLOAT(cmock_call_instance->Expected_levelWater, levelWater, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_SensorInit(CMOCK_SensorInit_CALL_INSTANCE* cmock_call_instance, SensorUlt_t* s, float levelWater)
{
  cmock_call_instance->Expected_s = s;
  cmock_call_instance->Expected_levelWater = levelWater;
}

void SensorInit_CMockIgnore(void)
{
  Mock.SensorInit_IgnoreBool = (int)1;
}

void SensorInit_CMockExpect(UNITY_LINE_TYPE cmock_line, SensorUlt_t* s, float levelWater)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SensorInit_CALL_INSTANCE));
  CMOCK_SensorInit_CALL_INSTANCE* cmock_call_instance = (CMOCK_SensorInit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SensorInit_CallInstance = CMock_Guts_MemChain(Mock.SensorInit_CallInstance, cmock_guts_index);
  Mock.SensorInit_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_SensorInit(cmock_call_instance, s, levelWater);
  UNITY_CLR_DETAILS();
}

void SensorInit_StubWithCallback(CMOCK_SensorInit_CALLBACK Callback)
{
  Mock.SensorInit_IgnoreBool = (int)0;
  Mock.SensorInit_CallbackFunctionPointer = Callback;
}

float GetLevelWater(SensorUlt_t* s)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_GetLevelWater_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_GetLevelWater);
  cmock_call_instance = (CMOCK_GetLevelWater_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.GetLevelWater_CallInstance);
  Mock.GetLevelWater_CallInstance = CMock_Guts_MemNext(Mock.GetLevelWater_CallInstance);
  if (Mock.GetLevelWater_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.GetLevelWater_FinalReturn;
    Mock.GetLevelWater_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.GetLevelWater_CallbackFunctionPointer != NULL)
  {
    return Mock.GetLevelWater_CallbackFunctionPointer(s, Mock.GetLevelWater_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_GetLevelWater,CMockString_s);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_s), (void*)(s), sizeof(SensorUlt_t), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_GetLevelWater(CMOCK_GetLevelWater_CALL_INSTANCE* cmock_call_instance, SensorUlt_t* s)
{
  cmock_call_instance->Expected_s = s;
}

void GetLevelWater_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, float cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GetLevelWater_CALL_INSTANCE));
  CMOCK_GetLevelWater_CALL_INSTANCE* cmock_call_instance = (CMOCK_GetLevelWater_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GetLevelWater_CallInstance = CMock_Guts_MemChain(Mock.GetLevelWater_CallInstance, cmock_guts_index);
  Mock.GetLevelWater_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.GetLevelWater_IgnoreBool = (int)1;
}

void GetLevelWater_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, SensorUlt_t* s, float cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GetLevelWater_CALL_INSTANCE));
  CMOCK_GetLevelWater_CALL_INSTANCE* cmock_call_instance = (CMOCK_GetLevelWater_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GetLevelWater_CallInstance = CMock_Guts_MemChain(Mock.GetLevelWater_CallInstance, cmock_guts_index);
  Mock.GetLevelWater_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_GetLevelWater(cmock_call_instance, s);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void GetLevelWater_StubWithCallback(CMOCK_GetLevelWater_CALLBACK Callback)
{
  Mock.GetLevelWater_IgnoreBool = (int)0;
  Mock.GetLevelWater_CallbackFunctionPointer = Callback;
}

void GateInit(Gate_t* g, uint8_t isGateWorkFree, float gatePosition, float gateWidth)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_GateInit_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_GateInit);
  cmock_call_instance = (CMOCK_GateInit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.GateInit_CallInstance);
  Mock.GateInit_CallInstance = CMock_Guts_MemNext(Mock.GateInit_CallInstance);
  if (Mock.GateInit_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.GateInit_CallbackFunctionPointer != NULL)
  {
    Mock.GateInit_CallbackFunctionPointer(g, isGateWorkFree, gatePosition, gateWidth, Mock.GateInit_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_GateInit,CMockString_g);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_g), (void*)(g), sizeof(Gate_t), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_GateInit,CMockString_isGateWorkFree);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_isGateWorkFree, isGateWorkFree, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_GateInit,CMockString_gatePosition);
    UNITY_TEST_ASSERT_EQUAL_FLOAT(cmock_call_instance->Expected_gatePosition, gatePosition, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_GateInit,CMockString_gateWidth);
    UNITY_TEST_ASSERT_EQUAL_FLOAT(cmock_call_instance->Expected_gateWidth, gateWidth, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_GateInit(CMOCK_GateInit_CALL_INSTANCE* cmock_call_instance, Gate_t* g, uint8_t isGateWorkFree, float gatePosition, float gateWidth)
{
  cmock_call_instance->Expected_g = g;
  cmock_call_instance->Expected_isGateWorkFree = isGateWorkFree;
  cmock_call_instance->Expected_gatePosition = gatePosition;
  cmock_call_instance->Expected_gateWidth = gateWidth;
}

void GateInit_CMockIgnore(void)
{
  Mock.GateInit_IgnoreBool = (int)1;
}

void GateInit_CMockExpect(UNITY_LINE_TYPE cmock_line, Gate_t* g, uint8_t isGateWorkFree, float gatePosition, float gateWidth)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GateInit_CALL_INSTANCE));
  CMOCK_GateInit_CALL_INSTANCE* cmock_call_instance = (CMOCK_GateInit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GateInit_CallInstance = CMock_Guts_MemChain(Mock.GateInit_CallInstance, cmock_guts_index);
  Mock.GateInit_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_GateInit(cmock_call_instance, g, isGateWorkFree, gatePosition, gateWidth);
  UNITY_CLR_DETAILS();
}

void GateInit_StubWithCallback(CMOCK_GateInit_CALLBACK Callback)
{
  Mock.GateInit_IgnoreBool = (int)0;
  Mock.GateInit_CallbackFunctionPointer = Callback;
}

uint8_t IsGateFree(Gate_t* g)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_IsGateFree_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_IsGateFree);
  cmock_call_instance = (CMOCK_IsGateFree_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.IsGateFree_CallInstance);
  Mock.IsGateFree_CallInstance = CMock_Guts_MemNext(Mock.IsGateFree_CallInstance);
  if (Mock.IsGateFree_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.IsGateFree_FinalReturn;
    Mock.IsGateFree_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.IsGateFree_CallbackFunctionPointer != NULL)
  {
    return Mock.IsGateFree_CallbackFunctionPointer(g, Mock.IsGateFree_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_IsGateFree,CMockString_g);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_g), (void*)(g), sizeof(Gate_t), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_IsGateFree(CMOCK_IsGateFree_CALL_INSTANCE* cmock_call_instance, Gate_t* g)
{
  cmock_call_instance->Expected_g = g;
}

void IsGateFree_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_IsGateFree_CALL_INSTANCE));
  CMOCK_IsGateFree_CALL_INSTANCE* cmock_call_instance = (CMOCK_IsGateFree_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.IsGateFree_CallInstance = CMock_Guts_MemChain(Mock.IsGateFree_CallInstance, cmock_guts_index);
  Mock.IsGateFree_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.IsGateFree_IgnoreBool = (int)1;
}

void IsGateFree_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, Gate_t* g, uint8_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_IsGateFree_CALL_INSTANCE));
  CMOCK_IsGateFree_CALL_INSTANCE* cmock_call_instance = (CMOCK_IsGateFree_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.IsGateFree_CallInstance = CMock_Guts_MemChain(Mock.IsGateFree_CallInstance, cmock_guts_index);
  Mock.IsGateFree_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_IsGateFree(cmock_call_instance, g);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void IsGateFree_StubWithCallback(CMOCK_IsGateFree_CALLBACK Callback)
{
  Mock.IsGateFree_IgnoreBool = (int)0;
  Mock.IsGateFree_CallbackFunctionPointer = Callback;
}

float GetPosition(Gate_t* g)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_GetPosition_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_GetPosition);
  cmock_call_instance = (CMOCK_GetPosition_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.GetPosition_CallInstance);
  Mock.GetPosition_CallInstance = CMock_Guts_MemNext(Mock.GetPosition_CallInstance);
  if (Mock.GetPosition_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.GetPosition_FinalReturn;
    Mock.GetPosition_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.GetPosition_CallbackFunctionPointer != NULL)
  {
    return Mock.GetPosition_CallbackFunctionPointer(g, Mock.GetPosition_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_GetPosition,CMockString_g);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_g), (void*)(g), sizeof(Gate_t), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_GetPosition(CMOCK_GetPosition_CALL_INSTANCE* cmock_call_instance, Gate_t* g)
{
  cmock_call_instance->Expected_g = g;
}

void GetPosition_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, float cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GetPosition_CALL_INSTANCE));
  CMOCK_GetPosition_CALL_INSTANCE* cmock_call_instance = (CMOCK_GetPosition_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GetPosition_CallInstance = CMock_Guts_MemChain(Mock.GetPosition_CallInstance, cmock_guts_index);
  Mock.GetPosition_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.GetPosition_IgnoreBool = (int)1;
}

void GetPosition_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, Gate_t* g, float cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_GetPosition_CALL_INSTANCE));
  CMOCK_GetPosition_CALL_INSTANCE* cmock_call_instance = (CMOCK_GetPosition_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.GetPosition_CallInstance = CMock_Guts_MemChain(Mock.GetPosition_CallInstance, cmock_guts_index);
  Mock.GetPosition_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_GetPosition(cmock_call_instance, g);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void GetPosition_StubWithCallback(CMOCK_GetPosition_CALLBACK Callback)
{
  Mock.GetPosition_IgnoreBool = (int)0;
  Mock.GetPosition_CallbackFunctionPointer = Callback;
}

void WaterVelocityCalcultion(Gate_t* g)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_WaterVelocityCalcultion_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_WaterVelocityCalcultion);
  cmock_call_instance = (CMOCK_WaterVelocityCalcultion_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.WaterVelocityCalcultion_CallInstance);
  Mock.WaterVelocityCalcultion_CallInstance = CMock_Guts_MemNext(Mock.WaterVelocityCalcultion_CallInstance);
  if (Mock.WaterVelocityCalcultion_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.WaterVelocityCalcultion_CallbackFunctionPointer != NULL)
  {
    Mock.WaterVelocityCalcultion_CallbackFunctionPointer(g, Mock.WaterVelocityCalcultion_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_WaterVelocityCalcultion,CMockString_g);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_g), (void*)(g), sizeof(Gate_t), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_WaterVelocityCalcultion(CMOCK_WaterVelocityCalcultion_CALL_INSTANCE* cmock_call_instance, Gate_t* g)
{
  cmock_call_instance->Expected_g = g;
}

void WaterVelocityCalcultion_CMockIgnore(void)
{
  Mock.WaterVelocityCalcultion_IgnoreBool = (int)1;
}

void WaterVelocityCalcultion_CMockExpect(UNITY_LINE_TYPE cmock_line, Gate_t* g)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_WaterVelocityCalcultion_CALL_INSTANCE));
  CMOCK_WaterVelocityCalcultion_CALL_INSTANCE* cmock_call_instance = (CMOCK_WaterVelocityCalcultion_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.WaterVelocityCalcultion_CallInstance = CMock_Guts_MemChain(Mock.WaterVelocityCalcultion_CallInstance, cmock_guts_index);
  Mock.WaterVelocityCalcultion_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_WaterVelocityCalcultion(cmock_call_instance, g);
  UNITY_CLR_DETAILS();
}

void WaterVelocityCalcultion_StubWithCallback(CMOCK_WaterVelocityCalcultion_CALLBACK Callback)
{
  Mock.WaterVelocityCalcultion_IgnoreBool = (int)0;
  Mock.WaterVelocityCalcultion_CallbackFunctionPointer = Callback;
}

void calculationSectionGate(Gate_t* g)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_calculationSectionGate_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_calculationSectionGate);
  cmock_call_instance = (CMOCK_calculationSectionGate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.calculationSectionGate_CallInstance);
  Mock.calculationSectionGate_CallInstance = CMock_Guts_MemNext(Mock.calculationSectionGate_CallInstance);
  if (Mock.calculationSectionGate_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.calculationSectionGate_CallbackFunctionPointer != NULL)
  {
    Mock.calculationSectionGate_CallbackFunctionPointer(g, Mock.calculationSectionGate_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_calculationSectionGate,CMockString_g);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_g), (void*)(g), sizeof(Gate_t), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_calculationSectionGate(CMOCK_calculationSectionGate_CALL_INSTANCE* cmock_call_instance, Gate_t* g)
{
  cmock_call_instance->Expected_g = g;
}

void calculationSectionGate_CMockIgnore(void)
{
  Mock.calculationSectionGate_IgnoreBool = (int)1;
}

void calculationSectionGate_CMockExpect(UNITY_LINE_TYPE cmock_line, Gate_t* g)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_calculationSectionGate_CALL_INSTANCE));
  CMOCK_calculationSectionGate_CALL_INSTANCE* cmock_call_instance = (CMOCK_calculationSectionGate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.calculationSectionGate_CallInstance = CMock_Guts_MemChain(Mock.calculationSectionGate_CallInstance, cmock_guts_index);
  Mock.calculationSectionGate_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_calculationSectionGate(cmock_call_instance, g);
  UNITY_CLR_DETAILS();
}

void calculationSectionGate_StubWithCallback(CMOCK_calculationSectionGate_CALLBACK Callback)
{
  Mock.calculationSectionGate_IgnoreBool = (int)0;
  Mock.calculationSectionGate_CallbackFunctionPointer = Callback;
}

void calculateflow(Gate_t* g)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_calculateflow_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_calculateflow);
  cmock_call_instance = (CMOCK_calculateflow_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.calculateflow_CallInstance);
  Mock.calculateflow_CallInstance = CMock_Guts_MemNext(Mock.calculateflow_CallInstance);
  if (Mock.calculateflow_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.calculateflow_CallbackFunctionPointer != NULL)
  {
    Mock.calculateflow_CallbackFunctionPointer(g, Mock.calculateflow_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_calculateflow,CMockString_g);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_g), (void*)(g), sizeof(Gate_t), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_calculateflow(CMOCK_calculateflow_CALL_INSTANCE* cmock_call_instance, Gate_t* g)
{
  cmock_call_instance->Expected_g = g;
}

void calculateflow_CMockIgnore(void)
{
  Mock.calculateflow_IgnoreBool = (int)1;
}

void calculateflow_CMockExpect(UNITY_LINE_TYPE cmock_line, Gate_t* g)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_calculateflow_CALL_INSTANCE));
  CMOCK_calculateflow_CALL_INSTANCE* cmock_call_instance = (CMOCK_calculateflow_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.calculateflow_CallInstance = CMock_Guts_MemChain(Mock.calculateflow_CallInstance, cmock_guts_index);
  Mock.calculateflow_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_calculateflow(cmock_call_instance, g);
  UNITY_CLR_DETAILS();
}

void calculateflow_StubWithCallback(CMOCK_calculateflow_CALLBACK Callback)
{
  Mock.calculateflow_IgnoreBool = (int)0;
  Mock.calculateflow_CallbackFunctionPointer = Callback;
}

