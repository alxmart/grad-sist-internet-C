#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese");

    float salario, aumento, novo;
    int cod;

    printf("Digite o salário:\n");
    scanf("%f", &salario);
    fflush(stdin);

    printf("Digite o Código do cargo: (1 a 4) \n");
    scanf("%d", &cod);
    fflush(stdin);


    switch (cod)
    {
        case 1:
            aumento = (salario * 0.40);
            novo = salario + aumento;
            printf("O aumento foi de %.2f e o novo salário de Servente é: %.2f", aumento, novo);
            break;
        case 2:
            aumento = (salario * 0.35);
            novo = salario + aumento;
            printf("O aumento foi de %.2f e o novo salário de Pedreiro é: %.2f", aumento, novo);
            break;
        case 3:
            aumento = (salario * 0.20);
            novo = salario + aumento;
            printf("O aumento foi de %.2f e o novo salário de Mestre de Obras é: %.2f", aumento, novo);
            break;
        case 4:
            aumento = (salario * 0.10);
            novo = salario + aumento;
            printf("O aumento foi de %.2f e o novo salário de Técnico de Segurança é: %.2f", aumento, novo);
            break;
        default:
            printf("Opção Inválida. \n");
            break;
    }
    return(0);
}
