#include <stdio.h>

int main() {
    int balance = 1000, choice, amount;

    printf("1. Check Balance\n2. Withdraw\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Balance: %d\n", balance);
    }
    else if (choice == 2) {
        printf("Enter amount: ");
        scanf("%d", &amount);

        if (amount <= balance) {
            balance -= amount;
            printf("Withdrawal successful\nRemaining Balance: %d\n", balance);
        } else {
            printf("Insufficient Balance\n");
        }
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}
