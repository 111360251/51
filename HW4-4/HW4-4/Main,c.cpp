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
	printf("請輸入你要算到第幾個非波納契數:");
	scanf_s("%d", &x);
	printf("%llu", f(x));


	return 0;
}

