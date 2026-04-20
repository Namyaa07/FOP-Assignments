/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 11 – Decimal to Binary
*/

#include <stdio.h>

int main()
{
    int num;
    int binary[32],i=0;

    printf("enter decimal: ");
    scanf("%d",&num);

    while(num>0)
    {
        binary[i]=num%2;
        num=num/2;
        i++;
    }

    printf("binary: ");
    for(int j=i-1;j>=0;j--)
        printf("%d",binary[j]);

    printf("\n");

    return 0;
}

