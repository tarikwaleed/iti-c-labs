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
void printfullname()
{
    char first[100];
    char last[100];
    char full[100];
    printf("Enter first name: ");
    gets(first);//, sizeof(first), stdin);
    //first[strlen(first)-1] = '\0';
    printf("Enter last name: ");
    gets(last);//, sizeof(last), stdin);
    //  last[strlen(last)-1] = '\0';
    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);
    printf("Your full name is %s\n", full);

}
void frequencies()
{
    char string[MAXLENGTH];
    char frequencies[26]= {0};
    printf("Enter String To Calculate: ");
    gets(string);
    int i=0;
    while(string[i]!='\0')
    {
        frequencies[string[i]-97]++;
        i++;
    }
    for (int i = 0; i < 26; i++)
        printf("%c occurs %d times in the string.\n", i + 97, frequencies[i]);

}
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

void printmenu(int choice)
{

    char words[3][10] = {"New", "Edit", "Delete"};
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
            printmenu(index);

        }
        else {
            if(ch=ESC)
                return 0;
            else if(ch=CR)
                system("cls");


        }
    }
    while(1);

}
int main()
{
    //printfullname();
    //keytype();
    // frequencies();

    //gotoxy(50,5);
    //SetColor(10);
    //printf("New");
    //gotoxy(50,6);
    //SetColor(100);
    //printf("Delete");
    //gotoxy(50,7);
    //SetColor(150);
    //printf("Edit");



    menu();
    return (0);
}
