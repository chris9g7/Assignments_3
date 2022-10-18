#include<stdio.h>
int main(){

int  x;
printf("enter a number \n");
scanf("%d", &x);

if(x%2 == 0)
printf("even number\n");

else
printf("odd number\n");

return 0;
}