#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,3,4,5,6,7,6,3};
    //jo declaration and initialization banne ak sathe kariye to size lakhvi jaruri nathi.

    // printf("%d ",arr[0]);
    // printf("%d ",arr[1]);
    // printf("%d ",arr[2]);
    // printf("%d ",arr[3]);
    
    for(int i=0;i<=10;i++)
    {
        printf("%d\n",arr[i]);
    }
    
    printf("ok\n");

    //............taking input.................//

    int hadi[4];
    
    //............taking input.................//
    for(int i=0;i<=3;i++)
    {
        scanf("%d",&hadi[i]);
    }
    
    //      or
    
    // scanf("%d",&hadi[0]);
    // scanf("%d",&hadi[1]);
    // scanf("%d",&hadi[2]);
    // scanf("%d",&hadi[3]);
    
    printf("o/p\n");
    
    for(int i=0;i<=3;i++)
    {
        printf("%d\n",hadi[i]);
    }
   //.....................size of array.................................
   
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("index of array arr is %d.",size);
    
    printf("ok\n");
    
    printf("size of arr is %lu.",sizeof(arr));
    return 0;
}