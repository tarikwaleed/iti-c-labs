#include "definitions.h"

int mystrlen(char *s)
{
    int n;
    for (n = 0; *s++ != '\0'; n++)
        ;
    return n;
    //
}
int mystrlen2(char *s)
{
    char *p = s;
    while (*p != '\0')
        p++;
    return p - s;
}
int main()
{

    // int a[5]={1,2,3,4,5};
    // int* pa=a;
    // printf("%p\n",a);
    // printf("%p\n",&a[0]);
    // printf("%p\n",pa);
    // printf("%p\n",pa[0]);

    // int i=1;
    // printf("%d\n",a[i]);
    // printf("%d\n",pa[i]);
    // printf("%d\n",*(a+i));
    // printf("%d\n",*(pa+i));

    // char *arr = "hello hello";
    // int n=mystrlen(arr);
    // int n2=mystrlen2(arr);
    // printf("%d\n",n);//11
    // printf("%d\n",n2);//11
    // char str[3] = "Scaler.";
    // printf("%s", str);

    // char * str="hello";
    // puts(str);//hello
    // str[1]='b';//Segmentation Fault
    // puts(str);

    // char s[]="hello";
    // puts(s);//hello
    // s[1]='b';//hbllo
    // puts(s);

    // printf("%d %d %d",(23),(023),(0x23));
    char ch[10] = "abcdefghij";
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        ans += (ch[i] - 'a');
    }
    printf("%d", ans);
}
