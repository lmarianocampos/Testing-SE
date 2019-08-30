











typedef struct {

  float level;





}SensorUlt_t;



SensorUlt_t s1,s2;

typedef struct{

 uint8_t isGateWorkFree;

 float gatePosition;

 float loadHydraulics;

 float velocityWater;

 float section;

 float gateWidth;

 float waterFlow;

}Gate_t;



Gate_t gate;



void SensorInit(SensorUlt_t * s, float levelWater);

float GetLevelWater(SensorUlt_t * s);

void GateInit(Gate_t * g,uint8_t isGateWorkFree,float gatePosition, float gateWidth);

uint8_t IsGateFree(Gate_t * g);

float GetPosition(Gate_t * g);

void WaterVelocityCalcultion(Gate_t * g);

void calculationSectionGate(Gate_t *g);

void calculateflow(Gate_t * g);
