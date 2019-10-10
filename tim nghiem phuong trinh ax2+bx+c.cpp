#include<stdio.h>
#include<math.h>
	int main(){
		float a,b,c;
		float dt;
		printf("Nhap 3 so a b c:\n");
		scanf("%f%f%f", &a,&b,&c);
		dt=b*b - 4*a*c;
		if (a==0){
			float x=(float)-c/b; 
			printf("nghiem x = %.2f\n", x);}
		else if (dt<0) printf("phuong trinh vo nghiem");
		else if (dt==0) {
			float x=-b/(2*a);
			printf("nghiem x1 = x2:%f\n", x);
			}
		else if (dt>0) {
			float x1= (-b + sqrt(dt))/2*a;
			float x2= (-b - sqrt(dt))/2*a;
			printf("nghiem x1 =:%.2f, nghiem x2= %.2f\n", x1, x2);
			}
	 
	
	
	
	
	return 0;
	
		}
