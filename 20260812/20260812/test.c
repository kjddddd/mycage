#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b))
	{if (( a%4==0 && a%100 !=0)||(a%400==0))
		switch (b)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30");
			break;
		case 2:
			printf("29");
			break;
		}
	else
		switch (b)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30");
			break;
		case 2:
			printf("28");
			break;



		}

	}

	return 0;
}