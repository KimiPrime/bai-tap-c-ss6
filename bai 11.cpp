#include <stdio.h>

int main(){
	int n;
	int count=0;
	int number=0;
	int prime=2;
	printf(" moi ban nhap so nguyen to can in ra :");
	scanf("%d",&n);
	while(number<n){
		count=0;
		for(int i=1; i <= prime; i++ ){
			if( prime%1 == 0){
				count++;
			}
		}
		if(count ==2){
			printf("\n so nguyen to %d : ", prime);
			number++;
		}
	}
return 0;
}
