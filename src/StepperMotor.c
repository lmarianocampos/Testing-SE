#include "StepperMotor.h"

void StepperMotorInit(stepperMotor_t *sM, int32_t sPerRevolution){
    if(sPerRevolution>=0){    
        sM->stepsPerRevolution=sPerRevolution;

    }
    else{
        sM->stepsPerRevolution=-1;
    }
}
void StepperMotorSetEnableMotor(stepperMotor_t * sM , int8_t eStepperMotor){
    if(eStepperMotor==ENABLE || eStepperMotor==DISABLE){

        sM-> enable=eStepperMotor;    
    }
    else{
        sM->enable=-1;
    }
}
void StepperMotorSetTurningSense(stepperMotor_t * sM, int8_t tSense ){
    if (tSense==LEFT || tSense==RIGHT){
        sM->turningSense=tSense;
    }
    else{
        sM->turningSense = -1;
    }
}
void StepperMotorSetAngle(stepperMotor_t * sM, float angle){
    if(angle>0 && angle<=10){
        sM->stepperAngle = angle;
    }
    else{
        sM->stepperAngle = -1;
    }

}
void StepperMotorSetTrainPulse(stepperMotor_t * sM, int32_t cPulse){
    if(cPulse>=MINPULSE  && cPulse<=MAXPULSE)
    {           
        for(sM->counterPulse=0;sM->counterPulse<cPulse;sM->counterPulse++){
            sM->pulseTrain = 1;
            usleep(50);
            sM->pulseTrain = 0;
            usleep(50);
        } 
            
    }
    else{
    sM ->counterPulse=-1;
    }     
}

void StepperMotorNumberOfTurns(stepperMotor_t * sM, float numberOfTurns){
int32_t nTurns;
    if(numberOfTurns>=0 && numberOfTurns<=3.5){
       nTurns=(numberOfTurns)*(sM->stepsPerRevolution);
       StepperMotorSetTrainPulse(sM,nTurns);
     }
}
void StepperMotorMoveAngle(stepperMotor_t * sM, float angle){
int32_t steps;
    if(angle>0 && angle<=1260){
        steps = angle/sM->stepperAngle;
        
    }
    else{
        steps=-1;
    }
    StepperMotorSetTrainPulse(sM,steps);
}
