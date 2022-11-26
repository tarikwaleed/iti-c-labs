#include <stdio.h>
#include<ctype.h>
int isEven(int n)
{
    if (n % 2 == 0)
        return 1;
    return 0;
}
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
void printGrade(char grade)
{
    switch (grade)
    {
    case 'A':
        printf("Excellent");
        break;
    case 'B':
        printf("Very Good");
        break;
    case 'C':
        printf("Good");
        break;
    case 'D':
        printf("Fair");
        break;
    case 'F':
        printf("Failed");
        break;

    default:
        break;
    }
}
void sumUntillOneHundred()
{
    int number;
    int sum = 0;
    do
    {
        printf("Please Enter a number");
        scanf("%d", &number);
        sum += number;
    } while (sum < 100);
    // printf("100");
    printf("%d", sum);
}
void printMultiplicationTable()
{
    for (int i = 1; i <= 12; i++)
    {
        printf("%d*3=%d\n", i, i * 3);
    }
}
void isAlpha(char ch)
{
    if (isalpha(ch))
        printf("alphabet");
    else
        printf("Numeric");
}
// COORD coord = {0, 0}; // this is global variable
//                       // center of axis is set to the top left cornor of the screen
// void gotoxy(int x, int y)
// {
//     coord.X = x;
//     coord.Y = y;
//     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
// }
// void printMenue(){
//     gotoxy(50,10);
//     printf("New");
//     gotoxy(50,20);
//     printf("Edit");
//     gotoxy(50,30);
//     printf("Delete");
// }
int main(int argc, char const *argv[])
{
    // 1
    // isEven(5);

    // 2
    printf("%d",whichIsBigger(100,100,9));

    // 3
    // printGrade('A');

    // 4
    // sumUntillOneHundred();

    //5 
    //printMenue();

    // 6
    // printMultiplicationTable();

    // 7
    // isAlpha("a");

    // 8 
    // 9 
    



    return 0;
}
