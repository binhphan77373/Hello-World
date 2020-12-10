#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159
int main()
{
	float V, R, S;
	printf("Nhap ban kinh R = ");
	scanf("%f", &R);
	V = (4 * PI * R * R * R)/3;
	S = 4*PI*R*R;
	printf("The tich = %4.2f\n", V);
	printf("Dien tich = %4.2f\n", S);
	getch();
}
