/*
Question 5: 
Extra cheese is a popular option that carries a fixed preparation fee of $1.50. 
Write a program that prompts the cashier for the current order total, then asks: 
'Do you want extra cheese (Y/N)?'. Check the character input. If the cashier enters 
'Y' or 'y', add $1.50 to the current total cost and print the updated total. If they 
enter 'N' or 'n', keep the total unchanged. Handle any invalid characters with a polite warning.
*/
#include <stdio.h>

int main() {
    float total_cost;
    char cheese_choice;

    printf("Enter the current order total: $");
    scanf("%f", &total_cost);

    printf("Do you want extra cheese (Y/N)? ");
    scanf(" %c", &cheese_choice); // Note the space before %c to clear any leftover newline character

    if (cheese_choice == 'Y' || cheese_choice == 'y') {
        total_cost += 1.50;
        printf("Extra cheese added (+$1.50).\n");
    } else if (cheese_choice == 'N' || cheese_choice == 'n') {
        printf("No extra cheese selected.\n");
    } else {
        printf("Warning: Invalid input character entered. Total remains unchanged.\n");
    }

    printf("Updated total cost: $%.2f\n", total_cost);

    return 0;
}
