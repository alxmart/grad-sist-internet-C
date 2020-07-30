#include <stdlib.h>
#include <stdio.h>

int main() {

    int num, par, impar;

    par =0;
    impar = 0;

    do
    {
        printf("Informe o numero \n");
        scanf("%d", &num);

        if (num % 2 == 0) {
            par++;
        }
        else {
            impar++;
        }
    }
    while (num != 0);

    printf("o total de par foi: %d \n", par);
    printf("o total de impar foi: %d \n", impar);

    return(0);
}
