#include<stdio.h>
int main(){
	int m;
	int n;
	int i,j;
	printf("Nhap chieu rong: ");
	scanf("%d",&n);
	printf("Nhap chieu dai: ");
	scanf("%d",&m);
	for(i = 0;i<=n;i++){
		for(j= 0;j<=m;j++){
			printf("*");
		}
		printf("\n");
	}
}
