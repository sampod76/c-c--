#include <stdio.h>

int main()
{
    /*
    int a;
    scanf("%d", &a);
    printf("%d", a);
    */
    int a, b, c;
    float d;
    scanf("%d %d %d %f", &a, &b, &c, &d);

    // printf("%d %d %d %f", a, b, c, d); //90 100 110 150.000000
    /**
     * @param %d holo dynamic value of serialization
     * @param %04d holo dynamic value and this is add antiar 4 degete
     */
    printf("abul= %04d babul=%d kamal=%d goine=%f", a, b, c, d); // abul= 0090 babul=100 kamal=110 goine=150.000000

    //

    short int akash = 7;
    char name;
    /**
     * @param \n mins new line
     */
    scanf("\n%hd \n%c", &akash, &name);
    printf("akash= %hd name=%c", akash, name);

    //

    float fish;
    scanf("\n%f", &fish);
    printf("fish= %f", fish); // fish= 12.120000
    /**
     * @param %.2f -> mens . after 2 decimal

  */
    printf("fish= %.2f", fish); // fish= 12.12
    return 0;
}