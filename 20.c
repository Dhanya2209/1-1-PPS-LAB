#include<stdio.h>
#include<math.h>
int main() {
float p,t,r,ci;
printf("Enter principle amount : ");
scanf("%f",&p);
printf("Enter time duration for how many months : ");
scanf("%f",&t);
printf("Enter rate of intrest : ");
scanf("%f",&r);
ci = p*pow(1 + r/100,t);
printf("The compund  intrest is : %f", ci);
return 0;
}
