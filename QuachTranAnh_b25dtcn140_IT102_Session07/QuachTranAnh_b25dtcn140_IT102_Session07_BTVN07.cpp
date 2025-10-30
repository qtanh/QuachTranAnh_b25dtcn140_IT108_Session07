#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int a;
	int b;
	int i;
	int j;
	
	printf("Nhap vao so a: ");
	scanf("%d",&a);
	printf("Nhap vao so b: ");
	scanf("%d",&b);
	printf("Cac so nguyen to chay trong khoang tu %d den %d la: \n",a,b);
	for(i = a; i<=b;i++){
		if (i<2){
			continue;
		}
		int isPrime = 1;
		for(j = 2;j*j<=i;j++){
			if (i%j==0){
				isPrime = 0;
				break;
			}
		}
		if (isPrime==1){
			printf("%d\t",i);
		}
		}
		
	}

