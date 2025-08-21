#include<stdio.h>
int main(){
int a , b ;
a = 5;
b = 10;
printf("enter your number ");
scanf("%d%d", &a, &b);
printf("sum is  : %d\n", a + b);
printf(" difference is  : %d\n", a - b);
printf("product is  : %d\n", a * b);
printf("quotient is  : %d\n", a / b);
return 0;
}