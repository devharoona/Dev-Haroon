
#include <stdio.h>
#include <string.h>
int main(){
    char str[30];
    printf("Enter the string\n");
    gets(str);
    printf("the string entered is:");
    puts(str);
    //String Reverse 
    strrev(str);
    printf("The Reverse string is: %s\n ",str);
    return 0;

}