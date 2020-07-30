#include <stdio.h>

int main()
{
    int    num;

    printf("\nDigite um número: \n");
    scanf("%d", &num);
    fflush(stdin);

    if (num % 5 == 0)
    {
        printf("\n O número %d é divisivel por 5 \n", num);
    }
    else
    {
        printf("\n O número %d não é divisivel por 5 \n", num);
    }
    return (0);
}
