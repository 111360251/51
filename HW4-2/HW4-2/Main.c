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
	printf("找出兩個整數的 [L C M]:\n");
	printf("請輸入兩個整數:\n");
	scanf_s("%d%d", &m, &n);
	printf("整數 %d and 整數 %d 的 LCM = %d\n", m, n, LCM(m, n));
	return 0;
}

