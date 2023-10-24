//Addition of two number by using function.

///////////////METHOD 1/////////////////////////////
#include<stdio.h>

int hadi(int y, int z) {
    return y+z;
}

int main() {
    printf("%d",hadi(4,5));////////direct call kariyu
    
    return 0;
}


//////////METHOD 2//////////////////////////////////////////
// #include<stdio.h>
// void hadi(int y,int z)//////////paramiterized function////////////void=return type.
// {
//     int k=y+z;
//     printf("%d",k);
    
//     return;//////////////////return
// }
// int main()
// {
//     int a,b;
    
//     printf("Enter a: ");
//     scanf("%d",&a);    
    
//     printf("Enter b: ");
//     scanf("%d",&b);    
    
//     hadi(a,b);///////////////////////calling
    
//     return 0;
// }