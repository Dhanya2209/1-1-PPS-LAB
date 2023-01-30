#include<stdio.h>
int main() {
 int percentage;
 printf("enter percentage : ");
 scanf("%d",&percentage);

 if(percentage>=80){
 printf("The student passed with distinction\n");
 }
 else if(percentage<=80 && percentage>=70){
 printf("The student passed in 1st class\n");
 }
 else if(percentage<=70 && percentage>60){
 printf("The student passed in 2nd class\n");
 }
 else if(percentage<=60 && percentage>=35){
 printf("The student passed in 3rd class\n");
 }
 else{
 printf("The student has failed in exam\n");
 }
 return 0;
 }
 
