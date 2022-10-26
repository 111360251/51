#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void x(int n, char A, char B, char C) {
	if (n == 1) printf("盤子從%c移到%c\n", A, C);
	else
	{
		x(n - 1, A, C, B);
		printf("盤子從%c移到%c \n", A, C);
		x(n - 1, B, A, C);

	}
}
int main() {
	int n;
	printf("請輸入有幾個盤子需要移動n:");
	scanf_s("%d", &n);
	x(n, 'A', 'B', 'C');
	printf("總共要做%.0f種步驟", (pow(2, n) - 1));
	return 0;
}

