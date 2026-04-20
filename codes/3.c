/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 3
(GCD using Euclidean theorem)
*/

#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d\n",a);

    return 0;
}

