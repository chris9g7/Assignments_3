#include<stdio.h>
int main() {

int x;
printf("enter a number\n");
scanf("%d" , &x);

if( (x%2 == 0) && (x%3 == 0)  )

printf("%d is divisible by 2 and 3\n" , x);


else

printf("%d is not divisible by 2 and 3\n" , x);


  return 0;
}