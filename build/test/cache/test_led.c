#include "build/temp/_test_led.c"
#include "leds.h"
#include "unity.h"


static uint16_t puerto;



struct{

    gravedad_t gravedad;

 char archivo[64];

 char funcion[64];

 int linea;

 char mensaje[64];



}error;



void RegistrarError( gravedad_t gravedad, const char * archivo, const char * funcion, int linea,const char * mensaje){

 error.gravedad=gravedad;

 error.linea=linea;

 strcpy(error.archivo,archivo);

 strcpy(error.funcion, funcion);

 strcpy(error.mensaje, mensaje);



}

void SetUp(void){

 LedCreate(& puerto, RegistrarError );

}



void test_inizializacion(void){



 uint16_t puerto = 0xFFFF;

 LedCreate (&puerto,RegistrarError);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((puerto)), (

((void *)0)

), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);

}



void test_prender_un_led_individual(void){



 LedPrender(1);

 UnityAssertEqualNumber((UNITY_INT)((0x0001)), (UNITY_INT)((puerto)), (

((void *)0)

), (UNITY_UINT)(37), UNITY_DISPLAY_STYLE_INT);



}

void test_apagar_un_led_individual(void){

 LedPrender(1);

 LedApagar(1);

 UnityAssertEqualNumber((UNITY_INT)((0x0000)), (UNITY_INT)((puerto)), (

((void *)0)

), (UNITY_UINT)(43), UNITY_DISPLAY_STYLE_INT);



}

void test_prender_y_apagar_varios_leds(void){

 LedPrender(2);

 LedPrender(4);

 LedApagar(2);

 UnityAssertEqualNumber((UNITY_INT)((0x0008)), (UNITY_INT)((puerto)), (

((void *)0)

), (UNITY_UINT)(50), UNITY_DISPLAY_STYLE_INT);



}



void test_numero_led_invalido(void){

 LedPrender(17);

 UnityAssertEqualNumber((UNITY_INT)((WARNING)), (UNITY_INT)((error.gravedad)), (

((void *)0)

), (UNITY_UINT)(56), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualString((const char*)(("Parametro invalido")), (const char*)((error.mensaje)), (

((void *)0)

), (UNITY_UINT)(57));

}
