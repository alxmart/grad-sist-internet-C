#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese");

    float altura, peso;
    char sexo;

    printf("Informe o sexo (m/f): \n");
    scanf("%c", &sexo);
    fflush(stdin);

    printf("Informe a altura: \n");
    scanf("%f", &altura);
    fflush(stdin);

    if ((sexo == 'm') || (sexo == 'M'))
    {
        peso = ((72.7 * altura) - 58);
    }
    else
    {
        peso = ((62.1 * altura) - 44.7);
    }


    printf("O sexo é: %c \n", sexo);
    printf("A altura é: %.2f \n", altura);
    printf("O peso ideal é: %.2f", peso);


    return(0);
}
