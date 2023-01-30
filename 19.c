#include<stdio.h>
int main() {
float p,t,r,si;
printf("Enter principle amount : ");
scanf("%f",&p);
printf("Enter time duration for how many months : ");
scanf("%f",&t);
printf("Enter rate of intrest : ");
scanf("%f",&r);
si = p*t*r/100;
printf("The simple intrest is : %f", si);
return 0 ;
}



