//array + structure

#include<stdio.h>
int main()
{
    struct student
    {
        char name[30];
        int rNo;
        int marks;
    };
    
    struct student arr[4];
    
    struct student s1={"hadi",1,46};////////error aavshe direct karshu to tethi 1 variable s1 lidho/////arr ma
    arr[0]=s1;
    
    struct student s2={"hamza",2,43};
    arr[1]=s2;
    
    struct student s3={"gazi",3,45};
    arr[2]=s3;
    
    struct student s4={"pacha",4,49};
    arr[3]=s4;
    
    printf("%s %d %d\n",arr[0].name,arr[0].rNo,arr[0].marks);
    printf("%s %d %d\n",arr[1].name,arr[1].rNo,arr[1].marks);
    printf("%s %d %d\n",arr[2].name,arr[2].rNo,arr[2].marks);
    printf("%s %d %d\n",arr[3].name,arr[3].rNo,arr[3].marks);
    
    return 0;
}