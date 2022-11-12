#ifndef SUBJECT_TYPE_H
#define SUBJECT_TYPE_H

typedef struct Subject{
    int id;
    char name[20];
    int grade;
}
Subject GetSubject(){
    Subject s;
    printf("Enter Subject id: ");
    scanf("%d",&s.id);
    fflush(stdin);
    printf("Enter Subject Name: ");
    gets(s.name);
    printf("Enter Subject Grade: ");
    gets(s.grade);
    return student;
}
void DisplaySubject(Subject s){
    printf("| ID:%d | Name:%s | Grade:%d | \n",s.id,s.name,s.grade);
}
#endif // SUBJECT_TYPE_H
