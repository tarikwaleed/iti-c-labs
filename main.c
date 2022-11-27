#include "definitions.h"
int main(){
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

}