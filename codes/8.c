/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 8 – Student Result + Grade
*/

#include<stdio.h>

int main()
{
    float m1,m2,m3,m4,m5,agg;

    printf("enter marks of 5 subjects:\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

    agg=((m1+m2+m3+m4+m5)/500)*100;

    printf("aggregate=%.2f\n",agg);

    if(agg>=75)
        printf("distinction\n");
    else if(agg>=60)
        printf("first division\n");
    else if(agg>=50)
        printf("second division\n");
    else if(agg>=40)
        printf("third division\n");
    else
        printf("fail\n");

    return 0;
}

