#include<stdio.h>

int main(){
    int yr;
    printf("\nenter any year :");
    scanf("%d",&yr);
    if (yr%100==0)
    {
        if (yr%400==0)
        {
            printf("%d is a leap year",yr);
        }
        else{
            printf("%d is not a leap year",yr);

        }
        
    }else{
        if (yr%4==0)
        {
          printf("%d is a leap year",yr);
        }else{
          printf("%d is not a leap year",yr);
        }
        
    }
    
}