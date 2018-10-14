
#include "Header.h"
bool isInterleave(string &s1, string &s2, string &s3) {
	// write your code here
	if (s1.length() + s2.length() != s3.length()){
		return false;
	}
	if (s1.empty() && s2.empty() && s3.empty()){
		return true;
	}
	if (s3[0] == s1[0] && s3[0] == s2[0]){
		return (isInterleave(s1.substr(1), s2, s3.substr(1)) || isInterleave(s1,s2.substr(1),s3.substr(1)));
	}
	if (s3[0] == s1[0]){
		return isInterleave(s1.substr(1), s2, s3.substr(1));
	}
	if (s3[0] == s2[0]){
		
		return isInterleave(s1, s2.substr(1), s3.substr(1));
	}

	return false;
}