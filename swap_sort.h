#pragma once
#include<vector>
static inline void bubble_sort(std::vector<int> &v1) {
	
	for (int i = 0; i < v1.size(); i++)
	{
		for (int j = 1; j < v1.size() - i; j++)
		{
			if (v1[j] < v1[j - 1])
			{
				int temp = v1[j];
				v1[j] = v1[j - 1];
				v1[j - 1] = temp;
			}
		}
	}
	
}

//partition should return low position.
static inline int partition(std::vector<int>& v, int low, int high)
{
	int pivote = v[low];
	while (low < high)
	{
		while (low < high && v[high] >= pivote) --high;
		v[low] = v[high];
		while (low < high && v[low] <= pivote) ++low;
		v[high] = v[low];

	}
	//done,now partition.
	v[low] = pivote;
	return low;
}

static inline void quick_sort(std::vector<int>& v1, int low, int high)
{
	if (low < high) {
		int pivote = partition(v1, low, high);
		quick_sort(v1, low, pivote-1);
		quick_sort(v1, pivote + 1, high);
	}
}

