#include<stdio.h>
int main() {

char ch;
printf("enter a character\n");
scanf("%c", &ch);


if( 'a'<=ch && ch<='z')
{
    printf("lower case\n");
}

else
printf("upper case\n");

  return 0;
}