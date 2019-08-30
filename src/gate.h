#ifndef _GATE_H
#define _GATE_H

#include <stdint.h>
#include <math.h>

#define ACELERACIONGRAVEDAD  9.81
#define COEFICIENTEDEGASTO       0.65

#define TRUE 1
#define FALSE 0

typedef struct {
  float level;
  
}SensorUlt_t;

SensorUlt_t s1,s2;

typedef struct{
	
	float gatePosition;
	float loadHydraulics;
	float velocityWater;
	float section;
	float gateWidth;
	float  waterFlow;	
	int8_t isGateWorkFree; //esta variable me indica si esta trabajando libre o sumergida
}Gate_t;

Gate_t gate;



void  SensorInit(SensorUlt_t * s, float levelWater);
float  GetLevelWater(SensorUlt_t * s);
void GateInit(Gate_t * g, float gateWidth);
int8_t IsGateFree(Gate_t * g);
float  GetPosition(Gate_t * g);
void   WaterVelocityCalcultion(Gate_t * g);
void   calculationSectionGate(Gate_t *g);
void   calculateflow(Gate_t * g);
void   SetIsGateWorkFree(Gate_t * g,SensorUlt_t * s2);
void  SetGatePosition(Gate_t * g, float gPosition);
#endif
