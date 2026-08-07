#include <stdio.h>

int main()
{
    int a = 49298734;
    int b = 0;
    int div = 1; 
    while ((a / div) > 0)
    {
        b = b + (a % (div * 10)) / div;
        div = div * 10;
    }
    printf("Is sum of digits of %d, %d?\n", a, b);
    do
    {
        /* code */
    } while (condition);
    
    return 0;
}