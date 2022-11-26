#include <stdio.h>
#include <stdlib.h>
void printHelloWorld()
{
    printf("Hello, World!");
}
void printAsciiChar(char c)
{
    printf("%d", c);
}
void printFloat()
{
    printf("Please Enter a float number: ");
    float number;
    scanf("%f", &number);
    printf("The number you've entered is: %f", number);
}
int adder(int x, int y)
{
    return x + y;
}
int multiplier(int x, int y)
{
    return x * y;
}
int divider(int x, int y)
{
    return x / y;
}
int subtractor(int x, int y)
{
    return x - y;
}
void hexaPrinter(int number)
{
    printf("%X", number);
}
void qoutientAndReminder(int x, int y)
{
    printf("Quotient is:%d\n", x / y);
    printf("Reminder is %d\n", x % y);
}
