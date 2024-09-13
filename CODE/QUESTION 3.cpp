#include <stdio.h>

int main() {
    float originalAmount, discount, amountSaved, finalAmount;

    
    printf("Enter the cost of items: ");
    scanf("%f", &originalAmount);

    
    if (originalAmount < 1500) {
        discount = 0.07;
    } else if (originalAmount <= 3000) {
        discount = 0.12; 
    } else if (originalAmount <= 5000) {
        discount = 0.22; 
    } else {
        discount = 0.30; 
    }
    
    amountSaved = originalAmount * discount;
    finalAmount = originalAmount - amountSaved;

    printf("Original amount: Rs. %.2f\n", originalAmount);
    printf("Amount saved: Rs. %.2f\n", amountSaved);
    printf("Amount after discount: Rs. %.2f\n", finalAmount);

    return 0;
}

