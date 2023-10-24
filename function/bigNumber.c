//Write a pro to print maximum of number.
#include<stdio.h>

int hadi(int y, int z) {
    if (y > z) 
        return y;
    else 
        return z;
}

int main() {
    int a, b;
    
    printf("Enter a: ");
    scanf("%d", &a);    
    
    printf("Enter b: ");
    scanf("%d", &b);    
    
    int m = hadi(a, b); // Calling the function and storing the result in 'm'
    printf("Maximum of %d and %d is %d.\n", a, b, m); // Fixed the printf statement
    
    return 0;
}
