#pragma once
#include <iostream>
namespace os {
	inline void insert_sort(int a[],int length)
	{	//插入算法的本质，有点类似于冒泡排序，假定前面是一个有序数字，把原始数组zhong
		//的元素有序的依次插入这个有序数组中，最后就可以的到一个有序的数组了，时间复杂度O（n^2）,空间复杂度O（1）
		int j = 0;
		for (int i = 1; i < length; ++i)//依次从数组中选择元素
		{
			if (a[i] < a[i - 1])
			{
				int temp = a[i];//记录我们要比较的这个元素
				for (j = i - 1; j >= 0 && temp < a[j]; --j)//在前面的有序数组中依次进行比较
				{
					a[j + 1] = a[j];//把前面的元素值放到后面
				}
				a[j+1] = temp;//记得在这个for循环之后，j还是会减少
			}
		}
	}
	inline void Binsert_sort(int a[], int length)
	{
		int j = 0;
		for (int i = 1; i < length; ++i)
		{
			int low = 0, high = i - 1, temp = a[i];
			while (low <= high)
			{
				int middle = (low + high) / 2;

				if (a[middle] > a[i]) high = middle-1;
				else if (a[middle] == a[i])
				{
					high = middle;
					break;
				}
				else 
				{
					low = middle + 1;
				}
			}
			//insert at high+1
			for (int j = i - 1; j >= high + 1; j--) a[j + 1] = a[j];
			a[high + 1] = temp;
		}
	}

}
