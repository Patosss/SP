#include <stdio.h>
#include <stdlib.h>

// Function to find the parity complement of a given number
int parcom(int a) {
    if (a == 0) {
        return 0;
    }
    int digit = a % 10;
    if (digit % 2 == 0) {
        digit++;
    } else {
        digit--;
    }
    return parcom(a/10) * 10 + digit;
}

int main() {
    int numbers[100], count = 0;
    while (1) {
        if (scanf("%d", &numbers[count]) != 1) {
            break;
        }
        count++;
    }

    // Find the parity complements of all numbers
    for (int i = 0; i < count; i++) {
        numbers[i] = parcom(numbers[i]);
    }

    // Sort the numbers
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // Print the smallest 5 numbers (or all numbers if less than 5 were entered)
    int toPrint = count < 5 ? count : 5;
    
    for (int i = 0; i < toPrint; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
