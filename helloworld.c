#include <stdio.h>
#include <stdlib.h>

int tipo_triangulo(float x, float y, float z);

int main(){
    float x, y, z;
    printf("Digite o valor do lado x: ");
    scanf("%f", &x);
    printf("Digite o valor do lado y: ");
    scanf("%f", &y);
    printf("Digite o valor do lado z: ");
    scanf("%f", &z);
    if (tipo_triangulo(x, y, z)== 0)
    printf ("Os lados não formam um triângulo");
    else if (tipo_triangulo(x, y, z)== 1)
    printf ("Triângulo equilátero");
    else if (tipo_triangulo(x, y, z)== 2)
    printf ("Triângulo isósceles");
    else
    printf ("Triângulo escaleno");
    return 0;
}

int tipo_triangulo(float x, float y, float z){
    if (x + y <= z || x + z <= y ||z + y <= x)
        return 0;
    if (x == y && x == z )
        return 1;
    if (x == y || x == z ||y == z)
        return 2;
    return 3;
}
