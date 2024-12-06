/*Program to check odd or even using bitwise operators*/
#include <stdio.h>
int main(){
    int num; // Declare a variable to store the number
    printf("Please, enter a number: "); // Ask the user to enter a number
    scanf("%d", &num); // Read the number from the user)

    if (num & 1 == 1 )
        printf("%d is an odd number\n", num);
    else
        printf("%d is an even number\n", num);
    return 0; // Return 0 to the operating system
}