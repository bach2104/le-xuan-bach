#include<stdio.h>
	int main(){
		int ary[20];
		for ( int i=0; i<20; i++){
			printf("Nhap ary[%d]", i);
			scanf("%d", &ary[i]);
		}
		for( int i=0; i<20; i++){
			if(ary[i]%2==1){
			printf("cac so le la:%d\n", ary[i]);
			}
			
		}
		
	
		
		
		
		
		return 0;
	}
