#include<stdio.h>
int main()
{
	int n;
	int n1=0,n2=1,n3;
	printf("Nhap n:\n");
	scanf("%d", &n);
	printf ("Cac so fibonacci trong khoang 1 den 100 :");
	for (int i=1;i<=n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		if (1<=n3 && n3<100) printf ("%d\t",n3);
		
	}
	return 0;
}
