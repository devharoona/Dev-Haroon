#include <stdio.h>
int main() {
int n, k=1;
scanf("%d",&n);
for(int i=1; i<=n; i++){
    for(int space=1; space<=n-i; space++){
        printf(" ");
    }
    for (int j=1; j<=i; j++){
        printf("%4d",k++);

    } 
    printf("\n");
}
return 0;
}