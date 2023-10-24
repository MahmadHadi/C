// Write a C program to calculate income tax, gross income, net income from monthly income given by user 
// yearly income     tax rate
// <3,00,000         5%  

// >=3,00,000
// <5,00,000         10%  

// >=5,00,000
// <8,00,000         20%

// >=8,00,000        30%  

#include<stdio.h>
void main()
{
    int a;
    float b,c;
    printf("Enter your monthly income: ");
    scanf("%d",&a);
   
    
   if(a>=0)
   {
        a=a*12;
        printf("Your yearly income is %dRs.",a);
    
       if(a<300000)
       {
           b=a*5/100;
           printf("\nTax rate=5pr");
           printf("\nIncome tax=%.2fRs.",b);
           c=a-b;
           printf("\nNet income is %.2fRs.",c);
           
       }
       else if(a>=300000 && a<500000)
       {
           b=a*10/100;
           printf("\nTax rate=10pr");
           printf("\nIncome tax=%.2fRs.",b);
           c=a-b;
           printf("\nNet income is %.2fRs.",c);
           
       }
       else if(a>=500000 && a<800000)
       {
           b=a*20/100;
           printf("\nTax rate=20pr");
           printf("\nIncome tax=%.2fRs.",b);
           c=a-b;
           printf("\nNet income is %.2fRs.",c);
           
       }
       else 
       {
           b=a*30/100;
           printf("\nTax rate=30pr");
           printf("\nIncome tax=%.2fRs.",b);
           c=a-b;
           printf("\nNet income is %.2fRs.",c);
           
       }
   }
   else
   {
       printf("Please enter valid input.");
   }
}