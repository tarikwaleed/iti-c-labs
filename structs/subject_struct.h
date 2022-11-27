#ifndef SUBJECT_TYPE_H
#define SUBJECT_TYPE_H

typedef struct Subject{
    int id;
    char name[20];
    int points;
}Subject;
Subject GetSubject(){
    Subject subject;
    printf("Enter Subject id: ");
    scanf("%d",&subject.id);
    fflush(stdin);
    printf("Enter Subject Name: ");
    fgets(subject.name,sizeof(subject.name),stdin);
    printf("Enter Subject points: ");
    scanf("%d",&subject.points);
    fflush(stdin);
    return subject;
}
Subject* GetMultipleSubjects(int numberOfSubjects){
    Subject* subjects=malloc(numberOfSubjects*sizeof(Subject));
    for(int i=0;i<numberOfSubjects;i++){
        subjects[i]=GetSubject();
    }
    return subjects;

}
int CalculateSum(Subject* subjects,int s){
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=subjects[i].points;
    }
    return sum;
}
int CalculateAverage(Subject* subjects,int s){
    int sum=CalculateSum(subjects,s);
    return sum/s;
}
void DisplaySubject(Subject s){
    printf("| ID:%d | Name:%s | Grade:%d | \n",s.id,s.name,s.points);
}
#endif // SUBJECT_TYPE_H
