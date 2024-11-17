#include <stdio.h>
int fact(int n){
    if(n==0||n==1){
        return n;
    }
    else {
        return n*fact(n-1);
    }
}
int nonrec(int n){
    int result = 1;
    for (int i =2; i <=n; i++){
        result = result * i;
    } 
    return result;
}
int main() {
int x;
printf("Enter the Number :\n");
scanf("%d",&x);
if(x<0){
printf("Invalid Number\n");
}
else{
 printf("The Factorial of the Given no. is : %d \n",fact(x));  
 printf("The Factorial of the Given no. using nonrev is : %d ",nonrec(x)); 
}
return 0;
}