#include<stdio.h>
int main(){

int  x;
printf("enter a number \n");
scanf("%d", &x);

if(x<=0)
printf("non positive number\n");

else
printf("positive number\n");

return 0;
}