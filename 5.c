#include<stdio.h>
int main(){

int  x;
printf("enter a three digit number \n");
scanf("%d", &x);

if((101<=x) && (x<=999))
printf("three digit number\n");

else
printf("not a three digit number\n");

return 0;
}