#include <stdio.h>

int main() {
    float units, bill = 0.0;

    
    printf("Enter the number of electricity units: ");
    scanf("%f", &units);

    
    if (units > 210) {
        bill += (units - 210) * 1.60; 
        units = 210;
    }
    if (units > 110) {
        bill += (units - 110) * 1.30; 
        units = 110;
    }
    if (units > 30) {
        bill += (units - 30) * 0.85; 
        units = 30;
    }
    bill += units * 0.60; 

    
    bill *= 1.15;

    printf("Total electricity bill: Rs. %.2f\n", bill);

    return 0;
}

