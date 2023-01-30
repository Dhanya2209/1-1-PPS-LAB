#include<stdio.h>
int main() {
int item;
printf("Enter item number :");
scanf("%d",&item);
switch(item){
case 1:printf("Chicken biryani\n");
break;
case 2:printf("Chicken Manchuria\n");
break;
case 3:printf("Fried Piece biryani\n");
break;
case 4:printf("Veg noodles\n");
break;
case 5:printf("Chicken noodles\n");
break;
case 6:printf("Chicken 65\n");
break;
case 7:printf("Chicken Majestic\n");
break;
case 8:printf("Chicken roll\n");
break;
case 9:printf("Fries\n");
break;
default:printf("Item not available\n");
}
printf("Thank you for choosing our restraunt\n");
return 0; 
}

