
#include "Header.h"
string reverseWords(string &s) {
	// write your code here

	if (s.length() <= 0){
		return "";
	}

	int flag = 0;

	vector<string>myWords;
	for (int i = 0; i < s.length(); ){
		if (s[i] == ' '){
			i++;
			continue;
		}
		
		string word;
		while (s[i] != ' ' && i < s.length()){
			flag = 1;
			word += s[i];
			i++;
		}
		myWords.push_back(word);
		
	}


	if (flag == 0){
		return "";
	}

	string revStr;
	for (int i = myWords.size()-1; i > 0; i--){
		revStr += myWords[i] + " ";
	}
	revStr += myWords[0];
	return revStr;


}