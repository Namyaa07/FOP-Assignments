/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 18 – String Length
*/

#include <stdio.h>

int main()
{
    char str[100];
    printf("enter string: ");
    scanf("%s", str);

    int l = 0;
    while(str[l] != '\\0')
    {
        l++;
    }

    printf("length : %d\n", l);
    return 0;
}

