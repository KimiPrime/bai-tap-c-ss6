#include <stdio.h>

int main() {
    int year, month, days;

    printf("nhap nam: ");
    scanf("%d", &year);

    do {
        printf("nhap thang (1-12): ");
        scanf("%d", &month);
        if (month < 1 || month > 12) {
            printf("thang khong hop le vui long nhap lai.\n");
        }
    } while (month < 1 || month > 12);

    switch (month) {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29;
            else
                days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
    }

    printf("Thang %d nam %d co %d ngay.\n", month, year, days);

    return 0;
}
