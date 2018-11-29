#include "Header.h"
int atoi(string &str) {
	// write your code here
	int len = str.length();
	if (len <= 0){
		return 0;
	}

	int j = 0;
	for (j = 0; j<len; j++){
		if (str[j] != ' '){
			break;
		}
	}
	char symbol;
	int i = j;
	if (str[j] == '-'){
		symbol = '-';
		i += 1;
	}
	else if (str[j] == '+'){
		symbol = '+';
		i += 1;
	}
	else if ((str[j] <= '9'&&str[j] >= '0')){
		symbol = '+';
	}
	else{
		return 0;
	}
	int  ret = 0;
	long tmp = 0;
	bool point = false;
	bool max = false;
	for (; i < len; i++){

		if (point == true){
			//1.0=0,  1.23=1?
			if (!(str[i] <= '9'&&str[i] >= '0')){
				break;

			}
		}

		else if (str[i] <= '9'&&str[i] >= '0'){
			tmp = tmp * 10 + str[i] - '0';
			if (tmp>2147483647){
				max = true;

			}
		}
		else if (str[i] == '.'){
			point = true;
		}
		else{
			break;
		}



	}

	if (max == true){
		if (symbol == '-'){
			ret = INT_MIN;
		}
		else{
			ret = INT_MAX;
		}
	}
	else{
		if (symbol == '-'){
			int r = tmp;
			ret = -r;
		}
		else{
			ret = tmp;
		}
	}
	return ret;
}
}