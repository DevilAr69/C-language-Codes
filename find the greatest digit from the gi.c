//find the greatest digit from the given 3 digit number
#include<stdio.h>


int main(){
 int d1,d2,d3,num;
 printf("enter any 3 digit number :");
 scanf("%d",&num);

 d1=num%10;
 num-=num/10;

 d2=num%10;
 num-=num/10;

 d3=num%10;
 

 if (d1>d2){
    if (d1>d3)
    {
        printf("\nd1 is greater");

    } else{
        printf("\nd3 is greater");
    }
    
 }
 else{
    if (d2>d3)
    {
        printf("d2 is greater");
    }else
        printf("d3 is greater");
    }
    
 }