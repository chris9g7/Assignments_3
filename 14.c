#include<stdio.h>
int main() {

int x;
printf("enter a number\n");
scanf("%d" , &x);

if( x%7 == 0) 
{
printf("%d is divisible by 7 or divisible by 3 \n" , x);
}

else if (x%3 == 0)
{
printf("%d is divisible by 7 or divisible by 3 \n" , x); 
}

else
printf("%d is not divisible by 7 or 3 \n" , x); 

  return 0;
}