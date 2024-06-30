#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("first.txt","r");

    char myString[100];

    while (fgets(myString,100,fp))
    {
        printf("%s",myString);
    }

    fclose(fp);

    return 0;
}