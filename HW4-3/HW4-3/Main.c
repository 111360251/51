#include <stdio.h>
#include <stdlib.h>
int power(int base, int exp)
{
	int x, i;
	if (exp == 1) 		return base;
	else if (exp == 0) return 1;
	else 	  		return(base * power(base, exp - 1));

}
int main()
{
	int b, e;
	printf("--*�s�g���k���*--\n");
	printf("��J���� :");
	scanf_s("%d", &b);
	printf("��J���� :");
	scanf_s("%d", &e);
	if (e == 1)	printf("base^1=%d", power(b, e));
	else		printf("%d^%d=%d", b, e, power(b, e));



	return 0;
}

