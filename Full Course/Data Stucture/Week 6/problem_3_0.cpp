#include <iostream>
#include <vector>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSortDescending(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int max_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        if (max_index != i) {
            swap(arr[i], arr[max_index]);
        }
    }
}

void removeDuplicates(std::vector<int>& arr) {
    int n = arr.size();
    int uniqueElements = 0;

    for (int i = 0; i < n; ++i) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            arr[uniqueElements++] = arr[i];
        }
    }

    arr.resize(uniqueElements);
}

int main() {
    std::vector<int> arr = {5, 2, 8, 2, 3, 5, 9, 8, 5};
    
    std::cout << "Original  ";
    for (const auto& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    selectionSortDescending(arr);
    removeDuplicates(arr);

    std::cout << " desce: ";
    for (const auto& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
