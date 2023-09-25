//find the smallest number among the five numbers

#include<stdio.h>

int main(){
    int a,b,c,d,e,min;
    printf("enter any five numbers :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    min = a;
    if (b<min)
    {
        min=b;
    }
    else if (c<min)
    {
        min=c;

    }
    else if (d<min)
    {
        min=d;
    }
    else {
        min=e;
    }

    printf("min number =%d",min);

}
