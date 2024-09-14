// sort

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr[0], arr[2]);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}