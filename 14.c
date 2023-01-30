#include<stdio.h>
int main() {
int i,j,product;
printf("Enter Number");
scanf("%d",&i);
j=1;
while(j<=10){
product = i*j;
printf("%d * %d = %d\n", i,j,product); 
j++;
}
return 0;
}

