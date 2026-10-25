/*
Question 10: 
Integrate all the rules from Questions 1 to 9 into a single complete C program. 
The program must sequentially process inputs, track state data, execute cascade mathematical operations, 
and output a cleanly structured, highly scannable invoice matching the expected prompt layout.
*/
#include <stdio.h>

int main() {
    // Input state variables
    int size_choice, pizza_count, crust_choice, current_hour, fulfillment_choice;
    char cheese_choice, student_choice;
    
    // Receipt descriptive storage arrays for display mapping
    char *size_str = "Invalid", *crust_str = "Invalid", *cheese_str = "No", *student_str = "No", *fulfillment_str = "Pickup";
    int free_garlic_bread = 0;
    
    // Monetary balance calculations 
    float subtotal = 0.00;
    float base_deal_price = 0.00;
    float dynamic_savings = 0.00;
    float crust_fee = 0.00;
    float cheese_fee = 0.00;
    float temporal_discount = 0.00;
    float student_discount = 0.00;
    float delivery_fee = 0.00;
    float final_total = 0.00;

    printf("========================================\n");
    printf("   WELCOME TO SLICE & DICE PIZZA PALACE \n");
    printf("========================================\n");

    // 1. Input and Validate Pizza Size
    printf("Select pizza size (1.Small, 2.Medium, 3.Large): ");
    scanf("%d", &size_choice);
    
    if (size_choice == 1) {
        size_str = "Small";
        printf("Small size selected.\n");
    } else if (size_choice == 2) {
        size_str = "Medium";
        printf("Medium size selected.\n");
    } else if (size_choice == 3) {
        size_str = "Large";
        printf("Large size selected.\n");
    } else {
        printf("Invalid size.\n");
        return 0; // Terminate execution program branch per prompt mandate
    }

    // 2. Input Quantity and Apply Tier Matrix 
    printf("How many pizzas (1-3): ");
    scanf("%d", &pizza_count);
    
    if (pizza_count < 1 || pizza_count > 3) {
        printf("Invalid quantity restriction. Exiting.\n");
        return 0;
    }

    // Core rule validation logic matching multi-pizza tiers
    if (pizza_count == 1) {
        base_deal_price = 8.00;
        printf("1 pizza: $8.00\n");
    } else if (pizza_count == 2) {
        base_deal_price = 15.00;
        dynamic_savings = (8.00 * 2) - 15.00; // Calculated vs absolute flat standard 
        printf("2 pizzas: $15.00 (Save $%.2f!)\n", dynamic_savings);
    } else if (pizza_count == 3) {
        base_deal_price = 21.00;
        dynamic_savings = (8.00 * 3) - 21.00;
        printf("3 pizzas: $21.00 (Save $%.2f!)\n", dynamic_savings);
    }

    // 3. Crust Customization Request
    printf("Select crust (1.Regular, 2.Thin, 3.Stuffed): ");
    scanf("%d", &crust_choice);
    
    if (crust_choice == 1) {
        crust_str = "Regular";
        crust_fee = 0.00;
    } else if (crust_choice == 2) {
        crust_str = "Thin";
        crust_fee = 1.00;
        printf("Thin crust selected (+$1.00)\n");
    } else if (crust_choice == 3) {
        crust_str = "Stuffed";
        crust_fee = 2.00;
        printf("Stuffed crust selected (+$2.00)\n");
    } else {
        printf("Invalid crust. Defaulting to Regular.\n");
        crust_str = "Regular";
        crust_fee = 0.00;
    }

    // Extra Cheese Customization Request
    printf("Extra cheese (Y/N): ");
    scanf(" %c", &cheese_choice);
    
    if (cheese_choice == 'Y' || cheese_choice == 'y') {
        cheese_str = "Yes";
        cheese_fee = 1.50;
        printf("Extra cheese added (+$1.50)\n");
    }

    // Set initial subtotal context parameters prior to temporal discounts
    subtotal = base_deal_price + crust_fee + cheese_fee;

    // 4. Temporal discount evaluations
    printf("Enter current hour (0-23): ");
    scanf("%d", &current_hour);
    
    if (current_hour >= 11 && current_hour <= 14) {
        temporal_discount = subtotal * 0.10;
        printf("Happy Hour 10%% discount applied! (-$%.2f)\n", temporal_discount);
    }

    // 5. Student Identification Deductions
    printf("Student ID (Y/N): ");
    scanf(" %c", &student_choice);
    
    if (student_choice == 'Y' || student_choice == 'y') {
        student_str = "Yes";
        student_discount = 2.00;
        printf("Student discount applied! (-$2.00)\n");
    }

    // 6. Bonus Reward Compound Validations
    if (pizza_count == 3 && crust_choice == 3) {
        free_garlic_bread = 1;
        printf("You get free garlic bread!\n");
    }

    // 7. Fulfillment Logistics
    printf("Fulfillment (1.Pickup, 2.Delivery): ");
    scanf("%d", &fulfillment_choice);
    
    if (fulfillment_choice == 2) {
        fulfillment_str = "Delivery";
        delivery_fee = 3.00;
        printf("Delivery selected (+$3.00)\n");
    }

    // 8. Balanced Cumulative Surcharges & Negative Balance Floor Protection Safeguard
    final_total = subtotal - temporal_discount - student_discount + delivery_fee;
    if (final_total < 0.00) {
        final_total = 0.00;
    }

    // Print Beautifully Formatted Structured Final Invoice Receipt Output Layout
    printf("========================================\n");
    printf("            ORDER RECEIPT               \n");
    printf("========================================\n");
    printf("Pizza Size:     %s\n", size_str);
    printf("Quantity:       %d pizza(s)\n", pizza_count);
    printf("Crust Type:     %s\n", crust_str);
    printf("Extra Cheese:   %s\n", cheese_str);
    printf("Student ID:     %s\n", student_str);
    printf("Fulfillment:    %s\n", fulfillment_str);
    printf("----------------------------------------\n");
    
    if (free_garlic_bread) {
        printf("BONUS: Free Garlic Bread included!\n");
    }
    
    printf("========================================\n");
    printf("FINAL TOTAL:    $%.2f\n", final_total);
    printf("========================================\n");
    printf("   Thank you for dining with us!\n");
    printf("   Have a slice-tastic day! \n");
    printf("========================================\n");

    return 0;
}
