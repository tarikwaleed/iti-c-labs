#ifndef EMPTYPES_H
#define EMPTYPES_H
#include "../definitions.h"
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
    printf("| ID:%d | Name:%s | Salary:%d | \n",emp.id,emp.name,emp.salary);
}

#endif // EMPTYPES_H
