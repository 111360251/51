#include <stdio.h>
#include <stdlib.h>
char p(int y)
{
	int b;
	b = y + 32;
	return b;

}
char h(int y)
{
	int b;
	b = y - 32;
	return b;

}

int main()
{

	char x;

	printf("請輸入一個大寫字母OR小寫字母:\n");
	scanf_s("%c", &x);
	if (x < 91)
	{
		printf("你輸入的大寫字母為:%c\n\n", x);
		printf("轉變為小寫的%c", p(x));
	}
	else
	{
		printf("你輸入的小寫字母為:%c\n\n", x);
		printf("轉變為大寫的%c", h(x));
	}

	return 0;
}