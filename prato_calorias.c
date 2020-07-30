#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese");

    float total;
    int op;

    total = 0;

    printf("1-Italiano \n2-Japonês \n3-Salvadorenho \n");
    printf("Informe o prato desejado: \n");
    scanf("%d", &op);
    fflush(stdin);

    switch (op)
    {
        case 1:
            total = total + 750;
            break;
        case 2:
            total = total + 324;
            break;
        case 3:
            total = total + 545;
            break;
    }

    printf("1-Chá \n2-Suco de Laranja \n3-Refrigerante \n");
    printf("Informe a bebida desejada: \n");
    scanf("%d", &op);
    fflush(stdin);

    switch (op)
    {
        case 1:
            total = total + 30;
            break;
        case 2:
            total = total + 80;
            break;
        case 3:
            total = total + 90;
            break;
    }

    printf("O total de calorias é: %.2f \n", total);

    return(0);
}
