//check whether the student is pass or fail by marks of 5 subjects
#include<stdio.h>

int main(){
    int a,b,c,d,e,sum,perc;
    printf("enter the mars of 5 subjects :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if (m1>=40 && m2>=40 && m3>=40 && m4>==40 && m5>==40)
    {   sum=m1+m2+m4+m5+m3;
    perc=sum/5;

        printf("\n the total is %d",sum);
        printf("\n the percentage is %d ",perc)
    }
    else{
        printf("the student is fail to score marks")
    }

}
