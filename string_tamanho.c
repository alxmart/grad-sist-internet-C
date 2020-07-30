#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char nome[80];
    int tamanho;

    printf("Digite o seu nome completo: \n");
    gets(nome);

    tamanho = strlen(nome);

    printf("O comprimentodo nome é: %d \n", tamanho);

    return(0);
}
