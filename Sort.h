#pragma once
#include <iostream>
namespace os {
	inline void insert_sort(int a[],int length)
	{	//�����㷨�ı��ʣ��е�������ð�����򣬼ٶ�ǰ����һ���������֣���ԭʼ����zhong
		//��Ԫ����������β���������������У����Ϳ��Եĵ�һ������������ˣ�ʱ�临�Ӷ�O��n^2��,�ռ临�Ӷ�O��1��
		int j = 0;
		for (int i = 1; i < length; ++i)//���δ�������ѡ��Ԫ��
		{
			if (a[i] < a[i - 1])
			{
				int temp = a[i];//��¼����Ҫ�Ƚϵ����Ԫ��
				for (j = i - 1; j >= 0 && temp < a[j]; --j)//��ǰ����������������ν��бȽ�
				{
					a[j + 1] = a[j];//��ǰ���Ԫ��ֵ�ŵ�����
				}
				a[j+1] = temp;//�ǵ������forѭ��֮��j���ǻ����
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
