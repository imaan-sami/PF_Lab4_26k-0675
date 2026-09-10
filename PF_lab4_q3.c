/*
Question 3: 
To attract bulk orders, Slice & Dice Palace implements an absolute pricing matrix 
for their small pizzas: 1 pizza costs $8; a combo of 2 pizzas costs $15; and a package
 of 3 pizzas costs $21. Write a program that asks the cashier to input the customer's 
 desired pizza quantity (limited to 1, 2, or 3). Using a conditional ladder, compute 
 the base cost according to this pricing policy and print the final package total along 
 with the quantity.
*/
#include <stdio.h>


int main(){


    int var;
    printf("\n 1. one pizza");
    printf("\n 2. two pizza");
    printf("\n 3. three pizza");
    printf("\n 4. Exit");


    printf("\n Enter your choice: ");

    scanf("%d",&var);
    switch(var){
        case 1: printf("\n one pizza cost $8");
                break;
        case 2: printf("\n two pizza cost $15 ");
                break;
        case 3: printf("\n three pizza cost $21");
                break;
        case 4: printf("\n Exited");
                break;
        default: printf("\n Invalid Choice");
                break;

    }
return 0;
}