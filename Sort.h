#pragma once
#include <iostream>
namespace os {
	static inline void insert_sort(int a[],int length)
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
	static inline void Binsert_sort(int a[], int length)
	{
		int j = 0;
		for (int i = 1; i < length; ++i)
		{
			int low = 0, high = i - 1, temp = a[i];
			while (low <= high)
			{
				int middle = (low + high) / 2;

				if (temp < a[middle]) high = middle-1;
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

	static inline void Shell_sort(int a[], int length)
	{
		//�ǳ��ǳ�������һ��д����ͨ����ͬ�������Ӵ�������ԭʼ������ж�μ򵥵��������ս�����������ĸ��Ӷ�
		//�Ӷ�ʹ�������һ���ʱ�临�Ӷ�������n
		//�ѵ������ѡ�������������
		int incremental[3] = { 3,2,1 };
		for (int i = 0; i < 3; i++)
		{
			//����3�β�������
			int dk = incremental[i];
			for (int j = dk; j < length; j++)
			{
				if (a[j] < a[j - dk])
				{
					//��ô���м򵥵�ֱ�Ӳ�������ͺ���
					int temp = a[j];
					int m = 0;
					for (m = j - dk; m >= 0 && temp < a[m]; m -= dk)
					{
						a[m + dk] = a[m];
					}
					a[m + dk] = temp;
				}
			}
		}
		//in the last
		Binsert_sort(a, length);
	}
}
