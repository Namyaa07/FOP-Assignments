/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 2
(Prime Number Program)
*/

#include <stdio.h>

int main()
{
    int num, i, flag = 0;

    printf("Enter number: ");
    scanf("%d",&num);

    for(i=2; i<=num/2; i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(num == 1)
        printf("Not Prime\n");
    else if(flag == 0)
        printf("Prime Number\n");
    else
        printf("Not Prime Number\n");
    return 0;
}

