#include <stdio.h>

struct Pessoa {
    int idade;
    int altura;
    int peso;
};

int main(){
    struct Pessoa Gustavo;
    Gustavo.idade = 19;
    printf("%i\n", Gustavo.idade);
    printf("%i", sizeof(Gustavo.peso));}