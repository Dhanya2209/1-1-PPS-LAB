#include<stdio.h>
int main() {
int a,d;
printf("Enter the value 1 :");
scanf("%d",&a);
a = ++a;
printf("%d\n",a++);
d = --a;
printf("%d\n", a);

int b = 10;
int c; 
c = b++;
printf("%d", c);

return 0;
}

