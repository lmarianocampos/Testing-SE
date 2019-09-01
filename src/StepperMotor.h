#ifndef _STEPPERMOTOR_H
#define _STEPPERMOTOR_H
#include <sys/types.h>
#include <unistd.h>
#define MAXPULSE  700
#define MINPULSE 0
#define RIGHT 1
#define LEFT  0
#define ENABLE  1 
#define DISABLE 0

typedef struct {
	int32_t stepsPerRevolution;     //cantidad de pasos por vuelta

	int32_t counterPulse ;               //contador de pulsos
    int32_t pulseTrain;                      //muta entre 0 y 1 simulando el tren de pulso
	int8_t   turningSense;    // indica la dirección en que girará el eje del motor
	int8_t   enable;         // habilita o deshabilita el motor.
	float stepperAngle;
} stepperMotor_t;

stepperMotor_t stepper;

void StepperMotorInit(stepperMotor_t * sM, int32_t sPerRevolution);
void StepperMotorSetTrainPulse(stepperMotor_t * sM,  int32_t cPulse);
void StepperMotorSetTurningSense(stepperMotor_t * sM, int8_t tSense );
void StepperMotorSetEnableMotor(stepperMotor_t * sM, int8_t eStepperMotor);
void StepperMotorSetAngle(stepperMotor_t * sM, float angle);
int8_t StepperMotorGetTurningSense(stepperMotor_t * sM);
int8_t StepperMotorGetEnbleMotor(stepperMotor_t * sM);
void StepperMotorNumberOfTurns(stepperMotor_t * sM, float nOfTurns);
void StepperMotorMoveAngle(stepperMotor_t * sM, float angle);	


#endif
