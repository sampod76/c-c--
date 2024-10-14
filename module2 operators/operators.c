#include <stdio.h>
#include <math.h>

int main()
{
    printf("%d\n", 3 + 2); // 5
    // printf("%f", 3 + 2);   // 5

    long long a = 10000, b = 100000000000000;
    long long result = a * b;
    printf("%lld\n", result); // 1000000000000000000

    // alternative
    int c = 10000, d = 100000000000000;
    int result2 = 1LL * c * d;
    printf("%lld\n", result2); // 1000000000000000000

    //
    double e = 3, f = 2.12;
    double result3 = e * f;
    printf("%.2f\n", result3); // 8.77

    //
    int i = 10, j = 2.5;
    printf("%.10f\n", i / j); //
    return 0;
}