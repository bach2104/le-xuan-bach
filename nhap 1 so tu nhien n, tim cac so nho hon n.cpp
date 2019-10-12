#include<stdio.h>
	int main(){
		int n;
		printf("Nhap 1 so tu nhien:\n");
		scanf("%d", &n);
		for(int i = 3; i < n; ++i){
			if(i%3==0)
			printf("cac so chia het cho 3 < n la:%d", i);
			}
		
		return 0;
		}
	
