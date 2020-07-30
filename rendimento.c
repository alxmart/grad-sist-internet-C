/* rendimento */
#include <stdio.h>

int main()
{
    float deposito, taxa, rendimento, total;

    printf("Informe o valor do depósito:\n");
    scanf("%f", &deposito);

    printf("\n Informe a taxa de juros:\n");
    scanf("%f", &taxa);

    rendimento = deposito * (taxa/100);
    total = deposito + rendimento;

    printf("\n O rendimento é: %.2f", rendimento);
    printf("\n O total é: %.2f", total);

    return(0);

}
