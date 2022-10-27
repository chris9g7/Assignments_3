#include<stdio.h>
int main(){

int a, b , c ,D;

printf("enter the value of a b and c\n");

scanf("%d %d %d", &a, &b ,&c);

D = (b*b-4*a*c);

if(D>0)

printf("real & distinct roots\n");

else if(D<0)
printf("real & equal roots\n");

else
printf("imaginary roots\n");



    return 0;
}