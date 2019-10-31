#include<stdio.h>
int main()
{
	float tienvon,tienlai;
	int sonam;
	printf ("tien von :");
	scanf ("%f",&tienvon);
	printf ("\ntien lai :");
	scanf ("%f",&tienlai);
	printf ("\nso nam :");
	scanf ("%d",&sonam);
	for (int i=1;i<=sonam;i++)
	{
		float lai=(tienvon*tienlai)/100;
		tienvon+=lai;
		printf ("\nSo nam:%d\t\ntien lai:%f \t\ntongtien:%f",i+1,lai,tienvon);
	}
	
}
