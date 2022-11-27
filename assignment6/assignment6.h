#include "definitions.h"
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void MultiplyArray(int* arr, int size)
{
    for(int i=0; i<size; i++)
    {
        arr[i]*=10;
    }
}
void ChangePosition(Line* line,int newX,int newY)
{
    line->Start.x=newX;
    line->Start.y=newY;
}
void DisplayPointCoordinates(Point p)
{
    printf("X is:%d Y is:%d\n",p.x,p.y);
}
void DisplayLineCoordinates(Line l)
{
    printf("Start Point:\n");
    DisplayPointCoordinates(l.Start);
    printf("End Point:\n");
    DisplayPointCoordinates(l.End);

}
void DisplayLenght(int lenght){
    printf("The lenght of the line is: %d",lenght);
}

int CalculateLength(Line line)
{
    // sqrt((x2-x1)^2+(y2-y1)^2)
    return sqrt((line.End.x-line.Start.x)*(line.End.x-line.Start.x)
                +(line.End.y-line.Start.y)*(line.End.y-line.Start.y));
}
