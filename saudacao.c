/* Saudação ao aluno */
#include <stdio.h>

int main()
{

    char  nome[30];

    printf ("\nDigite seu nome: ");
    scanf ("%s", nome); /* leitura do nome */

    printf ("\nBem vindo(a) à disciplina de Alg. Log. Prog.- II, %s", nome);


    return (0);
}
