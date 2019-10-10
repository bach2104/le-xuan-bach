#include<stdio.h>
	int main(){
		int x,y,t;
		printf("Nhap so x :\n");
		printf("Nhap so y :\n");
		scanf("%d%d", &x, &y);
		t=x;
		x=y;
		y=t;
		printf("Gia tri sau khi bien doi cua x va y la:%d%d" ,x,y);
		
		
		
		
		return 0;
		
		}
