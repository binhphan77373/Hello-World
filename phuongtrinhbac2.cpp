#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float a, b, c, x1, x2, delta;
	printf("Nhap a,b,c: ");
	scanf("%f%f%f", &a, &b, &c);
	delta = b*b - 4*a*c;
	if ( delta>0)
	{
		printf("Phuong trinh co hai nghiem phan biet\n");
		x1 = (-b - sqrt(delta))/(2*a);
		x2 = (-b + sqrt(delta))/(2*a);
		printf("Nghiem x1 = %4.2f\n", x1);
		printf("Nghiem x2 = %4.2f\n", x2);
	}
	else if (delta==0) printf("Phuong trinh co nghiem kep la: %4.2f\n", -b/(2*a));
	
	else printf("Phuong trinh vo nghiem.\n");
	getch();
}
