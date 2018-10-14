
#include "Header.h"

class Interval{
public:
	int start, end;
	Interval(int start, int end) {
		this->start = start;
		this->end = end;
		
	}
};

vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
	// write your code here
	int i = 0;
	int left = -1;
	if (intervals.size() == 0){
		intervals.push_back(newInterval);
		return intervals;
	}

	for (i = 1; i < intervals.size(); i++){
		if (intervals[i-1].start <= newInterval.start&& intervals[i].start > newInterval.start){
			left = i-1;
			break;
		}
		
	}
	if (left != -1){
		if (newInterval.end >= intervals[left].end &&newInterval.start <= intervals[left].end){
			intervals[left].end = newInterval.end;
			for (int j = left + 1; j < intervals.size(); j++){
				int tmp = left + 1;
				if (intervals[tmp].end <= intervals[left].end){
					//intervals[left].end = intervals[tmp].end;
					intervals.erase(intervals.begin+tmp);
				}
				else if (intervals[tmp].start <= intervals[left].end){
					intervals[left].end = intervals[tmp].end;
					intervals.erase(intervals.begin + tmp);
					return intervals;
				}
			}
			return intervals;
		}
		if (newInterval.start > intervals[left].end &&newInterval.end >= intervals[left+1].start){
			intervals[left + 1].start = newInterval.start;
			if (newInterval.end > intervals[left + 1].end){
				intervals[left + 1].end = newInterval.end;
				left++;
				for (int j = left + 1; j < intervals.size(); j++){
					int tmp = left + 1;
					if (intervals[tmp].end <= intervals[left].end){
						//intervals[left].end = intervals[tmp].end;
						intervals.erase(intervals.begin + tmp);
					}
					else if (intervals[tmp].start <= intervals[left].end){
						intervals[left].end = intervals[tmp].end;
						intervals.erase(intervals.begin + tmp);
						return intervals;
					}

				}		
			}
			return intervals;
		}
		if (newInterval.start > intervals[left].end && newInterval.end < intervals[left + 1].start){
			intervals.insert(intervals.begin() + left, newInterval);
			return intervals;
		}

	}

	

	if (newInterval.end < intervals[intervals.size() - 1].start){
		int tmp = newInterval.end;
		newInterval.end = intervals[intervals.size() - 1].end;
		intervals[intervals.size() - 1].end = tmp;
		tmp = newInterval.start;
		newInterval.start = intervals[intervals.size() - 1].start;
		intervals[intervals.size() - 1].start = tmp;

		intervals.push_back(newInterval);
		return intervals;

	}
	else if (newInterval.start > intervals[intervals.size() - 1].end){
		intervals.push_back(newInterval);
		return intervals;
	}


	if (newInterval.start < intervals[intervals.size() - 1].start){
		intervals[intervals.size() - 1].start = newInterval.start;
	}

	if (newInterval.end > intervals[intervals.size() - 1].end){
		intervals[intervals.size() - 1].end = newInterval.end;
	}

	return intervals;

}