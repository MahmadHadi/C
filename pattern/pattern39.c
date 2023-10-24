//Write a pro to print PASCAL'S TRIANGLE
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
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int x = ncr(i,j);
            printf("%d ",x);
        }
        printf("\n");
    }

    return 0;
}
