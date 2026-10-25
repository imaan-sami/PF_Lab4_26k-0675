/*
Question 7: 
The program asks for the bill total and student ID status. If the customer has 
a student ID, it subtracts $2.00 from the total. After this, it uses a completely 
separate if statement to check if the bill is negative (regardless of whether a 
discount was applied) and adjusts it to $0.00 if needed. This makes the program 
more robust as it protects ALL customers from negative bills, not just students.
*/
#include <stdio.h>

int main() {
    float total_bill;
    char student_id;

    printf("Enter the bill total: $");
    scanf("%f", &total_bill);

    printf("Does the customer have a student ID (Y/N)? ");
    scanf(" %c", &student_id);

    if (student_id == 'Y' || student_id == 'y') {
        total_bill -= 2.00;
        printf("Student discount applied! (-$2.00)\n");
    }

    // Completely separate safety logic to protect against negative values
    if (total_bill < 0.00) {
        total_bill = 0.00;
    }

    printf("Adjusted total bill: $%.2f\n", total_bill);

    return 0;
}
