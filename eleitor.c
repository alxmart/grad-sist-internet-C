#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese");

    int idade;

    printf("Digite a idade:\n");
    scanf("%d", &idade);
    fflush(stdin);


    if (idade < 16)
    {
        printf("Não eleitor");
    }
    else
    {
        if ((idade < 18) || (idade > 65))
        {
            printf("Eleitor facultativo");
        }
        else
        {
            printf("Eleitor Obrigatório");
        }
    }

    return(0);
}
