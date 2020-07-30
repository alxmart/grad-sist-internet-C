/* Quadrado e Raiz do numero */
#include <stdio.h>
#include <math.h>

int main()
{
    int numero;
    float quad, raizquad;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &numero);

    quad = pow(numero,2);
    raizquad = sqrt(numero);

    printf ("\nO quadrado de %d é %.2f e a raiz quadrada é %.2f", numero,quad,raizquad);

    return (0);
}
