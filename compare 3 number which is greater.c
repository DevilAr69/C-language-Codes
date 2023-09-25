//compare 3 number which is greater
#include<stdio.h>

int main(){
 int a,b,c;
 printf("enter any 3 numbers :");
 scanf("%d%d%d",&a,&b,&c);

 if (a>b){
    if (a>c)
    {
        printf("\na is greater");

    } else{
        printf("\nc is greater");
    }
    
 }
 else{
    if (b>c)
    {
        printf("b is greater");
    }else{
        printf("c is greater");
    }
    
 }

