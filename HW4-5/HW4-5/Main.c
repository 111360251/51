#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void x(int n, char A, char B, char C) {
	if (n == 1) printf("�L�l�q%c����%c\n", A, C);
	else
	{
		x(n - 1, A, C, B);
		printf("�L�l�q%c����%c \n", A, C);
		x(n - 1, B, A, C);

	}
}
int main() {
	int n;
	printf("�п�J���X�ӽL�l�ݭn����n:");
	scanf_s("%d", &n);
	x(n, 'A', 'B', 'C');
	printf("�`�@�n��%.0f�بB�J", (pow(2, n) - 1));
	return 0;
}

