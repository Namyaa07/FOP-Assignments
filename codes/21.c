/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 21 – File Handling
*/

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("source.txt", "r");
    fp2 = fopen("dest.txt", "w");

    if(fp1 == NULL)
    {
        printf("Source file cannot be opened\n");
        return 0;
    }

    ch = fgetc(fp1);

    while(ch != EOF)
    {
        fputc(ch, fp2);
        ch = fgetc(fp1);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully\n");

    return 0;
}

