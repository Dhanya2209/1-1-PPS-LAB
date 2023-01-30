#include<stdio.h>
#include<math.h>

int main() {
int s=3;
int a=9.8;
int u=0;
float t;
int i;
for(i=0;i<=10;i++){
t=u+sqrt(u*u+2*a*s);
s=s+3;
printf("%f\n",t);
}
return 0;
} 

