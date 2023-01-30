#include<stdio.h>
int main() {
int a,b,c;
printf("Enter A");
scanf("%d",&a);
printf("Enter B");
scanf("%d",&b);
printf("Enter C");
scanf("%d",&c);
c = a + b;
printf("The sum of two numbers is: %d\n", c);
c = a - b;
 printf("The difference of two numbers is: %d\n", c);
 c = a / b;
 printf("The quotient of two numbers is: %d\n",c);
 c = a % b;
 printf("The modulus of two numbers is: %d\n",c);
 printf("%d\n", a==b);
 printf("%d\n", a<=b);
 printf("%d\n", a<b);
 printf("%d\n", a>b);
 printf("%d\n", a>=b);
 printf("%d\n", a!=b);
 printf("%d\n", a>b && a<c);
 printf("%d\n", a>b || a<c);
 printf("%d\n",! a>b && a<c);
 a += 3;
 printf("the sum of two numbers is : %d\n", a);
 a -= 3;
 printf("the difference  of two numbers is : %d\n", a);
 a *= 3;
 printf("the product of two numbers is : %d\n", a);
 a /= 3;
 printf("the quotient of two numbers is : %d\n", a);
 a %= 3;
 printf("the modulus of two numbers is : %d\n", a);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
 }
