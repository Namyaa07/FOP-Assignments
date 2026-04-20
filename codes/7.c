/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 7 – Student using Structure
*/

#include<stdio.h>

struct student
{
    int roll;
    char name[20];
    float m1,m2,m3,total,per;
};

int main()
{
    int n,i;
    struct student s[100];

    printf("enter no. of students:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("student %d:\n",i+1);

        printf("roll no.: ");
        scanf("%d",&s[i].roll);

        printf("name: ");
        scanf("%s",s[i].name);

        printf("marks of 3 subjects:\n");
        scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);

        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        s[i].per=s[i].total/3.0;
    }

    for(i=0;i<n;i++)
    {
        printf("student %d results:\n",i+1);
        printf("roll no.: %d\n",s[i].roll);
        printf("name: %s\n",s[i].name);
        printf("percentage: %.2f\n",s[i].per);
    }

    return 0;
}

