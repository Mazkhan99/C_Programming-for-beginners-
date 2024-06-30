#include <stdio.h>

void french();
void indian();

int main(){
    char ch;
    printf("enter 'f' for french and 'i' for indian: ");
    scanf("%c",&ch);
    if (ch == 'f' || ch == 'F')
    {
        french();
    }
    else if(ch == 'i' || ch == 'I')
    {
        indian();
    }
    else
    {
        printf("enter valid character");
    }

    return 0;
}

void french()
{
    printf("bonjour\n");
}

void indian()
{
    printf("Namaste");
}
