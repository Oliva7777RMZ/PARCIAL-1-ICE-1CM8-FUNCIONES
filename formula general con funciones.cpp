#include <stdio.h>
#include <math.h>
//formula general funciones
//Declaracion de Funciones 
float valorx1(float va,float vb,float vc);
float valorx2(float va,float vb,float vc);
int main(){
	//Compilar
	float va,vb,vc,x1,x2;
	//pedir datos
	printf("Ingresa el valor de A_");
	scanf("%f",&va);
	printf("Ingresa el valor de B_");
	scanf("%f",&vb);
	printf("Ingresa el valor de C_");
	scanf("%f",&vc);
	//formula
	x1 =valorx1(va,vb,vc); 
	x2 =valorx2(va,vb,vc); 
	//Resultado
	printf("x1 = %f",x1);
	printf("x2 = %f",x2);
	return 0;
}
float valorx1(float va,float vb,float vc){
	return (-vb+sqrt(pow(vb,2)-4*va*vc))/(2*va) ;
}
float valorx2(float va,float vb,float vc){
	return (-vb-sqrt(pow(vb,2)-4*va*vc))/(2*va) ;
}
