#include "gate.h" 
#include <math.h>
//buffer[]

void  SensorInit(SensorUlt_t *s1 , float levelWater){
	if(levelWater>=0 && levelWater<=450){
			s1->level = levelWater; 
	}
	else{
			s1->level = -1; 
	}
	
}

float GetLevelWater(SensorUlt_t * s){
   return s->level;
   }

void GateInit(Gate_t * g, float gateWidth)
{ 		if(gateWidth>=0 && gateWidth<=300)	{
				g->gateWidth=gateWidth;
	}
	else{
				g->gateWidth=-1;
	}
}

void  SetGatePosition(Gate_t * g, float gPosition){
	if (gPosition >=0 && gPosition<=350){
		g->gatePosition = gPosition;
	}
   else{
          g->gatePosition=-1;
   }
}

float GetPosition(Gate_t * g){
	return g->gatePosition;
	
}

int8_t IsGateFree(Gate_t * g){
	return g-> isGateWorkFree;
}

float GetSectionGate(Gate_t *g){
return g->section;
}

void WaterVelocityCalcultion(Gate_t * g){   
	if(IsGateFree(g)>=0){
				  if(IsGateFree(g)){
									if(GetPosition(g)>= GetLevelWater(&s2)){			  
																g->loadHydraulics = GetLevelWater(&s1) - (GetPosition(g)/2);
												  }												  
				  }
				  else
				  {
					  g->loadHydraulics = GetLevelWater(&s1)-GetLevelWater(&s2);
				  }
					g->velocityWater =  (( g->loadHydraulics *ACELERACIONGRAVEDAD))*(COEFICIENTEDEGASTO) ;
	}
	else{
		g->velocityWater= -1;
		g->loadHydraulics = -1;
	}
}

void calculationSectionGate(Gate_t *g){
	if(g->gatePosition>=0 &&g->gateWidth>=0){
			g->section = (g->gatePosition)*(g->gateWidth);
	}
	else
	{ 
				g->section=-1;
	}
}

void calculateflow(Gate_t * g){
	if(g->section>=0 && g->velocityWater>=0){
			g->waterFlow = g->section * g->velocityWater;
	}
 else{
	 g->waterFlow=-1;
	 
 }
}
void SetIsGateWorkFree(Gate_t * g,SensorUlt_t * s2)	{
	if(g->gatePosition>=0){	
				if(g->gatePosition>= s2->level){
					g->isGateWorkFree=TRUE;
				}
				else{
							if(g->gatePosition<s2->level){
								g->isGateWorkFree=FALSE;
								}
					}
	}					
	else{
			g->isGateWorkFree=-1;
		}
}
