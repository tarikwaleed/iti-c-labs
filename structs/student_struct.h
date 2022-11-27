#ifndef STUDENT_TYPE_H
#define STUDENT_TYPE_H
#include "subject_struct.h"
typedef struct Student{
    int id;
    char name[20];
    int numberOfSubjects;
    // you could've do this instead subjects[]
    Subject* subjects;
}Student;

Student* GetStudent(){
    // Alloc
    Student* student=malloc(sizeof(Student));
    // Fill
    printf("Enter Student id: ");
    scanf("%d",&(student->id));
    fflush(stdin);
    printf("Enter Student Name: ");
    // instead of gets
    // fgets(char* str, int n,FILE* stream)
    // student->name is char* 
    // no need for doing this &(student->name)
    fgets(student->name,sizeof(student->name),stdin);
    fflush(stdin);
    printf("Enter number of subjects: ");
    scanf("%d",&(student->numberOfSubjects));
    fflush(stdin);
    student->subjects=GetMultipleSubjects(student->numberOfSubjects);
    // Return
    return student;
}
void DisplayStudent(Student s){
    printf("| ID:%d | Name:%s |\n",s.id,s.name);
}

#endif // STUDENT_TYPE_H
