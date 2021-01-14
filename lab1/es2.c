#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Inserisci lunghezza del primo lato: ");
    scanf("%f", &a);
    printf("Inserisci lunghezza del secondo lato: ");
    scanf("%f", &b);
    printf("Inserisci lunghezza del terzo lato: ");
    scanf("%f", &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b && b == c)
            printf("triangolo equilatero");
        else if (a == b || b == c || a == c)
            printf("triangolo isoscele");
        else
            printf("triangolo scaleno");
    }
    else
        printf("non un triangolo");
    return 0;
}