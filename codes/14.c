/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 14 – Binary to Decimal
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int b,n=0,i=0,r;

    printf("binary num=");
    scanf("%d",&b);

    while(b!=0)
    {
        r=b%10;
        n=n+r*pow(2,i);
        b=b/10;
        i++;
    }

    printf("%d\n",n);

    return 0;
}

