/* Raio e Perímetro */
#include <stdio.h>
#include <math.h>

#define pi 3.141593

int main()
{

    float raio;

    printf ("Digite o valor do raio: ");
    scanf ("%f", &raio);

    printf ("\nO valor da Área é:  %f", pi * pow(raio,2));
    printf ("\nO valor do Perímetro é: %f", 2 * pi * raio);

    return (0);
}
