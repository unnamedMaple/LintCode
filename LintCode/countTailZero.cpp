
#include <iostream>
int countTailZero(int n)
{
	int num = 0;
	while (n != 0)
	{
		num += n / 5;
		n /= 5;

	}
	return num;
}


