/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 12 – Binary Search
*/

#include <stdio.h>

int main()
{
    int a[100],n,key,i,j,flag=0,low,high,mid;

    printf("enter size: ");
    scanf("%d",&n);

    printf("enter %d elements: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("enter key: ");
    scanf("%d",&key);

    low=0; high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            flag=1;
            break;
        }
        else if(key < a[mid])
            high=mid-1;
        else
            low=mid+1;
    }

    if(flag)
        printf("found\n");
    else
        printf("not found\n");

    return 0;
}

