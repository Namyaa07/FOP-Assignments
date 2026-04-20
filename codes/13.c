/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 13 – Reverse Number
*/

#include<stdio.h>

int main()
{
    int n,t,r,n1=0;

    printf("enter num: ");
    scanf("%d",&n);

    t=n;

    while(t>0)
    {
        r=t%10;
        n1=n1*10+r;
        t=t/10;
    }

    printf("reversed num=%d\n",n1);

    return 0;
}

