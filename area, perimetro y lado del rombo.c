#include <stdio.h>
#include <math.h>
//area,perimetro y lado del rombo
//declarar funciones
float arearombo(float diagonal_1,float diagonal_2);
float perimetrorombo(float diagonal_1,float diagonal_2);
float ladorombo(float diagonal_1,float diagonal_2);
int main(){
    float diagonal_1,diagonal_2,area,perimetro,lado;
    //pedir datos
    printf("Ingresa diagonal1");
    scanf("%f",&diagonal_1);
    printf("Ingresa diagonal2");
    scanf("%f",&diagonal_2);
    //formula
    area = arearombo(diagonal_1,diagonal_2);
    perimetro = perimetrorombo(diagonal_1,diagonal_2);
    lado = ladorombo(diagonal_1,diagonal_2);
    //resultado
    printf("area = %f",area);
    printf("perimetro = %f",perimetro);
    printf("lado = %f",lado);
    return 0;
}
//definir funciones
float arearombo(float diagonal_1,float diagonal_2){
    return (diagonal_1 * diagonal_2)/2;
}
float perimetrorombo(float diagonal_1,float diagonal_2){
    return 2*sqrt(pow (diagonal_2,2) + pow(diagonal_1,2));
}
float ladorombo(float diagonal_1,float diagonal_2){
    return sqrt(pow(diagonal_2/2,2) + pow(diagonal_1/2,2));
}