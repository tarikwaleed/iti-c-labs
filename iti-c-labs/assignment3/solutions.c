#include <stdio.h>
void printArray()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Your array is: |");
    for (int i = 0; i < size; i++)
    {
        printf("%d | ", array[i]);
    }
}

int findMax(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}
void sumMatrices(int a[3][3], int b[3][3])
{
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The sum of the two matrices is:");
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
void sumAndAverage(int a[2][3])
{
    int c[2][1] = {};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += a[0][i];
    }
    c[0][0] = sum;
    sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += a[1][i];
    }
    c[1][0] = sum;
    printf("The sum is");
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    // Problem 1
    // printArray();

    // Problem 2
    // int array[]={1,2,3};
    // int result=findMax(array,3);
    // printf("Max: %d",result);

    // Problem 3
    // int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // sumMatrices(a,b);

    // Problem 4
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    sumAndAverage(a);

    return 0;
}
