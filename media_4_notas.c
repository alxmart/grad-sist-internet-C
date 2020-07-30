/* media 4 notas */
#include <stdio.h>

int main()

{
    float n1, n2, n3, n4, md;

    printf("\n Digite a nota 1:\n");
    scanf("%f", &n1);

    printf("\n Digite a nota 2:\n");
    scanf("%f", &n2);

    printf("\n Digite a nota 3:\n");
    scanf("%f", &n3);

    printf("\n Digite a nota 4:\n");
    scanf("%f", &n4);

    md = ((n1 + n2 + n3 + n4 ) / 4);

    printf("\n A média final é: %.2f \n", md);

    return(0);
}
