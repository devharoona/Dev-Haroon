#include <stdio.h>
int main() {
    FILE *ptr;
    char ch;
    ptr = fopen("simple.txt", "r"); //--> for reading the file
    ch = fgetc(ptr);
    while(ch!=EOF){
        ch = getc(ptr);
        printf("the inside file is: %c\n",ch);
    }
return 0;
}