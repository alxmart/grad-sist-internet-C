#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cod, i, nnota, naprovado, nreprovado;
    float nota, soma, media;

    naprovado = 0;
    nreprovado = 0;

    printf("Quantas notas na disciplina ? \n");
    scanf("%d", &nnota);

    do
    {
        printf("Digite o codigo do aluno: \n");
        scanf("%d", &cod);

        soma = 0;

        if (cod != 0)
        {
            for (i = 1; i <= nnota; i++)
            {
                printf("Informe a %d nota do aluno \n", i);
                scanf("%f", &nota);
                soma = soma + nota;
            }

            media = soma / nnota;

            if (media >= 6)
            {
                naprovado++;
            }
            else
            {
                nreprovado++;
            }
        }
    }
    while(cod != 0);

    printf("O numero de aprovados é: %d \n", naprovado);
    printf("O numero de reprovados é: %d \n", nreprovado);

return(0);
}
