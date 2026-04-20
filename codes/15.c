/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 15 – Random Numbers
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n,i;

    printf("how many numbers: ");
    scanf("%d",&n);

    srand(time(0));

    for(i=0;i<n;i++)
        printf("%d\n",rand());

    return 0;
}

