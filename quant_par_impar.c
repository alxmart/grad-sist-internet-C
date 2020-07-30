#include <stdlib.h>
#include <stdio.h>

int main() {


    int num, par, impar;

    par =0;
    impar = 0;

    printf("Informe o numero \n");
    scanf("%d", &num);

    while (num != 0)
    {
        if (num % 2 == 0) {
            par++;
        }
        else {
            impar++;
        }
        printf("Informe o numero \n");
        scanf("%d", &num);
    }

    printf("o total de par foi: %d \n", par);
    printf("o total de impar foi: %d \n", impar);

    return(0);
}
