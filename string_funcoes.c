#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char nome[80], sobrenome[80];

    printf("Digite o seu nome: \n");
    gets(nome);
    printf("Digite o seu sobrenome: \n");
    gets(sobrenome);

    strcat (nome,sobrenome);
    printf("Apos concatenar o nome é: %s \n", nome);

    if (strstr (sobrenome, nome) == 0)
    {
        printf("Agora sobrenome esta contido na variavel nome. \n");
    }

    strlwr (nome);
    printf("O nome minusculo é: %s \n", nome);

    strupr (nome);
    printf("O nome maiusculo é: %s \n", nome);

    return(0);
}
