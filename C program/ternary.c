#include<stdio.h>
int main(){
    int age;
    printf("enter age: ");
    scanf("%d",&age);

    printf(age >= 18 ? "adult\n" : "not adult \n");

    return 0;
}