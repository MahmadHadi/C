//METHOD OVER RIDING

#include<stdio.h>
int main()
{
    typedef struct student//////////typedef lakhva thi struct no lakhavu pade
    {
        char name[30];
        int rNo;
        int marks;
    }student;///////////////chelle structure name lakhvu
    
    student s1={"hadi",1,33};
    student s2=s1;//deep copy banshe///////METHOD OVER RIDING
    printf("Before change\n");
    printf("%d ",s1.rNo);
    printf("%d ",s2.rNo);
    
    printf("\nAfter change\n");
    s2.rNo=2;////////////////////////////proof of deep copy
    printf("%d ",s1.rNo);
    printf("%d ",s2.rNo);
    
    
    return 0;
}