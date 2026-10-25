/*
Question 6: 
To drive traffic during the slow lunch-hour dip, the shop offers a special 10% 
discount between 11:00 AM and 2:00 PM (11 to 14 in 24-hour time). Write a program 
that reads the current total bill and the current time of day as an integer hour (0-23). 
Using logical comparisons, check if the hour falls within the promo window [11, 14] 
inclusive. If it is, deduct 10% from the total and print the discounted total. 
If not, print the original bill with no discounts.
*/
#include <stdio.h>

int main() {
    float total_bill;
    int current_hour;

    printf("Enter the current total bill: $");
    scanf("%f", &total_bill);

    printf("Enter current hour (0-23): ");
    scanf("%d", &current_hour);

    if (current_hour >= 11 && current_hour <= 14) {
        float discount = total_bill * 0.10;
        total_bill -= discount;
        printf("Happy Hour 10%% discount applied! (-$%.2f)\n", discount);
    } else {
        printf("No temporal discounts applicable at this hour.\n");
    }

    printf("Final total: $%.2f\n", total_bill);

    return 0;
}
