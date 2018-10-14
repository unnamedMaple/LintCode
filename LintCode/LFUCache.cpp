#include "Header.h"


class LFUCache {
public:

	class unit{
	public :int key;
		int value;
		int cont;
		int time;
	};
	int size;
	vector<unit>myCache;
	int num;
	int time;
	bool static cmp(unit a, unit b){

		if (a.cont == b.cont){
			return a.time > b.time;
		}


		return a.cont > b.cont;
	}


	/*
	void switchUnit(unit a, unit b){
		int tmp = a.cont;
		a.cont = b.cont;
		b.cont = tmp;

		tmp = a.key;
		a.key = b.key;
		b.key = tmp;
		
		tmp = a.value;
		a.value = b.value;
		b.value = tmp;



	}
	
	void sortCache(int index,bool back){
		if (back == false){
			for (int i = index - 1; i >= 0; i--){
				if (myCache[i].cont < myCache[index].cont){
					switchUnit(myCache[i], myCache[index]);
					index = i;
				}
				else{
					break;
				}

			}
		}
		else{

		}
	}
	*/

	/*
	* @param capacity: An integer
	*/LFUCache(int capacity) {
	// do intialization if necessary
		
		size = capacity;
		num = 0;
		time = 0;
	}

	  /*
	  * @param key: An integer
	  * @param value: An integer
	  * @return: nothing
	  */
	  void set(int key, int value) {
		  // write your code here
		  
		  if (num < size){
			  
			  unit newU;
			  newU.key = key;
			  newU.value = value;
			  newU.cont = 1;
			  newU.time = time;
			  myCache.push_back(newU);
			  sort(myCache.begin(), myCache.end(), cmp);
			  //myCache.insert(myCache.begin(),newU);
			  num++;
			  return;
		  }

		  myCache[num - 1].key = key;
		  myCache[num - 1].value = value;
		  myCache[num - 1].cont = 1;
		  myCache[num - 1].time = time;
		  time++;
	  }

	  /*
	  * @param key: An integer
	  * @return: An integer
	  */
	  int get(int key) {
		  // write your code here

		  for (int i = 0; i < num; i++){
			  if (myCache[i].key == key){
				  int value = myCache[i].value;

				  myCache[i].cont++;
				  sort(myCache.begin(), myCache.end(), cmp);
				  //sortCache(i,false);
				  return value;
			  }
		  }


		  return -1;

	  }
};