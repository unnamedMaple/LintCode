#include "Header.h"
void rotateString(string &str, int offset) {
	// write your code here
	int len = str.length();
	if (len <= 1){
		return;
	}
	offset = offset % len;
	char tmp = ' ';
	for (int i = 0; i < offset; i++){
		tmp = str[len - 1];
		str.pop_back();
		str = tmp + str;
	}
	
}