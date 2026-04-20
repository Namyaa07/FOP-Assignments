/* NAMYA BARANWAL (1262252097)
DIV 13 (M2 BATCH)
FY BTECH CSE CSF

Assignment 19 - Employee Structure
*/

#include <stdio.h>
#include <string.h>

struct employee
{
    char name[50];
    char designation[50];
    char gender;
    char doj[20];
    float salary;
};

int main()
{
    struct employee e[100];
    int n, i;
    int male = 0, female = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\\nEnter details of employee %d\\n", i+1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf("%s", e[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Date of Joining: ");
        scanf("%s", e[i].doj);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\\nTotal employees: %d\\n", n);

    for(i = 0; i < n; i++)
    {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            female++;
    }

    printf("Male employees: %d\\n", male);
    printf("Female employees: %d\\n", female);

    printf("\\nEmployees with salary > 10000:\\n");
    for(i = 0; i < n; i++)
    {
        if(e[i].salary > 10000)
            printf("%s\\n", e[i].name);
    }

    printf("\\nEmployees with designation AsstManager:\\n");
    for(i = 0; i < n; i++)
    {
        if(strcmp(e[i].designation, "AsstManager") == 0)
            printf("%s\\n", e[i].name);
    }

    return 0;
}

