#include "Header.h"
string minWindow(string &source, string &target) {
	// write your code here


	map<char, int>tarMap;
	for (int i = 0; i < target.size(); i++){
		if (tarMap.find(target[i]) == tarMap.end()){
			tarMap[target[i]] = 1;
		}
		else{
			tarMap[target[i]]++;
		}
	}


	int pre[3] = { -1 };

	int cur[3] = { -1 };

	map<char, int> curMap = tarMap;
	for (int i = 0; i < source.size(); i++){
		if (curMap.find(source[i]) != curMap.end()){
			if (curMap[source[i]] > 0){
				curMap[source[i]]--;
			}
		}


	}
	return "";
}