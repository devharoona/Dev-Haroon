#include <stdio.h>
int positiveArr(int arr[]){
  for(int i=0; i<5;++i){
   if (arr[i]%2==0){
    return 1;
   }
}
return 0;
}
int main() {
    int arr[5];
    for (int i = 0; i < 5; ++i){
        scanf("%d",&arr[i]);
    }
    if( positiveArr(arr)){
        printf("Positives");
    }
    else{
        printf("Not positive");
    }
        

  return 0;
}