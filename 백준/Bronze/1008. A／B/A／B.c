#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    double result = ((double)a / (double)b);
    printf("%.12lf", result);
}