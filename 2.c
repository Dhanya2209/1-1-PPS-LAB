#include<stdio.h>
int main() {
int a,b,c;
printf("Enter the value : \n" );
printf("Enter the value : \n");

scanf("%d",&a);
scanf("%d",&b);

c = a + b;
printf("The addition of two numbers is %d\n", c);
c =  a - b;
printf("the subtraction of two numbers is %d\n", c);
 c = a / b;
 printf("the division of two numbers is %d\n", c);
 c = a * b;
 printf("the multiplication of two numbers is %d\n", c);
 c = a % b;
 printf("the modulud of two numbers is %d\n", c);
  c = a += b;
printf("The addition of two numbers using assignment operators is  is %d\n", c);
c = a -= b;
printf("The subtraction of two numbers using assignment operators is  is %d\n", c);
c = a *= b;
printf("The multiplication of two numbers using assignment operators is  is %d\n", c);
c = a /= b;
printf("The division of two numbers using assignment operators is  is %d\n", c);
return 0;
}

