/* This program will allow the user to enter 'n' numbers and then it will display this numbers in the order they were entered.
 * Also, it will display them in inverse order.
 *
 * Author: Cesar Alejandro Arias Perales
 * Date: October 15th, 2018
 * Mail: A01411995@itesm.mx
 *
 */
#include <stdio.h>

int main() {
 // This variable will store the quantity of numbers that the user wants to enter.
    int n;

    printf("How many numbers would you like to enter?");
    scanf("%d", &n);

    // The array's size will be the number entered.
    int numbers[n];

    // This stores the values.
    for(int i = 0; i < n; i++){
        printf("%d:", i+1);
        scanf("%d", &numbers[i]);
    }

    // Prints the entered numbers.
    printf("You entered %d numbers in this order:\n", n);
    for(int i = 0; i < n; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Prints the entered numbers in reverse order.
    printf("And this is the inverse order:\n");
    for(int i = n; i > 0; i--){
        printf("%d ", numbers[i-1]);
    }

    return 0;
}
