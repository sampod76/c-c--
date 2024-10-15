#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    bool result = (2 > 5) || (5 == 3) || (4 < 2) ; //result = false /0
                // false      false       false
    printf("answer= %d\n", result);

    bool result2 = (2 < 5) && (5 == (10-5)) && (4 > 2) ; //result = false /0
                // true      true              true
    printf("answer2= %d\n", result2);
    return 0;
}