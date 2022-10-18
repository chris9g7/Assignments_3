#include<stdio.h>
int main(){

int  x;
printf("enter a number \n");
scanf("%d", &x);

// using bitwise operator and masking

if((x&1) == 0)
// using bracket above stat***

printf("even number\n");

else
printf("odd number\n");

return 0;
}