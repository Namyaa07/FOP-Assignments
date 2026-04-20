/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 16 – Even & Odd Separation
*/

#include<stdio.h>

int main()
{
    int arr[20],even[20],odd[20],n,e=0,o=0,i;

    printf("enter size: ");
    scanf("%d",&n);

    printf("enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            even[e++]=arr[i];
        else
            odd[o++]=arr[i];
    }

    printf("even:\n");
    for(i=0;i<e;i++)
        printf("%d\n",even[i]);

    printf("odd:\n");
    for(i=0;i<o;i++)
        printf("%d\n",odd[i]);

    return 0;
}

