#include <stdio.h>
#define pi 3.14159

int main()
{
    float r = 0;
    while (r >= 0)
    {
        printf("Inserisci il raggio: ");
        scanf("%f", &r);
        printf("Circonferenza = %f\n", 2.0 * pi * r);
        printf("Area = %f\n\n", pi * r * r);
    }
    return 0;
}