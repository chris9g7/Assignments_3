#include<stdio.h>
int main(){


int cp, sp,  prof , loss, p_perct, l_perct;

printf("enter a cost price and selling price of a product\n"); 
scanf("%d %d", &cp, &sp);

loss = cp-sp;
prof = sp-cp;

p_perct = (prof/cp*100);
// profit %

l_perct = (loss/cp*100);
// loss %

printf("%d\n", p_perct);

printf("%d\n", l_perct);

return 0;
}