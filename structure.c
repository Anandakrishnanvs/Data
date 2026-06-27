#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char name[10];
    int rollno;
    float cgpa;
}Student;


void printdetails(Student s)
{
    printf("%s\n",s.name);
    printf("%d\n",s.rollno);
    printf("%f\n\n",s.cgpa);
}
int main()
{
    int n;
    printf("enter the Student no :");
    scanf("%d",&n);
    Student s1[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the Student name %d : ",i+1);
        scanf("%s",&s1[i].name);
        printf("enter the Student roll no %d : ",i+1);
        scanf("%d",&s1[i].rollno);
        printf("enter the Student cgpa  %d: ",i+1);
        scanf("%f",&s1[i].cgpa);
    }
    printf("Student details \n\n");
    for(int i=0;i<n;i++)
    {
        printdetails(s1[i]);
    }

    return 0;
}
