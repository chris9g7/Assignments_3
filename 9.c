#include<stdio.h>
int main () {

int a,b,c;

printf("enter a number a, b and c\n");

scanf("%d %d %d" , &a , &b , &c );

if(a>b)
{
    if (a>c)
    printf("greater number is %d\n" , a);
    
    else
    printf("greater number is %d\n", c);
}
else
{
    if(b>c)
    printf("greater number is %d\n" , b);

    else
    printf("greater number is %d\n" , c);

}
return 0;
}