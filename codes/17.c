/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 17 – Sum of Sine Series
*/

#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    int i, fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int i, n, sign = 1;
    float x, sum = 0, term;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        term = sign * pow(x, (2*i - 1)) / factorial(2*i - 1);
        sum = sum + term;
        sign = -sign;
    }

    printf("Sum of sine series = %f\n", sum);

    return 0;
}

