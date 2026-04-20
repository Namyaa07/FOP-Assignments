/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 10 – Find out max 5 numbers
*/

#include <stdio.h>

int main()
{
    int n1,n2,n3,n4,n5,max;

    printf("enter 5 numbers: ");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);

    max=n1>n2?n1:n2;
    max=max>n3?max:n3;
    max=max>n4?max:n4;
    max=max>n5?max:n5;

    printf("max=%d\n",max);

    return 0;
}

