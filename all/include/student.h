#ifndef STUDENT_TYPE_H
#define STUDENT_TYPE_H
#include "subject.h"
typedef struct Student{
    int id;
    char name[20];
    int numberOfSubjects;
    Subject* subjects;


}Student;

Student* GetStudent(){
    Student* student=malloc(sizeof(Student));
    printf("Enter Student id: ");
    scanf("%d",&(student->id));
    fflush(stdin);
    printf("Enter Student Name: ");
    fgets(student->name,sizeof(student->name),stdin);
    printf("Enter number of subjects: ");
    scanf("%d",&(student->numberOfSubjects));
    fflush(stdin);
    student->subjects=GetMultipleSubjects(student->numberOfSubjects);
    return student;
}
void DisplayStudent(Student s){
    printf("| ID:%d | Name:%s |\n",s.id,s.name);
}

#endif // STUDENT_TYPE_H
