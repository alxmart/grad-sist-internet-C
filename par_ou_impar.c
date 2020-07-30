#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int    quadrado, num;
    float  raiz;

    printf("\nDigite um número inteiro:");
    scanf("%d", &num);
    fflush(stdin);

    if (num % 2 == 0)
    {
        raiz = sqrt(num);
        printf("\n O número é par.");
        printf("\n A raiz quadrada é: %.3f", raiz);
    }
    else
    {
        quadrado = num * num;
        printf("\n O número é ímpar.");
        printf("\n O número ao quadrado é: %d", quadrado);
    }
    return (0);
}
