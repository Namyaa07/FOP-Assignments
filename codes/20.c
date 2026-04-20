/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 20 – Swapping Values (Call by Value)
*/

#include <stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("after swapping inside function: a = %d b = %d\n", a, b);
}

int main()
{
    int a, b;

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("before swapping: a = %d b = %d\n", a, b);

    swap(a, b);

    printf("after function call: a = %d b = %d\n", a, b);

    return 0;
}

