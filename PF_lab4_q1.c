/*Question 1: 
The cashier needs to select the correct base size of pizza for the client. 
Write a C program segment that asks the cashier to select a size option 
(1 for small, 2 for Medium, 3 for Large). Store their input as an integer. 
Use a decision-making structure to verify if the input is valid (1, 2, or 3).
 If the input is valid, print the size they chose (e.g., 'Medium size selected'). 
 If they enter an incorrect option, print the error warning: 'Invalid size.' and
  skip any further calculations.
*/
#include <stdio.h>


int main(){


    int var;
    printf("\n 1. Small");
    printf("\n 2. Medium");
    printf("\n 3. Large");
    printf("\n 4. Exit");


    printf("\n Enter your choice: ");

    scanf("%d",&var);
    switch(var){
        case 1: printf("\n Small size selected");
                break;
        case 2: printf("\n Medium size selected");
                break;
        case 3: printf("\n Large size selected ");
                break;
        case 4: printf("\n Exited");
                break;
        default: printf("\n Invalid Choice");
                break;

    }
return 0;
}