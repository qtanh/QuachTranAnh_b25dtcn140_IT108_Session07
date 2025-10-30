#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int a;
	int b;
	int n;
	int i;
	int j;
	printf("Nhap vao gia tri cua n: ");
	scanf("%d",&n);
	for(a = 0;pow(a,3)<=n;a++){
		for(b= 0; pow(b,3)<=n;b++){
			if(pow(a,3)+pow(b,3)==n){
				printf("(%d,%d)",a,b);
			}
		}
	}
}
