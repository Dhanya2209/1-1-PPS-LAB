#include<stdio.h>
int main() { 
int a,b,c,d;
printf("Enter A");
scanf("%d",&a);
printf("Enter B");
scanf("%d",&b);
printf("Enter C");
scanf("%d",&c);

d=a+b+c;
printf("%d\n",d);
if(a==c && b==b && c==a){
printf("It is a palindrom\n");
}
else{
printf("it is not a palindrom\n");
}
return 0;
}

