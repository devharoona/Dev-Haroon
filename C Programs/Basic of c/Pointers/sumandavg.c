#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
int main() {
    int x,y,sum;
    float avg;
    scanf("%d %d",&x,&y);
    sumAndAvg(x,y,&sum,&avg);
    printf("The sum of %d and %d is %d\n",x,y,sum);
    printf("The avg of %d and %d is %.2f",x,y,avg);

return 0;
}