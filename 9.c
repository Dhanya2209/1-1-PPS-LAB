#include<stdio.h>
int main() {
int a;
printf("Enter a value :");
scanf("%d",&a);
if(a % 2 == 0) {
printf("The number is divisible by 2");
}
else{
printf("the number is not divisible by 2");
}
return 0;
}
