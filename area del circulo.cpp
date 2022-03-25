#include <stdio.h>
#include <math.h>
//Area del circulo con funciones
//Declarar funciones
float areacirculo(float radio);
int main(){
	//Compilar
	float radio,area;
	//Pedir datos
	printf("Ingresa el valor del radio_");
	scanf("%f",&radio);
	//Formula
	area = M_PI * pow(radio,2);
	//Resultado
	printf("area = %f",area);
	
	return 0;
}
float areacirculo(float radio){
	return M_PI * pow (radio,2);
}

