#include <stdio.h>
int R_fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return R_fib(n - 1) + R_fib(n - 2);
    }
}
int N_fib(int n) {
    int a = 0, b = 1, sum;
    if (n == 0) {
        return a;
    }
    printf("%d ", a); // Print the first number in the series
    if (n >= 2) {
        printf("%d ", b); // Print the second number in the series
    }
    for (int i = 2; i < n; i++) {
        sum = a + b;
        printf("%d ", sum); // Print the current number in the series
        a = b;
        b = sum;
    }
    return b; // Return the last number in the series
}
int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("\nThe Fibonacci series using Recursive function:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", R_fib(i));
    }
    printf("\n\nThe Fibonacci series using Non-Recursive function:\n");
    printf("%d ",N_fib(n));
    return 0;
}
