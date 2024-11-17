#include <stdio.h>
float area(int x);

int main() {
    int a;
    scanf("%d", &a);
    float s = area(a);
    printf("the area of a circle is %.2f",s);
    return 0;
}
float area(int x) {

    return x*x*3.14;
}
    