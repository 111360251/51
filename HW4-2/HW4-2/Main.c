#include <stdio.h>
#include <stdlib.h>
int	 LCM(int x, int y)
{
	int temp, i;
	if (x < y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	for (i = x; i > 0; i++)
		if (i%x == 0 && i%y == 0) break;

	return i;
}
int main()
{
	int m, n;
	printf("��X��Ӿ�ƪ� [L C M]:\n");
	printf("�п�J��Ӿ��:\n");
	scanf_s("%d%d", &m, &n);
	printf("��� %d and ��� %d �� LCM = %d\n", m, n, LCM(m, n));
	return 0;
}

