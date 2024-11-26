#include <stdio.h>

int main(){
	int number, i = 1;
		printf(" hay nhap 1 so nguyen bat ki ");
		scanf("%d", &number);
	if(number){
		printf(" cac boi chung cua %d la ",number);
		number = abs(number);
		while(i <= number){
		if ( number % i== 0){
			printf(" %d ",i);
		}
		i++;
	}
	return 0;
	}
	printf("so 0 khong co uoc");
	return 0;
}
	
