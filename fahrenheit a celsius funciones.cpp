#include <stdio.h>
//Fahrenheit a celsius funcion
//Declarar funciones
float fahrenheit_celsius(float fahrenheit);
int main(){
	//Compilar
	float fahrenheit,celsius;
	//Pedir datos
	printf("Ingresa los grados Fahrenheit_");
	scanf("%f",&fahrenheit);
	//Formula
	celsius = fahrenheit_celsius(fahrenheit);
	//Resultado
	printf("Grados Celsius = %f",celsius);

	return 0;
}
//Definir funciones
float fahrenheit_celsius(float fahrenheit){
	return (fahrenheit - 32)/1.8;
}

