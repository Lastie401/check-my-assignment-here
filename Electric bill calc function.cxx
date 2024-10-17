//electric bill calc function
/*
Author: paul mungai Njoroge
ADM    :CT1O1/G/23420/24
*/
#include <stdio.h>
float calculateTotalBill(int units) {
    float charges_per_unit, total_amount;

    // Determine the charges per unit based on units consumed
    if (units <= 199) {
        charges_per_unit = 1.20;
    } else if (units >= 200 && units < 400) {
        charges_per_unit = 1.50;
    } else if (units >= 400 && units < 600) {
        charges_per_unit = 1.80;
    } else {
        charges_per_unit = 2.00;
    }

    // total amount
    total_amount = units * charges_per_unit;
    if (total_amount > 400) {
        total_amount += total_amount * 0.15;
    }
    if (total_amount < 100) {
        total_amount = 100;
    }
    return total_amount;
}

// input
void Output(int customer_id, char customer_name[], int units_consumed, float total_amount) {
    printf("Customer ID:%d\n", customer_id);
    printf("Customer Name:%s\n", customer_name);
    printf("Units Consumed:%d\n", units_consumed);
    printf("Total Amount to Pay : Kshs. %.4f\n", total_amount);
}

int main() {
    int customer_id, units_consumed;
    char customer_name[20];
    float total_amount_to_pay;

    //user input
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);

    printf("Enter Customer Name: ");
    scanf(" %s", customer_name); 

    printf("Enter Units Consumed: ");
    scanf("%d", &units_consumed);

    // Calculate the total amount to pay
    total_amount_to_pay = calculateTotalBill(units_consumed);

    // output
    Output(customer_id, customer_name, units_consumed, total_amount_to_pay);

    return 0;
}
