#include<stdio.h>
int main() {
int a,b,d;
printf("Enter the a value :\n");
printf("Enter the b value :\n");
printf("Enter the d value :\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&d);
printf("%d\n",(a>b && a<b));
printf("%d\n",(a>=b && a<b));
printf("%d\n",(a>b && a<=b));
printf("%d\n",(a>b || a<b));
printf("%d\n",(a>=b || a<b));
printf("%d\n",(a>b || a<=b));
printf("%d\n",!(a>b && a<b));
printf("%d\n",!(a>=b && a<b));
printf("%d\n",!(a>b && a<=b));


 d+= 10;
printf("%d",d);
d-= 10;
printf("%d",d);
printf("%d",d);



return 0;
}

