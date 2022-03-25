#include <stdio.h>
#include <math.h>
//Grados a Radianes Funciones
//Declarar funciones
float gra_rad(float grados);
int main(){
	//Compilar
	float grados,radianes;
	//Pedir datos
	printf("Ingresa los grados");
	scanf("%f",&grados);
	//Formula
	radianes = gra_rad(grados);
	//Resultado
	printf("Radianes = %f",radianes);
	
	return 0;
}
//Definir funciones
float gra_rad(float grados){
	return (grados * M_PI)/180;
}

