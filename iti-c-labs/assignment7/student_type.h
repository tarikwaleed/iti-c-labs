#ifndef STUDENT_TYPE_H
#define STUDENT_TYPE_H


typedef struct Student{
    int id;
    char name[20];

}Student;

Student GetStudent(){
    Student student;
    printf("Enter Student id: ");
    scanf("%d",&student.id);
    fflush(stdin);
    printf("Enter Student Name: ");
    gets(student.name);
    return student;
}
void DisplayStudent(Student s){
    printf("| ID:%d | Name:%s |\n",s.id,s.name);
}

#endif // STUDENT_TYPE_H
