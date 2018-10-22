
#include "Header.h"
int majorityNumber(vector<int> &nums) {
	// write your code here

	int curn;
	int count = 0;
	for (int i = 0; i < nums.size(); i++){
		if (count == 0){
			curn = nums[i];
			count = 1;
		}
		else if (nums[i] != curn){		
			count--;		
		}
		else{
			count++;
		}
		
	}

	return curn;
}

int majorityNumber2(vector<int> &nums){
	int curn_1;
	int curn_2;
	int count_1 = 0;
	int count_2 = 0;
	for (int i = 0; i < nums.size(); i++){
		if (count_1 == 0){
			curn_1 = nums[i];
			count_1++;
		}
		else if (count_2 == 0){
			curn_2 = nums[i];
			count_2++;
		}
		else if (nums[i] == curn_1){
			count_1++;
		}
		else if (nums[i] == curn_2){
			count_2++;
		}
		else if(nums[i] != curn_1 && nums[i] != curn_2){
			count_1--;
			count_2--;
		}
	}
	if (count_1 == 0){
		return curn_2;
	}
	if (count_2 == 0){
		return curn_1;
	}
	count_1 = 0;
	count_2 = 0;
	for (int i = 0; i < nums.size(); i++){
		if (nums[i] == curn_1){
			count_1++;
		}
		if (nums[i] == curn_2){
			count_2++;
		}
	}
	int ret = curn_1;
	if (count_2 > count_1){
		ret = curn_2;
	}
	return ret;
}

void updateMap(map<int, int> &mymap){
	map<int, int>::iterator iter;
	for (iter = mymap.begin(); iter != mymap.end(); ){
		iter->second--;
		if (iter->second == 0){
			mymap.erase(iter++);
		}
		else{
			iter++;
		}
	}
}

int majorityNumber3(vector<int> &nums, int k){
	map<int, int>mymap;
	for (int i = 0; i < nums.size(); i++){
		if (mymap.size() < k){
			if (mymap.find(nums[i]) == mymap.end()){
				mymap[nums[i]] = 1;
			}
			else{
				mymap[nums[i]]++;
			}
		}
		else{
			if (mymap.find(nums[i]) == mymap.end()){
				updateMap(mymap);
			}
			else{
				mymap[nums[i]]++;
			}
		}
	}

	if (mymap.size() == 1){
		return mymap.begin()->first;
	}

	map<int, int>::iterator iter;
	for (iter = mymap.begin(); iter != mymap.end();iter++){
		iter->second = 0;
	}

	for (int i = 0; i < nums.size(); i++){
		if (mymap.find(nums[i]) != mymap.end()){
			mymap[nums[i]]++;
		}
	}

	for (iter = mymap.begin(); iter != mymap.end(); iter++){
		if (iter->second > nums.size()/k){
			return iter->first;
		}
	}
}