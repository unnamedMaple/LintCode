int digitCounts(int k, int n) {
	// write your code here
	int sum = 0;
	int last = n / 10;


	if (k <= n % 10){
		last += 1;
	}
	sum += last;

	int tmp = 10;
	while (n - tmp >= 0)
	{
		sum += (n - tmp) / (tmp * 10) * tmp;

		if (k == n / tmp % 10)
		{
			sum += n % tmp + 1;
		}
		else if (n / tmp % 10 == 0 || (k != 0 && k < n / tmp % 10))
		{
			sum += tmp;
		}


		tmp *= 10;
	}
	return sum;
}
