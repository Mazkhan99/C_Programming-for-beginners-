#include<stdio.h>

int main()
{
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    if (age>60)
    {
        printf("you are a senior citizen\n");
    }
    
    else if (age>=18){
        printf("You are an adult\n");
    }
    else if (age>12)
    {
        printf("you are a teanager\n");
    }
    
    else{
        printf("you are a child\n");
    }
    return 0;
}