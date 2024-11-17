#include <stdio.h>
void printTable(int *mulTable, int num, int size){
    printf("The Multiplication table of %d is:\n", num);
    for(int i=0; i<size; i++){
        mulTable[i] = num*(i+1);
    }
    for(int i=0; i<size; i++){
        printf("%d X %d = %d\n", num, i+1, mulTable[i]);
    }
    printf("\n########### END ###########\n\n");

}
int main(){
     int mulTable[5][10];
     int nums[5];

    printf("Enter 5 numbers for multiplication tables:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 5; i++) {
        printTable(mulTable[i], nums[i], 10);
    }

  

    return 0;
}