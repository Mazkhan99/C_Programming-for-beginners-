#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    s1.cgpa = 8.63;
    strcpy(s1.name, "Sahil");
    s1.roll = 22;

    struct student s2={'Ayush','24','9.00'};

    printf("%s\n", s1.name);
    printf("%d\n", s1.roll);
    printf("%.2f\n", s1.cgpa);

    return 0;
}