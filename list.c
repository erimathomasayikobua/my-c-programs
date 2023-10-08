#include <stdio.h>

int main(){

printf("item\tNumber\tcost\n");
printf("bread\t1\t5500\n");
printf("milk\t2\t2400\n");
printf("enter the item you like to buy\n");
int item, cost, bill, qty, amount = 46000;
scanf("%d", &item);

switch(item){
case 1:
printf("please enter the quantity you desire to buy\n: ");

bill = qty * cost;
scanf("%d", &qty);
printf("%d is your total bill for your order\n");
break;
case 2:
printf("please enter the quantity you desire to purchase\n: ");
 bill = qty * cost;
scanf("%d", &qty);
printf("%d is your total bill for this order\n");
break;
default:
printf("invalid choice!!! please re-select your choice, or quit the program,... thank you");
break;
}
    return 0;
}