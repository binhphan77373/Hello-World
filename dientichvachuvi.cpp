#include <conio.h>
#include <stdio.h>
#include <math.h>
int main()
{
	float R, S, L; /*khai bao cac bien*/
	printf("nhap ban kinh R = "); /*Thong bao nhap ban kinh R*/
	scanf("%f",&R); /*Nhap ban kinh R tu ban phim*/
	S = R*R*M_PI; /*M_PI laf so PI*/
	L = 2*M_PI*R;
	printf("Dien tich hinh tron = %0.3f\n", S);
	printf("Chu vi hinh tron = %0.3f\n", L);
	getch();
}
