// Write a pro to print momday if input is 1 and so on by SWUTCH CASES.
#include<stdio.h>
void main(){
    int a;
    printf("Enter number of day: ");
    scanf("%d",&a);
    
    switch(a){
        
        case 1:
            printf("Sunday.");
            break;
        
        case 2:
            printf("Monday.");
            break;
        
        case 3:
            printf("Tuesday.");
            break;
            
        case 4:
            printf("wednesday.");
            break;
            
        case 5:
            printf("Thursday .");
            break;
            
        case 6:
            printf("Friday.");
            break;
        
        case 7:
            printf("Saturday.");
            break;
            
    }
}