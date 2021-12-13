#include <iostream>

/* 1. Heap 메모리에 변수 할당하기
int main(){
    int* pointer = new int;
    *pointer = 10;

    std::cout << *pointer << std::endl;

    delete pointer;
    return 0;
}
*/

// 2. Heap 메모리에 배열 할당하기
int main(){
    int arr_size;
    std::cout << "array size : ";
    std::cin >> arr_size;
    int *list = new int[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        std::cin >> list[i];
    }
    for (int i = 0; i < arr_size; i++)
    {
        std::cout << i << "th element of list : " << list[i] << std::endl;
    }
    delete[] list;
    return 0;        
}

