#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, gcd = 1;
    printf("Enter first number : ");
    scanf_s("%d", &a);
    printf("Enter second number : ");
    scanf_s("%d", &b);
    int x = abs(a), y = abs(b);
    while (y != 0)
    {
        int t = y;
        y = x % y;
        x = t;
    }
    gcd = x;
    printf("Greatest common divisor = %d", abs(gcd));
    return 0;
}