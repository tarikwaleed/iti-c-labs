#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//#include <windows.h>
#define MAXLENGTH 100
#define DEFAULTCOLOR 255
#define COLORED 10
#define HOME 71
#define UP 73
#define DN 81
#define END 79
#define ESC 27
#define CR
//#include "menu.h"
#include "emptypes.h"
#include "linetype.h"
#define MAXSTUDENTS 100
#include "student_type.h"
#include "subject_type.h"

int main()
{
    /* Problem1
    Employee* arr[3];
    int n;
    for(int i=0;i<3;i++){
     printf("Enter The number of employees: \n");
     scanf("%d",&n);
     arr[i]=malloc(n*sizeof(Employee));
     for(int j=0;j<n;j++){
         Employee emp=GetEmployee();
         arr[i][j]=emp;
     }
     for(int j=0;j<n;j++){
         DisplayEmployee(arr[i][j]);
     }

    }*/
    // Problem2
    Student *students[MAXSTUDENTS];
    char c = 'y';
    int i = 0;
    int numberOfStudents = 0;
    do
    {
        printf("Do you want to Create new students?  Enter(Y/N)\n");
        c = getc(stdin);
        if (c == 'y')
        {
            students[i] = GetStudent();
            printf("Got Student\n");
            numberOfStudents++;
            i++;
        }
    } while (c != 'n');
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("Sum grades for student %d  is: %d\n", i + 1, CalculateSum(students[i]->subjects, students[i]->numberOfSubjects));
    }
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("Average grades for student %d is: %d\n", i + 1, CalculateAverage(students[i]->subjects, students[i]->numberOfSubjects));
    }
    return (0);
}
