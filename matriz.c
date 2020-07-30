#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int matrizA[2][10];
    int i,j;



    for (i=0; i<2; i++)
    {
        for (j=0; j<10; j++)
        {
            printf("Digite o elemento da linha %d e coluna %d: \n", i,j );
            scanf("%d", &matrizA[i][j]);
            fflush (stdin);
        }
    }


    for (i=0; i<2; i++)
    {
        for (j=0; j<10; j++)
        {

        printf("o elemento da linha %d e coluna %d é: %d \n", i, j, matrizA[i][j]);
        }
    }



    return(0);
}
