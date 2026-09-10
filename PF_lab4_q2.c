/*Question 2:
A small-sized pizza has a base price of $8. The shop owner wants to make sure cashiers are
always advising clients about deals. Write a program that prompts the cashier for the number
of pizzas the customer wants. If the customer is buying more than 1 pizza, display the
promotional reminder on the screen: &#39;Check our multi-pizza deals.&#39; Otherwise, calculate the
total price directly at $8 per pizza, and output: &#39;Your total is $8.&#39;*/
#include <stdio.h>
int main(){

    int total;
    int var;
    printf("\n Enter number of pizza you want: ");
    scanf("%d",&var);

    if (var>1)
    {
        printf("Check our multi-pizza deals.");
    }
    else
    {
        
        printf("Total cost is $8");

    }


return 0;
}