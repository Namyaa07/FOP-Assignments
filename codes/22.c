/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 22 – Menu Driven for String Functions
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("enter first string: ");
    scanf("%s", str1);

    printf("enter second string: ");
    scanf("%s", str2);

    printf("\\nmenu\\n");
    printf("1. find length of string\\n");
    printf("2. copy string\\n");
    printf("3. concatenate strings\\n");
    printf("4. compare strings\\n");
    printf("5. exit\\n");

    printf("enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("length of first string = %lu\\n", strlen(str1));
            printf("length of second string = %lu\\n", strlen(str2));
            break;

        case 2:
            strcpy(str1, str2);
            printf("after copying, str1 = %s\\n", str1);
            break;

        case 3:
            strcat(str1, str2);
            printf("concatenated string = %s\\n", str1);
            break;

        case 4:
            if(strcmp(str1, str2) == 0)
                printf("strings are equal\\n");
            else
                printf("strings are not equal\\n");
            break;

        case 5:
            printf("exiting program\\n");
            break;

        default:
            printf("invalid choice\\n");
    }

    return 0;
}

