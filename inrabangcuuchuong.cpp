#include <stdio.h>
#include <conio.h>
int main()
{
	printf("________________Bang cuu chuong________________\n\n");
	int i, j, k;
	for(i=1;i<=10;i++)
	{
		for( j=2;j<=10;j++ )
		printf("%2d x%d=%2d",j,i,j*i);
		printf("\n\n");
    }
    getch();
}
    
