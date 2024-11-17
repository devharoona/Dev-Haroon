#include<stdio.h>
int main() {
int a,b;
    scanf("%d %d",&a,&b);
    printf("before swap %d and %d\n",a,b);
    a=a+b;//  a=a+b; a = 3, b= 4 then total = 7
    b=a-b;//  b=a-b; a = 7, b= 4 then total =  3
    a=a-b;//  a=a-b; b = 3, a = 7 then total = 4
    printf("after swap %d and %d\n",a,b);
    return 0;
}