#include <stdio.h>
int gcd(int x, int y){
    if(y==0){
    return x;
    }
    else {
        return gcd(y,x%y);
    }
}
int nonrec_gcd(int x, int y){
    int temp;
    while (y!=0){
        temp = x%y;
        x = y;
        y = temp; 
    }
    return x;
}
int main() {
int a,b;
printf("Enter Number\n");
scanf("%d%d",&a,&b);
printf("The GCD of %d and %d is: %d\n",a,b,gcd(a,b));
printf("The non rec GCD of %d and %d is: %d\n",a,b,nonrec_gcd(a,b));
return 0;
}