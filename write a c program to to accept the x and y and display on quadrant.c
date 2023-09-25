//write a c program to to accept the  value of x and y from the user and display on which particular quadrant

#include<stdio.h>

int main(){
    int x,y;
    printf("enter the value of x and y :");
    scanf("%d%d",&x,&y);
    if (x>0 && y>0)
    {
        printf("\n it lies on 1st quadrant");

    }
    else if (x<0 && y<0)
    {
        printf("it lies on 3rd quadrant");
    }
    else if (x>0 && y<0)
    {
        printf("it lies on 4th quadrant");
    }
    else if (x==0 && y==0)
    {
        printf("it lies on origin");
    }
    else if (x=0 && y!=0)
    {
        printf("it lies on y-axis");
    }
    else
    {
        printf("x-axis");
    }
    
    