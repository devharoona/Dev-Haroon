#include<stdio.h>

void display(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
       // written by Haroon Rasool
void bubblesort(int a[], int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){  //for no. of passes
        for(j=0;j<n-i-1;j++){  //for comparison in each pass
            if(a[j]>a[j+1]){
                temp=a[j];   //swapping
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
} 
int main(){
    int n, a[20]; 
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    printf("\nElements you want to sort : "); 
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nUnsorted list\n");
    display(a,n);
    printf("\nBUBBLE SORT\nSorted List\n");
    bubblesort(a,n);
    display(a,n);
    return 0;
}
