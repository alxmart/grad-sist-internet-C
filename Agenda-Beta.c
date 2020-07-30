/* ====================== */
/* Programa Agenda - Beta */
/* ====================== */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct agenda
{
    int codigo;
    char nome[50];
    char telefone[20];
    char email[50];
};

int main()
{
    setlocale(LC_ALL,"Portuguese");

    struct agenda ficha[5];
    int opcao;
    int i;
    int cont = 0;

    printf("Digite  1  p/ INSERIR novo cadastro ou\n\n");
    printf("Digite  2  p/ MOSTRAR os cadastros existentes ou\n\n");
    printf("Digite  0  p/ ENCERRAR:\n\n");

    scanf("%d", &opcao);
    fflush(stdin);

    do
    {
        switch (opcao)
        {
            case 1:
                if(cont <= 4)
                {
                    printf("Cadastro de cliente:\n");
                    printf("Código: %d \n", cont);

                    printf("Informe o NOME: \n");
                    fgets(ficha[cont].nome,50,stdin);
                    fflush(stdin);

                    printf("Informe o TELEFONE: \n");
                    fgets(ficha[cont].telefone,20,stdin);
                    fflush(stdin);

                    printf("Informe o E-MAIL: \n");
                    fgets(ficha[cont].email,50,stdin);
                    fflush(stdin);

                    cont++;
                }
                else
                {
                    printf("A agenda já está lotada ! \n");
                }
                break;

            case 2:
                if (cont == 0)
                {
                    printf("Esta agenda está vazia.\n");
                }
                else
                {
                    printf("Mostra os cadastros existentes\n");
                    for (i=0;i<cont;i++)
                    {
                        printf("Código: %d\n",i);
                        printf("Nome: %s\n", ficha[i].nome);
                        printf("Telefone: %s\n", ficha[i].telefone);
                        printf("E-mail: %s\n", ficha[i].email);
                    }
                }
                break;

            case 0:
                /*system("cls");*/
                printf("Opção 0 => O programa está sendo encerrado. \n");
                /*system("pause");*/
                break;

            default:
                printf("Opção Inválida. \n");
                break;

        } /* fecha op switch */
    } /* fecha o "do" */
    while(opcao != 0);

    return(0);
} /* fecha o main */
