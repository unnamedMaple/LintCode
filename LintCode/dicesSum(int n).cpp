#include "Header.h"


vector<pair<int, double>> dicesSum(int n) {
	// Write your code here

	vector<pair<int, double>>ret;
	if (n == 0){
		pair<int, double>p;
		ret.push_back(p);
		return ret;

	}
	if (n == 1){
		for (int i = 1; i <= 6; i++){
			pair<int, double>p;
			p = make_pair(i, 1.0 / 6);
			ret.push_back(p);
		}
		return ret;
	}


	vector<pair<int, double>> subret = dicesSum(n - 1);
	for (int i = 0; i < subret.size(); i++){
		double pre_sumP = 0;
		for (int j = 0; j < 6; j++){
			int pre = i - j;
			if (pre < 0){
				break;
			}
			pre_sumP += subret[pre].second;
		}
		pair<int, double>newP;
		newP = make_pair(subret[i].first + 1, pre_sumP*1.0 / 6);
		ret.push_back(newP);
	}
	for (int i = 2; i <= 6; i++){
		double pre_sumP = 0;
		for (int j = i; j <= 6; j++){
			int pre = j - i;
			pre_sumP += subret[subret.size()-1-pre].second;

		}
		pair<int, double>newP;
		newP = make_pair(subret[subret.size() - 1].first + i, pre_sumP*1.0 / 6);
		ret.push_back(newP);
	}
	return ret;
}