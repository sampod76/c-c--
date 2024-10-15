#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int sampod = 3;
    for (int i = 0; i <= 10; i++)
    {
        printf("index= %d value= %d\n", i, i + sampod);
        // printf("index= %d\n", i);
        // printf("value= %d\n", i + sampod);
    }

    // reviours prientf

    for (int i = 10; i >= 0; i--)
    {
        printf("\nindex= %d value= %d\n", i, i - sampod);
        // printf("index= %d\n", i);
        // printf("value= %d\n", i - sampod);
    }
    return 0;
}