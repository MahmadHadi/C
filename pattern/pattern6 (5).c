//Write a pro to print followig pettern{Alphabet square}.
    // a b c
    // a b c
    // a b c
    
#include<stdio.h>
int main()
{
    int a;
    printf("Enter sides of Number square:  ");
    scanf("%d",&a);
    
    
    
    if(a>0 && a<=26)
    {
        for(int i=1;i<=a;i++)//////////number of raw
        {
            for(int j=1;j<=a;j++)////////number of column
            {
                printf("%c ",i+64);///////j+64 chh karan ke 1 ni jagya a thi 65 thi start karvanu chh. 65 a 'a' no type cast chh.
            }
            printf("\n");/////sub loop puri thay atle navi line ma enter thahse.
        }
    }
    else if(a>26)
    {
        printf("Enter value lesser then 26.");
    }
    
    else if(a<=0)
    {
        printf("Enter value greater then 0.");
        
    }
    
    return 0;
}