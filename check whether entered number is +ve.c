//check whether entered number is +ve or -ve or 0

#include<stdio.h>

int main(){
    int num;
    printf("enter any integer :");
    scanf("%d",&num);

    if (num>0)
    {
        printf("%d is an positive number",num);
    }
    else if (num==0)
    {
        printf("%d is 0",num);

    }else{
        printf("%d is an negative number",num);
    }
    


}
