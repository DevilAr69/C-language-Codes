#include<stdio.h>

int main()
{
  int i,j;
  
  for ( i=1; i<=5; i++)
  {
    for ( j=10; j<=50; j+=10)
    {
      printf("%d ",j);
      
    }
    printf("\n");
    
   
  }
  
  return 0;
}