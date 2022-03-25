#include<stdio.h>
#include<math.h>
//Binomio al cuadrado con funciones
//Declarar funciones
float valorA(float vA);
float valor2AB(float vA,float vB);
float valorB(float vB);

int main(){
	//Compilar
	float vA,v2AB,vB;
	//Pedir datos
	printf("Ingresa el valor de A_");
	scanf("%f",&vA);
	printf("Ingresa el valor de B_");
	scanf("%f",&vB);
	//Formula
	vA = valorA(vA);
	v2AB = valor2AB(vA,vB);
	vB = valorB(vB);
	//Resultado
	printf("Valor 1 = %f",vA);
	printf("Valor 2 = %f",v2AB);
	printf("Valor 3 = %f",vB);
	
	return 0;
}
float valorA(float vA){
	return pow(vA,2);
}
float valor2AB(float vA,float vB){
	return (vB * vA)* 2;
}
float valorB(float vB){
	return pow(vB,2);
}
