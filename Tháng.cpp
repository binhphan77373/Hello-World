#include <stdio.h>
#include <conio.h>
main()
{
	int thang, nam, songay;
	printf("Nhap thang, nam: ");
	scanf("%d%d", &thang, &nam);
	if (thang >= 1 && thang <= 12)
	{
		switch (thang)
		{
		case 1: songay = 31;
		case 3: songay = 31;
		case 5: songay = 31;
		case 7: songay = 31;
		case 8: songay = 31;
		case 10: songay = 31;
		case 12: songay = 31;
		break;
		case 4: songay = 30;
		case 6: songay = 30;
		case 9: songay = 30;
		case 11: songay = 30;
		break;
		case 2:
		if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) songay = 29;
		else songay = 28;
		}
		printf(" Tháng %d có %d ngày \n", thang, nam, songay);
	}
	else printf(" Thang nam khong hop le! \n");
}

