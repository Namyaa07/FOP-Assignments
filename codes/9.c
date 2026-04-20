/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 9 – Employee using Structure
*/

#include<stdio.h>

struct emp
{
    int id;
    char name[20];
    float sal;
};

int main()
{
    struct emp e;
    printf("enter id, name, salary:\n");
    scanf("%d %s %f",&e.id,e.name,&e.sal);
    printf("id:%d name:%s sal:%.2f\n",e.id,e.name,e.sal);
    return 0;
}

