#include <stdio.h>
#include <conio.h>
main()
{
	float a, b, c, max, min;
	printf("Nhap a,b,c: ");
	scanf("%f%f%f", &a, &b, &c);
	max=a>b&&a>c?a: (b>c?b:c);
	min=a<b&&a<c?a: (b<c?b:c);
	printf("So can tim la : %f", a+b+c-max-min);
	getch();
}
