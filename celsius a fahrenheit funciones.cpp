#include <stdio.h>
//celsius a farenheit funciones
//Declarar funciones
float cel_a_fha(float celsius);
int main(){
	//Compilar
	float celsius,fahrenheit;
	//Pedir datos
	printf("Ingresa los grados celsius_");
	scanf("%f",&celsius);
	//Formula
	fahrenheit = cel_a_fha(celsius);
	//Resultado
	printf("Fahrenheit = %f",fahrenheit);
	
	return 0;
}
//Definir fnciones
float cel_a_fha(float celsius){
	return (celsius * 1.8)+32;
}
