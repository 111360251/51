#include <stdio.h>
#include <stdlib.h>
unsigned long long int f(unsigned int a)
{
	if (a == 1 || a == 2) return 1;
	else return f(a - 1) + f(a - 2);
}
int main()
{
	int x;
	printf("--*The Fibonacci series*--\n");
	printf("�п�J�A�n���ĴX�ӫD�i�ǫ���:");
	scanf_s("%d", &x);
	printf("%llu", f(x));


	return 0;
}

