#include <stdio.h>

float f_to_c(int fahr);

/* Converts a fahrenheit temperature to celsius  */

main()
{
    int i;

    for (i = 0; i <= 300; i=i+20)
        printf("%d F = %3.1f C\n", i, f_to_c(i));
    return 0;
}

float f_to_c(int fahr)
{
    float cels;
    cels = (5.0/9.0) * (fahr - 32);
    return cels;
}
    

