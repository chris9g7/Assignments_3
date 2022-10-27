#include<stdio.h>
int main(){

int a,b,c;

printf("enter the sides of triangle\n");
scanf("%d %d %d", &a , &b , &c);

if ( (a+b>=c) && (b+c>=a) && (a+c>=b) )

  printf("valid triangle\n");

else
   printf("invalid triangle\n");

return 0;
}