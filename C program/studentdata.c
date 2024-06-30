#include<stdio.h>

int main()
{
    FILE *fptr;
    char name[100];
    int rollno;
    float cgpa;

    fptr = fopen("student.txt","w");

    printf("Enter name: ");
    scanf("%s",name);

    printf("Enter Roll Number: ");
    scanf("%d",&rollno);

    printf("Enter cgpa: ");
    scanf("%f",&cgpa);

    fprintf(fptr,"%s\t%d\t%f",name,rollno,cgpa);

    fclose(fptr);
    return 0;
}