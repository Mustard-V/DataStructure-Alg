#include <iostream>
#include<vector>
#include "Sort.h"
#include "swap_sort.h"
int main() {
	int a[4] = {4,3,2,1 };

	//os::insert_sort(a,4);
	int b[19] = { 4,3,2,2,13,7,1,1,1,11,0,123,3,12,123,132,4535,75675,3 };
	//std::vector<int> v1(b,b+10);
	//os::Binsert_sort(b, 11);
	//os::Shell_sort(b, 19);
	std::vector<int> v2(&b[0], &b[19]);//这边好扯啊这个用地址的真的有点恶心，要写出一个很危险的地址。
	std::vector<int> v3(&a[0], &a[5]);
	for (int i = 0; i < 4; i++)
	{
		std::cout << v3[i] << std::endl;
	}
	for (int i = 0; i < 19; i++)
	{
		std::cout << v2[i] << std::endl;
	}
	std::cout << "Done\n";
	//bubble_sort(v2);
	quick_sort(v2, 0, v2.size() - 1);
	quick_sort(v3, 0, 3);
	for (int i = 0; i < 4; i++)
	{
		std::cout << v3[i] << std::endl;
	}
	std::cout << "Done\n";
	for (int i = 0; i < 19; i++)
	{
		std::cout << v2[i] << std::endl;
	}
	/*
	for (int i = 0; i < 4; i++)
	{
		std::cout << a[i] << std::endl;
	}
	for (int i = 0; i < 19; i++)
	{
		std::cout << b[i] << std::endl;
	}
	*/
	return 0;
}