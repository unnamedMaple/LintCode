
#include "Header.h"
vector<int> nextPermutation(vector<int> &nums) {
	// write your code here

	int size = nums.size();
	for (int i = size - 1; i > 0; --i)
	{
		//�ҵ��ڶ����������һ�����ֵķֽ���
		if (nums[i] > nums[i - 1])
		{
			int val = nums[i - 1];
			int j = size - 1;
			//�ҵ���һ����valֵ��λ��
			for (; j >= i; --j)
			{
				if (nums[j] > val)
					break;
			}
			//����valֵ�͵�һ������val��ֵ
			swap(nums[i - 1], nums[j]);
			int l = i;
			int r = size - 1;
			//������
			while (l < r)
			{
				swap(nums[l], nums[r]);
				l++;
				r--;
			}
			return nums;
		}
	}
	int start = 0;
	int last = size - 1;
	while (start < last)
	{
		swap(nums[start], nums[last]);
		start++;
		last--;
	}
	return nums;
	
}


vector<int> prePermutation(vector<int> &nums)
{
	int size = nums.size();
	for (int i = size - 1; i > 0; --i)
	{
		if (nums[i] < nums[i - 1])
		{
			int val = nums[i - 1];
			int j = size - 1;
			for (; j >= i; --j)
			{
				if (nums[j] < val)
					break;
			}
			swap(nums[i - 1], nums[j]);
			int l = i;
			int r = size - 1;
			while (l < r)
			{
				swap(nums[l], nums[r]);
				l++;
				r--;
			}
			return nums;
		}
	}
	int start = 0;
	int last = size - 1;
	while (start < last)
	{
		swap(nums[start], nums[last]);
		start++;
		last--;
	}
	return nums;
}
