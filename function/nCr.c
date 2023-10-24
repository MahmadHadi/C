//Write a pro to print nCr 

#include <stdio.h>

int fact(int a) {
    int f = 1;
    for (int i = 1; i <= a; i++) {
        f *= i;
    }
    return f;
}

int ncr(int a, int b) {
    return fact(a) / (fact(b) * fact(a - b));
}

int main() {
    int a, b;
    printf("Enter value of n: ");
    scanf("%d", &a);

    printf("Enter value of r: ");
    scanf("%d", &b);

    int c = ncr(a, b);

    printf("%dC%d is %d\n", a, b, c);

    return 0;
}
