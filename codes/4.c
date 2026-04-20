/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 4
(Reverse the digits of a number)
*/

#include <stdio.h>

int main()
{
    int num, digit;

    printf("Enter number: ");
    scanf("%d",&num);

    if(num < 0)
    {
        printf("-");
        num = -num;
    }

    while(num > 0)
    {
        digit = num % 10;
        printf("%d",digit);
        num = num / 10;
    }

    printf("\n");

    return 0;
}

