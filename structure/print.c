#include<stdio.h>
int main()
{    
    struct student//////Making structure////kind of a method from java
    {
        int rno;
        float pr;
        char grade;
        char name[20];

    };
    
    struct student hadi={19,88.9,'A',"hadi"};/////////declaration/////making object

    //                          or

    // hadi.grade='A';////////initializasion///////calling
    // hadi.rno=90;////////initializasion///////calling
    // hadi.pr=88.9;////////initializasion///////calling


    
    ///////////////////////////printing///////////////////////////////////
    
    printf("Grade is %c\n",hadi.grade);
    printf("Roll number is %d\n",hadi.rno);
    printf("Percentage is %f\n",hadi.pr);
    printf("Name is %s",hadi.name);
    
    // struct student nayani;/////////declaration/////making object
    
    // nayani.grade='B';////////initializasion///////calling
    // nayani.rno=84;////////initializasion///////calling
    // nayani.pr=77.9;////////initializasion///////calling
    
    // ///////////////////////////printing///////////////////////////////////
    // printf("Grade is %c\n",nayani.grade);
    // printf("Roll number is %d\n",nayani.rno);
    // printf("Percentage is %f\n",nayani.pr);
    
    return 0;
}