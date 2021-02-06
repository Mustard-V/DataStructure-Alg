#include <iostream>
#include "Sort.h"
int main() {
	int a[4] = {4,3,2,1 };

	os::insert_sort(a,4);
	int b[11] = { 4,3,2,2,13,7,1,1,1,11,0 };
	os::Binsert_sort(b, 11);
	for (int i = 0; i < 4; i++)
	{
		std::cout << a[i] << std::endl;
	}
	for (int i = 0; i < 11; i++)
	{
		std::cout << b[i] << std::endl;
	}
	return 0;
}