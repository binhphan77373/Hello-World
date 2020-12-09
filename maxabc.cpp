#include <stdio.h>
#include <conio.h>
main()
{
	int a, b, c, max;
	printf("Nhap a,b,c =");
	scanf("%d%d%d",&a,&b,&c);
	max = a;
	if(max < b) max = b;
	if(max <c) max = c;
	printf("\n Max = %d,max");
	getch(); 
 } 
