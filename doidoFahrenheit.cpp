#include <stdio.h>
#include <conio.h>
int main()
{
	int F;
	float C;
	for(F=0;F<=300;F+=20)
	{
		C=5*(F-32)/9.0;
		printf("\n%-5d F <--> %.2f", F, C);
	}
	getch();
}

