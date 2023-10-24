//Write a pro to check a number is prime or not.
//Prime number:
//             Any number is prime if it has no factors axcept 1 and number it self

///////////////METHOD 1 SHORT METHOD///////////////////////////


//Write a pro to check a number is prime or not.
//Prime number:
//             Any number is prime if it has no factors axcept 1 and number it self

#include<stdio.h>
int main()
{
    int a,c=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("1 is nither prime nor composite.");
    }
    
    else
    {
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
           {
                c=0;
            }
        }
    
        if(c==0)
        {
            printf("Given number is composite.");
        }
        else
        {
            printf("Given number is prime number");
        }
    }
    
    
    return 0;
}







/////////////////METHOD 2 LONG METHOD///////////////////////////
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number: ");
//     scanf("%d",&a);

//     if(a==1)
//     {
//         printf("1 is nither prime nor composite.");
//     }
//     else
//     {
//         for(int i=2;i<=a/2;i++)
//         {
//              if(a%i==0)
//              {
//                  printf("Given number is composite.");
//                  break;
                }
//         }
//         else
//         {
//             printf("Given number is prime number.");
//             break;
//         }
//     }
//  }
    
    
//     
    
//     return 0;
// }