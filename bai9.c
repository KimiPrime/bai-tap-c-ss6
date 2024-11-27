#include <stdio.h>

int main() {
    int number;
	int digit;
	int sum;
	int i;

    printf("Cac so Armstrong co 3 chu so la:\n");
    for ( i = 100; i <= 999; i++) {
        number = i;
        sum = 0;

        while (number != 0) {
            digit = number % 10;         
            sum += digit * digit * digit; 
            number /= 10;                 
        }

        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
