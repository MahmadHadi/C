//NOTE: WE CAN USE FOR LOOP LIKE WHILE LOOP.
//    int a=1;
//    for(;a<100;)///////////  ;  /////////farajiyat chhh.///////////
//    {
//       printf("hadi");
//       a++;  
//    }

//Write hello for n times and take n from user.

#include <stdio.h>

int main()
{   
    int a;
    printf("How many times you want to print hello?\n");
    scanf("%d",&a);
    
    if(a>=0)
    {
        
         for(int n=1;n<=a;n++)
         {
           printf("hello\n");
         }
    }
    else
    {
        printf("Enter any number greater then or equal 0");
    }
   

    return 0;
}
