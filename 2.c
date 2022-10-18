#include<stdio.h>
int main(){

int  x;
printf("enter a number \n");
scanf("%d", &x);

if(x%5 == 0)
printf("divisible by 5\n");

else
printf("not divisible by 5\n");

return 0;
}