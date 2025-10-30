#include<stdio.h>
int main(){
	int n ;
	int reveN = 0;
	int remN;
	int orgN; 
		printf("Nhap N:");
		scanf("%d",&n);
	while(n<=0){
		printf("Vui long nhap lai");
		break;
	}
	 orgN = n;
	while(n!=0){
		remN  = n%10;
		reveN = reveN*10+remN;
		n/=10;
	}
	if(remN = reveN){
		printf("So %d nay la so doi xung",orgN);
	}else{
		printf("So %d nay khong la so doi xung",orgN);
	}
	}

