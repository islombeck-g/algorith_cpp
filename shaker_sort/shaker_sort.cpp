
#include <iostream>
#include <vector>

void show(const std::vector<int>& arr) {
	if (arr.empty()) {
		std::cout << "arr_is_empty" << std::endl;
		return;
	}
	for (int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

void shaker_sort(std::vector<int>&arr) {
	if (arr.empty()) {
		std::cout << "arr_is_empty" << std::endl;	
		return;
	}
	int right = arr.size() - 1;
	int left = 0;
	while (left <= right) {
		for (int i = left; i < right; i++) {
			if (arr[i] > arr[i + 1])
				std::swap(arr[i], arr[i + 1]);
		}
		
		for (int i = right; i > left; i--) {
			if (arr[i] < arr[i - 1])
				std::swap(arr[i], arr[i - 1]);
		}
		left++;
		right--;
	}

}

int main()
{
	srand(time(NULL));
	std::vector<int>arr;
	const int size = rand() % 10;
	for (int i = 0; i < size; i++)
		arr.push_back(rand() % 10);

	show(arr);
	shaker_sort(arr);
	show(arr);
	return 0;
}