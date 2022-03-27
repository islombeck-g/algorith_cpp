#include <iostream>
#include <vector>

void show(std::vector<int>& arr) {
	for (int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

void insert_sort(std::vector<int>&arr) {
	for (int i = 1; i < arr.size(); i++) {
		bool sorted = false;
		int j = i;
		for(int j=i; (j>0) && (sorted==false); j--)
			if (arr[j] < arr[j - 1]) 
				std::swap(arr[j], arr[j - 1]);
			else 
				sorted = true;
	}
}

int main()
{
	srand(time(NULL));
	std::vector<int> arr;
	const int size = rand() % 10;
	for (int i = 0; i < size; i++)
		arr.push_back(rand() % 10);

	show(arr);
	insert_sort(arr);
	show(arr);

	return 0;
}
