/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 6 – Factorial (Iterative + Recursive)
*/

#include<stdio.h>

int fact(int n)
{
    if(n==0) return 1;
    return n*fact(n-1);
}

int main()
{
    int n,i,f=1;

    printf("Enter number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        f=f*i;

    printf("Iterative factorial=%d\n",f);
    printf("Recursive factorial=%d\n",fact(n));

    return 0;
}

