/*
Question 4: 
Customers can choose their crust to suit their preference. Each crust selection 
has a distinct pricing addition: Regular crust costs $0, thin crust adds $1, 
and Stuffed crust adds $2. Write a program that asks the cashier to enter the 
current total cost of the order. Then, prompt for the crust type choice (1 for regular, 
2 for Thin, 3 for Stuffed). Use conditional branches to add the appropriate 
surcharge to the total and print the new updated bill total.
*/
#include <stdio.h>

int main() {
    float total_cost;
    int crust_choice;

    printf("Enter the current total cost of the order: $");
    scanf("%f", &total_cost);

    printf("\nCrust Options:\n");
    printf("1. Regular (+$0)\n");
    printf("2. Thin (+$1)\n");
    printf("3. Stuffed (+$2)\n");
    printf("Enter crust type choice (1-3): ");
    scanf("%d", &crust_choice);

    if (crust_choice == 1) {
        printf("Regular crust selected.\n");
    } else if (crust_choice == 2) {
        total_cost += 1.0;
        printf("Thin crust selected (+$1.00).\n");
    } else if (crust_choice == 3) {
        total_cost += 2.0;
        printf("Stuffed crust selected (+$2.00).\n");
    } else {
        printf("Invalid crust selection. Bill remains unchanged.\n");
    }

    printf("Updated bill total: $%.2f\n", total_cost);

    return 0;
}
