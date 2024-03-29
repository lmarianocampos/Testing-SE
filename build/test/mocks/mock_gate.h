/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_GATE_H
#define _MOCK_GATE_H

#include "gate.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_gate_Init(void);
void mock_gate_Destroy(void);
void mock_gate_Verify(void);




#define SensorInit_Ignore() SensorInit_CMockIgnore()
void SensorInit_CMockIgnore(void);
#define SensorInit_Expect(s, levelWater) SensorInit_CMockExpect(__LINE__, s, levelWater)
void SensorInit_CMockExpect(UNITY_LINE_TYPE cmock_line, SensorUlt_t* s, float levelWater);
typedef void (* CMOCK_SensorInit_CALLBACK)(SensorUlt_t* s, float levelWater, int cmock_num_calls);
void SensorInit_StubWithCallback(CMOCK_SensorInit_CALLBACK Callback);
#define GetLevelWater_IgnoreAndReturn(cmock_retval) GetLevelWater_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void GetLevelWater_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, float cmock_to_return);
#define GetLevelWater_ExpectAndReturn(s, cmock_retval) GetLevelWater_CMockExpectAndReturn(__LINE__, s, cmock_retval)
void GetLevelWater_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, SensorUlt_t* s, float cmock_to_return);
typedef float (* CMOCK_GetLevelWater_CALLBACK)(SensorUlt_t* s, int cmock_num_calls);
void GetLevelWater_StubWithCallback(CMOCK_GetLevelWater_CALLBACK Callback);
#define GateInit_Ignore() GateInit_CMockIgnore()
void GateInit_CMockIgnore(void);
#define GateInit_Expect(g, isGateWorkFree, gatePosition, gateWidth) GateInit_CMockExpect(__LINE__, g, isGateWorkFree, gatePosition, gateWidth)
void GateInit_CMockExpect(UNITY_LINE_TYPE cmock_line, Gate_t* g, uint8_t isGateWorkFree, float gatePosition, float gateWidth);
typedef void (* CMOCK_GateInit_CALLBACK)(Gate_t* g, uint8_t isGateWorkFree, float gatePosition, float gateWidth, int cmock_num_calls);
void GateInit_StubWithCallback(CMOCK_GateInit_CALLBACK Callback);
#define IsGateFree_IgnoreAndReturn(cmock_retval) IsGateFree_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void IsGateFree_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
#define IsGateFree_ExpectAndReturn(g, cmock_retval) IsGateFree_CMockExpectAndReturn(__LINE__, g, cmock_retval)
void IsGateFree_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, Gate_t* g, uint8_t cmock_to_return);
typedef uint8_t (* CMOCK_IsGateFree_CALLBACK)(Gate_t* g, int cmock_num_calls);
void IsGateFree_StubWithCallback(CMOCK_IsGateFree_CALLBACK Callback);
#define GetPosition_IgnoreAndReturn(cmock_retval) GetPosition_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void GetPosition_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, float cmock_to_return);
#define GetPosition_ExpectAndReturn(g, cmock_retval) GetPosition_CMockExpectAndReturn(__LINE__, g, cmock_retval)
void GetPosition_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, Gate_t* g, float cmock_to_return);
typedef float (* CMOCK_GetPosition_CALLBACK)(Gate_t* g, int cmock_num_calls);
void GetPosition_StubWithCallback(CMOCK_GetPosition_CALLBACK Callback);
#define WaterVelocityCalcultion_Ignore() WaterVelocityCalcultion_CMockIgnore()
void WaterVelocityCalcultion_CMockIgnore(void);
#define WaterVelocityCalcultion_Expect(g) WaterVelocityCalcultion_CMockExpect(__LINE__, g)
void WaterVelocityCalcultion_CMockExpect(UNITY_LINE_TYPE cmock_line, Gate_t* g);
typedef void (* CMOCK_WaterVelocityCalcultion_CALLBACK)(Gate_t* g, int cmock_num_calls);
void WaterVelocityCalcultion_StubWithCallback(CMOCK_WaterVelocityCalcultion_CALLBACK Callback);
#define calculationSectionGate_Ignore() calculationSectionGate_CMockIgnore()
void calculationSectionGate_CMockIgnore(void);
#define calculationSectionGate_Expect(g) calculationSectionGate_CMockExpect(__LINE__, g)
void calculationSectionGate_CMockExpect(UNITY_LINE_TYPE cmock_line, Gate_t* g);
typedef void (* CMOCK_calculationSectionGate_CALLBACK)(Gate_t* g, int cmock_num_calls);
void calculationSectionGate_StubWithCallback(CMOCK_calculationSectionGate_CALLBACK Callback);
#define calculateflow_Ignore() calculateflow_CMockIgnore()
void calculateflow_CMockIgnore(void);
#define calculateflow_Expect(g) calculateflow_CMockExpect(__LINE__, g)
void calculateflow_CMockExpect(UNITY_LINE_TYPE cmock_line, Gate_t* g);
typedef void (* CMOCK_calculateflow_CALLBACK)(Gate_t* g, int cmock_num_calls);
void calculateflow_StubWithCallback(CMOCK_calculateflow_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
