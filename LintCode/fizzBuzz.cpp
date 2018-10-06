#include "Header.h"
vector<string> fizzBuzz(int n) {
	// write your code here
	/*
	int i = n / 3;
	vector<string> ret;
	string tmp;
	for (i = 0; i <= n / 15; i++){
		
		for (int j = 15 * i + 1; j<n&&j < 15 * i + 15; ){
			for (int k = j; k < n&&k < j + 2;k++){
				tmp = to_string(k);
				if (k % 5 == 0){
					tmp = "buzz";
				}
				ret.push_back(tmp);
				
		
			}
			j += 3;
			if (j-1 <= n){
				ret.push_back("fizz");
			}
			
		}
		if (n >= 15){
			ret.push_back("fizz buzz");
		}
		
	}
	*/
	vector<string> ret;
	for (int i = 1; i <= n; i++){
		string tmp = to_string(i);
		if (i % 15 == 0){
			tmp = "fizz buzz";
			
		}
		else if (i % 5 == 0){
			tmp == "buzz";
		}
		else if (i % 3 == 0){
			tmp = "fizz";
		}
		ret.push_back(tmp);

	}
	return ret;
}