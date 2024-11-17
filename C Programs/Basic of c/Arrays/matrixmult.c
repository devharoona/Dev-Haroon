#include <stdio.h>
int main() {
    int r1, c1, r2, c2;
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &r2, &c2);
    if (c1 == r2) {
        int a[10][10], b[10][10], c[10][10];
        printf("Enter elements of matrix A:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter elements of matrix B:\n");
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                scanf("%d", &b[i][j]);
            }
        }
        printf("Product of matrices is:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                c[i][j] = 0;
                for (int k = 0; k < c1; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Invalid matrix dimensions for multiplication.\n");
    }
    return 0;
}
