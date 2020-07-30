#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese");

    int op;

    printf("Digite o mês (1 a 12):\n");
    scanf("%d", &op);
    fflush(stdin);

    switch (op)
    {
        case 1:
            printf("O mês é janeiro");
            break;
        case 2:
            printf("O mês é fevereiro");
            break;
        case 3:
            printf("O mês é março");
            break;
        case 4:
            printf("O mês é abril");
            break;
        case 5:
            printf("O mês é maio");
            break;
        case 6:
            printf("O mês é junho");
            break;
        case 7:
            printf("O mês é julho");
            break;
        case 8:
            printf("O mês é agosto");
            break;
        case 9:
            printf("O mês é setembro");
            break;
        case 10:
            printf("O mês é outubro");
            break;
        case 11:
            printf("O mês é novembro");
            break;
        case 12:
            printf("O mês é dezembro");
            break;
        default:
            printf("Opção Inválida. \n");
            break;
    }
    return(0);
}
