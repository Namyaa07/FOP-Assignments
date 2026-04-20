/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 1
(Leap year program)
*/

#include <stdio.h>

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if(year % 400 == 0)
        printf("Leap Year\n");
    else if(year % 100 == 0)
        printf("Not a Leap Year\n");
    else if(year % 4 == 0)
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");

    return 0;
}

