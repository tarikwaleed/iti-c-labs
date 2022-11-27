#include "definitions.h"
int main()
{
    // Problem1
    Employee *arr[3];
    int n;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter The number of employees: \n");
        scanf("%d", &n);
        arr[i] = malloc(n * sizeof(Employee));
        for (int j = 0; j < n; j++)
        {
            Employee emp = GetEmployee();
            arr[i][j] = emp;
        }
        for (int j = 0; j < n; j++)
        {
            DisplayEmployee(arr[i][j]);
        }
    }
    // Problem2
    // Student *students[MAXSTUDENTS];
    // char c = 'y';
    // int i = 0;
    // int numberOfStudents = 0;
    // do
    // {
    //     printf("Do you want to Create new students?  Enter(Y/N)\n");
    //     c = getc(stdin);
    //     if (c == 'y')
    //     {
    //         students[i] = GetStudent();
    //         printf("Got Student\n");
    //         numberOfStudents++;
    //         i++;
    //     }
    // } while (c != 'n');
    // for (int i = 0; i < numberOfStudents; i++)
    // {
    //     printf("Sum grades for student %d  is: %d\n", i + 1, CalculateSum(students[i]->subjects, students[i]->numberOfSubjects));
    // }
    // for (int i = 0; i < numberOfStudents; i++)
    // {
    //     printf("Average grades for student %d is: %d\n", i + 1, CalculateAverage(students[i]->subjects, students[i]->numberOfSubjects));
    // }
    return (0);
}
