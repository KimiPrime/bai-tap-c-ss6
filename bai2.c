#include <stdio.h>

int main() {
    int numbers[5];    
    int even_count = 0; 
    int odd_count = 0; 
	int i; 

    printf("Nhap vao 5 so nguyen:\n");
    for (i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("So luong so chan: %d\n", even_count);
    printf("So luong so le: %d\n", odd_count);

    return 0;
}
