/*
Question 9: 
The store handles both pick-up orders and deliveries. A home delivery option 
adds a logistics and fuel surcharge of $3.00 to the bill. Write a program that 
inputs the order total, and then asks: 'Fulfillment Option (1. Pickup, 2. Delivery)'. 
Use a decision structure. If '2' is chosen, add $3.00 to the total. If '1' is chosen, 
add nothing. Calculate and output the final total cost of the order.
*/
#include <stdio.h>

int main() {
    float order_total;
    int fulfillment_choice;

    printf("Enter the order total cost: $");
    scanf("%f", &order_total);

    printf("Fulfillment Option (1. Pickup, 2. Delivery): ");
    scanf("%d", &fulfillment_choice);

    if (fulfillment_choice == 2) {
        order_total += 3.00;
        printf("Delivery selected (+$3.00 surcharge)\n");
    } else if (fulfillment_choice == 1) {
        printf("Pickup selected. No extra delivery fee applied.\n");
    } else {
        printf("Invalid choice. Routed automatically to standard Pickup.\n");
    }

    printf("Final total cost: $%.2f\n", order_total);

    return 0;
}
