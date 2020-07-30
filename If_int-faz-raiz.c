#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int    num;
    float  raiz;
    double sqrt;

    printf("\nDigite um número inteiro:");
    scanf("%d", &num);
    fflush(stdin);

    if (num % 2 == 0)
    {
            raiz = sqrt(num);
            printf("\n A raiz quadrada é: %.3f", raiz);
    }

    return (0);
}
