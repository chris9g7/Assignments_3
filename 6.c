#include<stdio.h>
int main(){

int  x,y;
printf("enter a number x and y \n");
scanf("%d %d", &x,&y);

if(x<y)
printf("greater number is %d\n" , y);

else if (x==y)
printf("both number are equal %d\n" , x);

else
printf("greater number is %d\n",y);

return 0;
}