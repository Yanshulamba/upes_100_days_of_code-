//Q130. Store student records in a file and display them.
#include <stdio.h>
int main()
{
    int n, roll, marks;
    char name[100];
    scanf("%d", &n);
    FILE * f = fopen("students.txt", "w");
    for (int i = 0; i < n; i++)
    {
        scanf("%99s%d%d", name, &roll, &marks);
        fprintf(f, "%s %d %d\n", name, roll, marks);
    }
    fclose(f);
    f = fopen("students.txt", "r");
    while (fscanf(f, "%99s%d%d", name, &roll, &marks) == 3)
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    fclose(f);
    return 0;
}
