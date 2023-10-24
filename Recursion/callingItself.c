// //function calling itself


// #include<stdio.h>
// void hadi()////////////////////function calling itself
// {
//     printf("Hadi\n");
//     hadi();////////////////////function calling itself
// }
// int main()
// {
//     printf("main");
//     hadi();

//     return 0;
// }
// note:
//  **   infinite loop jevu o/p aavshe


//how to  stop it?

#include<stdio.h>
void hadi(int n)////////////////////function calling itself
{
    if(n==0) return;////////////condition true thashe atle return thashe jethi function puru thashe
    printf("Hadi\n");
    hadi(n-1);////////////////////function calling itself
}
int main()
{
    printf("main\n");
    hadi(10);/////////////10 vaar print thashe

    return 0;
}
