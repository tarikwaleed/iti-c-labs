#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<windows.h>
#define MAXLENGTH 100
#define DEFAULTCOLOR 255
#define COLORED 10
#define HOME 71
#define UP 73
#define DN 81
#define END 79
#define ESC 27
#define CR
#include "menu.h"

int whichIsBigger(int x, int y, int z)
{
    if (x > y)
    {
        if (x > z)
        {
            return x;
        }
        return z;
    }
    else
    {
        if (y > z)
        {
            return y;
        }
        return z;
    }
}
typedef struct Employee{
    int id;
    int salary;
    char name[20];

}Employee;
typedef struct Department{
    Employee emps[3];

}Department;

Employee GetEmployee(){
    Employee emp;
    printf("Enter employee id: ");
    scanf("%d",&emp.id);
    fflush(stdin);
    printf("Enter Emplyee Name: ");
    gets(emp.name);
    printf("Enter Employee Salary: ");
    scanf("%d",&emp.salary);
    return emp;
}
void DisplayEmployee(Employee emp){
    printf("Employee Data is: \n");
    printf("| ID:%d | Name:%s | Salary:%d |",emp.id,emp.name,emp.salary);
}
void GetAndDisplayEmployee(){
    Employee emp;
    emp=GetEmployee();
    DisplayEmployee(emp);

}

void getAndPrintEmployeeArray(Employee emps[],int size){
    for(int i=0 ;i<3;i++){
        printf("Enter Data of Employee %d: \n",i+1);
        printf("ID: ");
        scanf("%d",&emps[i].id);
        fflush(stdin);
        printf("Name: ");
        gets(emps[i].name);
        printf("Salary: ");
        scanf("%d",&emps[i].salary);
    }
    for (int i=0;i<3;i++){
        printf("Data of Employee %d is: \n",i+1);
        printf("ID: %d | Name: %s | Salary: %d \n",emps[i].id,emps[i].name,emps[i].salary);
    }
}

int main()
{
    // Problem1
    //printf("%d",whichIsBigger(5,8,5));

    //Problem2
    //Employee emp;
    //GetAndDisplayEmployee();

    //Problem3
    //Employee emps[3];
    //getAndPrintEmployeeArray(emps);
    menu();

    return (0);
}
