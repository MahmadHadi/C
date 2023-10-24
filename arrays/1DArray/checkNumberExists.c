//check if number x is exists in the array.


#include<stdio.h>
#include<stdbool.h>
int main()
{
    int x;
    printf("Enter value of x: ");
    scanf("%d",&x);
    
    int arr[]={1,2,3,4,5};
    
    int size,check;
    
    size=sizeof(arr)/sizeof(arr[0]);
    
    bool flag= false;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==x)
        {
            flag=true;
            break;
        }
        else continue;
    }
    
    if(flag==true) printf("%d is exists in array.",x);
    else printf("%d does not exists is array.",x);



    return 0;
} 