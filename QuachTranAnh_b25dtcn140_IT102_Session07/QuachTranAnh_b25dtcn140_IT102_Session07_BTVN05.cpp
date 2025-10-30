#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("Nhap vao so de kiem tra: ");
	scanf("%d",&a);
	int orgA = a;
	int remA;
	int sumA;
	int count = 0;
	while(a!=0){
		a/=10;
		count++;
	}
	
	while(a!=0){
		remA = a%10;
		sumA +=(int)round(pow(remA,count));
		a/=10;
	}
	if (sumA == a) {
        printf("So %d la So Armstrong.\n", orgA);
    } else {
        printf("So %d khong la So Armstrong.\n", orgA);
    }
}
