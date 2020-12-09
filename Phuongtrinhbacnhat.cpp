#include <stdio.h>
#include <conio.h>
#include <math.h> 
main()
{
float  a, b, x;
	printf("Nhap a va b : ");
	scanf("%d%d",&a,&b);
	if(a!=0)
	{ x=-b/a;
	printf("Phuong trinh co nghiem x= %f",x); 
    }
else if(b!=0) printf("Phuong trinh vo nghiem\n");
else printf("Phuong trinh vo so nghiem");
getch();
}
     
