#include <stdio.h>

int main() {
    int number;
	int digit;
	int sum;

    printf("Cac so Armstrong co 3 chu so la:\n");
    for (int i = 100; i <= 999; i++) {
        number = i;
        sum = 0;

        while (number != 0) {
            digit = number % 10;         
            sum += digit * digit * digit; 
            number /= 10;                 
        }

        // Kiem tra neu tong bang chinh so do
        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
