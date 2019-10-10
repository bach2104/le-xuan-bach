#include<stdio.h>
	int main(){
		int a,b;
		printf("Nhap vao 2 so:\n");
		scanf("%d%d", &a, &b);
		if (a>b) printf("Max=%d\n", a);
		else if(b>a) printf("Max=%d\n",b);
		else printf("Khong co so nao lon nhat");
		
		return 0;
		
		
	}
