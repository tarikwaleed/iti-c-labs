#include "definitions.h"
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
    for(int i=0 ;i<size;i++){
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
