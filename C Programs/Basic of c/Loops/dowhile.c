#include <stdio.h>
int main(){
    int d,m,d1;
    printf("Enter the days : %d",d);
    scanf("%d",&d);
    m = d/30;
    d1= d%30;
    printf("%d days = %d month(s) and %d day(s)",d,m,d1);



    return 0;
}