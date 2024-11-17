#include<stdio.h>
/*void main() {
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    int h=1;
 for(int i=n; i>=0; i--) {
    for(int j=i; j>=0; j--){
        printf("%d ",h);
        h++;
    }
    printf("\n");
 }
}*/
int main(){
int n,m;
printf("Enter the numbers : ");
scanf("%d%d",&n,&m);
for(int i=1;i<=m;i++){
    printf("%d X %d = %d\n",n,i,i*n);
}
return 0;

}