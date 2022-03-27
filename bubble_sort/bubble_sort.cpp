#include <iostream>
#include <vector>



void bubble_sort(std::vector<int>& arr){
	bool is_sorted = false;
	while (is_sorted != true) {
		is_sorted = true;
		for (int i = 0; i < arr.size()-1; i++) 
			if (arr[i] > arr[i + 1]) {
				is_sorted = false;
				std::swap(arr[i], arr[i+1]);
			}
	}
}

