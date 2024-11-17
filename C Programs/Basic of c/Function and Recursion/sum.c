#include <stdio.h>
int sum(int x, int y, int z); //function declaration

int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
printf("the sum of the %d %d %d is %d",a,b,c,sum(a,b,c)); //function call
return 0;
}

int sum(int x, int y, int z){ //function definition
int s;
s = x + y + z;
return s;
}