/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main() {
    int choice, qty;
    float price, total = 0, payment, change;
    char again;

    do {
        printf("\nWhat do you want to purchase?\n");
        printf("[1] Vegetable (P54.5/kilo)\n");
        printf("[2] Fruits (P120/kilo - fixed)\n");
        printf("[3] Milk (P90/pack)\n");
        printf("[4] Soap (P29.45/bar)\n");
        printf("[5] Shampoo and Conditioner (P140/bottle)\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch(choice) {
            case 1: price = 54.5; break;
            case 2: price = 120; break;   
            case 3: price = 90; break;
            case 4: price = 29.45; break;
            case 5: price = 140; break;
            default: 
                printf("Invalid choice!\n");
                price = 0;
        }

        total += price * qty;

        printf("Do you want to purchase again (Y/N)? ");
        scanf(" %c", &again);

    } while(again == 'Y' || again == 'y');

    printf("\nTotal purchase: P%.2f\n", total);

    printf("Enter your payment: ");
    scanf("%f", &payment);

    change = payment - total;
    printf("Your change: P%.2f\n", change);

  
    return 0;
}
