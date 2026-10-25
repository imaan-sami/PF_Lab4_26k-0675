/*
Question 8: 
The shop is running a promotional giveaway to encourage premium combos: If a 
customer orders exactly 3 pizzas and selects the Stuffed Crust option, they qualify 
for a free side dish. Write a C program segment that reads the number of pizzas 
and the crust type selection (3 for Stuffed). If both conditions are met 
simultaneously using a compound logical operator, print: 'You get free garlic bread!'. 
Otherwise, print: 'Thank you for your order!'
*/
#include <stdio.h>

int main() {
    int pizza_count;
    int crust_choice;

    printf("Enter number of pizzas ordered: ");
    scanf("%d", &pizza_count);

    printf("Enter crust selection (1.Regular, 2.Thin, 3.Stuffed): ");
    scanf("%d", &crust_choice);

    // Compound logical evaluation using && (AND) operator
    if (pizza_count == 3 && crust_choice == 3) {
        printf("You get free garlic bread!\n");
    } else {
        printf("Thank you for your order!\n");
    }

    return 0;
}
