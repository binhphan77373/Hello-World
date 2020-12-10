#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	printf("Nhap vao mot chu cai : ");
	scanf("%c", &ch);
	if(ch>='a'&&ch<='z')
	printf("Chuyen thanh chu cai hoa: %c\n", ch-= 32);
	else if(ch>='A' && ch<='Z')
	printf("Chuyen thanh chu cai thuong: %c\n", ch+= 32);
	getch();
	return 0; 
}
