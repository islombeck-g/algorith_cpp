
#include <iostream>
#include <vector>

void show(std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
void selection_sort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        int j = i;
        int min = j;
        bool checked=false;
        for (j=j+1; j < arr.size(); j++)
            if (arr[j] < arr[min]) {
                min = j;
                checked = true;
            }
        if (checked == true) {
            checked = false;
            std::swap(arr[min], arr[i]);
        }
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
    selection_sort(arr);
    show(arr);

    return 0;
}