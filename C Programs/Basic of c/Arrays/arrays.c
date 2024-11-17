#include <stdio.h>
#include <stdlib.h>
int main()
{
  int sum=0;
    int a[3][4],b[4][3],result[3][3];
    printf("Enter the First matrix\n");
    for(int i=0;i<3;i++){
      for(int j=0;j<4;j++){
        scanf("%d",&a[i][j]);
    }
    printf("\n");
 }
  printf("Enter the Second matrix\n");
    for(int i=0;i<4;i++){
       for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
      }
    printf("\n");
 }
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
        for(int k=0;k<4;k++){
            sum +=a[i][k]*b[k][j];
        }
        result[i][j]=sum;
        sum=0;
       }
    }
  printf("The matrix Multiplication are:\n");
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        printf("%d\t",result[i][j]);
       } 
      printf("\n"); 
    }
   
  return 0;
}