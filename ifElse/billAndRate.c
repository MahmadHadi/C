//Write a C program to calculate final electricity bill based upon below given criteria. take monthly electricity unit from user as input. 

// units           price  per unit 
// <100            1
// >100 & <200     2 
// >200 & <300     3
// >300 & <400     4
// >400            5
// also calculate 5% percentage energy charge on total bill amount & display total amount  

#include<stdio.h>
void main()
{
    float a,b,c,d;
    printf("Enter unit of electricity: ");
    scanf("%f",&a);
    if(a>=0)
    {
            if(a<=100)
        {
            b=a* 1;
            printf("\nBill amount=%f",a);
            c=5*b/100;
            printf("\n5pr energy charge=%f",c);;
            d=b+c;
            printf("\nTotal amoun=bill amount+5pr energy charge=%f",d);
        }
        else if(a>100 && a<=200)
        {
            b=a* 2;
            printf("\nBill amount=%f",a);
            c=5*b/100;
            printf("\n5pr energy charge=%f",c);;
            d=b+c;
            printf("\nTotal amoun=bill amount+5pr energy charge=%f",d);
        }
        else if(a>200 && a<=300)
        {
            b=a* 3;
            printf("\nBill amount=%f",a);
            c=5*b/100;
            printf("\n5pr energy charge=%f",c);;
            d=b+c;
            printf("\nTotal amoun=bill amount+5pr energy charge=%f",d);
        }
        else if(a>300 && a<=400)
        {
            b=a* 4;
            printf("\nBill amount=%f",a);
            c=5*b/100;
            printf("\n5pr energy charge=%f",c);;
            d=b+c;
            printf("\nTotal amoun=bill amount+5pr energy charge=%f",d);
        }
        else if(a>400 )
        {
            b=a* 5;
            printf("\nBill amount=%f",a);
            c=5*b/100;
            printf("\n5pr energy charge=%f",c);;
            d=b+c;
            printf("\nTotal amoun=bill amount+5pr energy charge=%f",d);
        }
    }
    
    else
    {
        printf("Invalid input.");;
    }
}                                                            