#include "Array.hpp"

int main() {
    Array<int> arr(5);

    std::cout << arr.size() << std::endl;
    arr[2] = 90;
    std::cout << arr[2] << std::endl;


    Array<int> arr1(12);
    arr1[1] = 88;

    arr = arr1;

    std::cout << arr[1] << std::endl;

    
}