
int min(int a, int b, int c){
	if (a < b && a < c){
		return a;

	}
	else if (b < c){
		return b;
	}
	return c;
}

int nthUglyNumber(int n) {
	// write your code here

	int *Unum = new int[n];
	Unum[0] = 1;
	int *p2 = Unum;
	int *p3 = Unum;
	int *p5 = Unum;
	int i = 1;
	int tmp;
	while (i < n){
		tmp = min(*p2 * 2, *p3 * 3, *p5 * 5);
		
		Unum[i] = tmp;
		i++;
		if (*p2 * 2 <= tmp){
			p2++;
		}
		if (*p3 * 3 <= tmp){
			p3++;
		}
		if (*p5 * 5 <= tmp){
			p5++;
		}

	}
	return Unum[n - 1];
}