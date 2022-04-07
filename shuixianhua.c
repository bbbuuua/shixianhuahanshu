
#include<stdio.h>
int is(int number)
{
	int a, b, c;
	a = number % 10;
	b = number / 10 % 10;
	c = number / 100 % 10;
	if (number == a*a*a + b*b*b + c*c*c)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int n, i;
	for (n = 100; n < 1000; n++)
	{
		i = is(n);
		if (i)
		{
			printf("%d\n", n);
		}
	}
	return 0;
}
