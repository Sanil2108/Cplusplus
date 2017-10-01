#include <stdio.h>
#include <stdlib.h>

struct Student{
    int rollNo;
    char name[10];
    int marks[3];
};

struct Marks{
    int totalMarksOfIndividualSubject[3];
    int totalMarksOfIndividualStudent[3];
};

void printStructStudent(struct Student s){
    int i=0;
    printf("%d : %s\n", s.rollNo, s.name);
    for(;i<3;i++){
        printf("%d\n", s.marks[i]);
    }
}

int isEqual(struct Student s1, struct Student s2){
    int isEqual=1;
    if(s1.marks!=s2.marks||s1.name!=s2.name||s1.rollNo!=s2.rollNo){
        isEqual=0;
    }
    return isEqual;
}

int main()
{
    int i=0, j;
    struct Marks marks={
        {
            0, 0, 0
        },
        {
            0, 0, 0
        }
    };
    struct Student students[3]={{
        100,
        "Sanil",
        {
            80, 90, 95
        }
    },{
        101,
        "Sanil2",
        {
            81, 92, 75
        }
    },{
        102,
        "Sanil3",
        {
            83, 91, 45
        }
    }};
    for(;i<3;i++){
        for(j=0;j<3;j++){
            marks.totalMarksOfIndividualSubject[j]+=students[i].marks[j];
            marks.totalMarksOfIndividualStudent[j]+=students[j].marks[i];
        }
    }
    for(i=0;i<3;i++){
        printf("%d\n", marks.totalMarksOfIndividualSubject[i]);
        printf("%d\n", marks.totalMarksOfIndividualStudent[i]);
    }
    printf("%d", sizeof(struct Student));
    return 0;
}
