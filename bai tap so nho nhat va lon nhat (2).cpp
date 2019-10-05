#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap 3 so can kiem tra:");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a>c&&a>b) printf("Max=%d\n",a);
	else if(b>c) printf("Max=%d\n", b);
	else printf("Max=%d\n", c);
	if(a<b&&a<c) printf("Min=%d\n",a);
	else if(b<c) printf("Min=%d\n",b);
	else printf("Min=%d\n", c);
	
	
}
