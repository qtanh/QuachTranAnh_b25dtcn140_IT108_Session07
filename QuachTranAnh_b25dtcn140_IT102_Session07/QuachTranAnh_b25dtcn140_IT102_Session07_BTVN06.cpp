#include<stdio.h>
int main(){
	int n;
	int i;
	int rn=0;
	printf("Nhap vao so N: ");
	scanf("%d",&n);
	do{
		if(n>0){
			break;
		}
			printf("Nhap lai");
			
		
	}while(1);
	while(n%10!=0){
		i = n%10;
		n = n/=10;
		rn = rn*10+i;
	}
	printf("So dao nguoc la: %d",rn);
}
