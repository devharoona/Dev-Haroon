#include <stdio.h>
float avg(int x, int y, int z);  //function declaration 


int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("avg of %d , %d ,%d is %.2f",a,b,c,avg(a,b,c));// function call

}
float avg(int x, int y, int z){ // function definition
    float r =  (x+y+z)/3;
    return r;
}