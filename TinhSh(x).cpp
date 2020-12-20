#include <stdio.h>
#include <conio.h>
 int main()
{
	int i,n;
	float x,M,S,T,N;
	printf("\nNhap x: ");
	scanf("%f",&x);
	do
	{
		printf("\nNhap n(n>=1): ");
		scanf("%d",&n);
		if(n<1)
		{ 
		    printf("\nN phai >=1.Nhap lai!");
		}
	}
	while(n<1);
	N=1;
	i=1;
	while(i<=n)
	{
	    T= pow(x ,((2 * i) + 1)); 
		M= (i*2 +1);
		N= N*M*(M-1);
		S= x+ T/N;
		i++;
	}
	printf("\nTong la %f= ",S);
	getch();
	return 0;
}
		  	   
