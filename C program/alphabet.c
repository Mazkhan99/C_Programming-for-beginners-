#include<stdio.h>
int main(){
    char ch;
    printf("enter character: ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <='Z'){
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z'){
        printf("lowercase\n");
    } else{
        printf("not an alphabet\n");
    }

    
    return 0;
}