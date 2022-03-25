#include <stdio.h>
//area y perimetro de un rectangulo con funciones
//Declarar funciones
float arearectangulo(float base,float altura);
float perimetrorectangulo(float base,float altura);
int main(){
    float base,altura,area,perimetro;
    //pedir datos
    printf("Ingresa la base");
    scanf("%f",&base);
    printf("Ingrea la altura");
    scanf("%f",&altura);
    //formula
    area = arearectangulo(base,altura);
    perimetro = perimetrorectangulo(base,altura);
    //Resultados
    printf("area = %f",area);
    printf("perimetro = %f",perimetro);
    
    return 0;
}
//Definir funciones
float arearectangulo(float base,float altura){
    return base * altura;
}
float perimetrorectangulo(float base,float altura){
    return (2 * base) + (2 * altura);
}