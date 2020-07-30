/* num ant num suc */
#include <stdio.h>

int main()
{
    int num, ant, suc;

    printf("Digite o número inteiro:");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("\n O antecessor é: %d", ant);
    printf("\n O sucessor é: %d", suc);

/*
    printf("\n O antecessor é: %d", num -1);
    printf("\n O sucessor é: %d", num + 1);
*/

    return(0);
}
