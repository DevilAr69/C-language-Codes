//sum of any 3 digit number entered by the user
#include<stdio.h>

int main(){
 int d1,d2,d3,num,sum;
 printf("enter any 3 digit number");
 scanf("%d",&num);
 d1=num%10;
 num=num/10;
 
 d2=num%10;
 num=num/10;
 
 d3=num%10;
 sum=d1+d2+d3;

 printf("the sum of 3 digits is %d",sum);
 


 
}
