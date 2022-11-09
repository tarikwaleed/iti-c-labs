#ifndef MENU_H
#define MENU_H
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
#define CR 13
void keytype()
{
    char ch=getch();

    if(ch == -32)
    {
        ch = getch();
        printf("Extended: %d", ch);
    }
    else
    {
        printf("Normal: %d", ch);
    }
}



COORD coord= {0,0};                  // this is global variable
//center of axis is set to the top left cornor of the screen
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}
char words[3][10] = {"New", "Edit", "Delete"};
void printmenu(int choice)
{


    for(int i = 0; i < 3; i++)
    {
        if(i==choice-1)
        {
            SetColor(COLORED);
            printf("%s\n", words[i]);
            SetColor(DEFAULTCOLOR);
        }
        else
        {
            SetColor(DEFAULTCOLOR);
            printf("%s\n", words[i]);
        }

    }
}

void menu()
{
    char ch;
    int index=1;
    printmenu(1);

    do
    {
        ch=getch();
        if(ch == -32)
        {
            ch = getch();
            if(ch==HOME)
            {
                index=1;

            }
            else if(ch==UP)
            {
                index--;

            }
            else if(ch==DN)
            {
                index++;
            }
            else if(ch==END)
            {
                index=3;
            }
            system("cls");
            if(index>3)
                index=3;
            if(index<1)
                index=1;
            printmenu(index);

        }
        else
        {
            if(ch==ESC)
                return 0;
            else if(ch==CR)
            {
                system("cls");
                SetColor(COLORED);
                printf(words[index-1]);
                SetColor(DEFAULTCOLOR);

            }




        }
    }
    while(1);

}


#endif // MENU_H
