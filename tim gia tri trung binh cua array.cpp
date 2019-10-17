#include<stdio.h>
	int main(){
		int ary[10];
		int S=0;
		int dem=0;
		for(int i=0; i<10; ++i)
		{
			printf("Nhap ary[%d]", i);
			scanf("%d", &ary[i]);
		}
		float tb;
		for(int i=0;i<10; ++i)
		{
			int S=S+ary[i];
			 dem++;	
			 tb=(float)S/dem;
		}
	
		printf("tong gia tri cac so:%f", tb);
		
		
		
		
		return 0;
	}
