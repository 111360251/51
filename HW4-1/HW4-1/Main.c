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

	printf("�п�J�@�Ӥj�g�r��OR�p�g�r��:\n");
	scanf_s("%c", &x);
	if (x < 91)
	{
		printf("�A��J���j�g�r����:%c\n\n", x);
		printf("���ܬ��p�g��%c", p(x));
	}
	else
	{
		printf("�A��J���p�g�r����:%c\n\n", x);
		printf("���ܬ��j�g��%c", h(x));
	}

	return 0;
}