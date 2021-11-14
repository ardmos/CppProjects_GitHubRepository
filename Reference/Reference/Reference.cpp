#include <iostream>

int func1(int& ref) {	//함수 인자로 레퍼런스 받기. 해당 경우엔 인자를 전달받아 ref 변수가 정의되는 순간, 인자로 들어온 주소를 기억하기 위해 메모리가 할당된다.
	int a = ref;
	return a;
}


int main() {
	int a = 3;
	int& reference_a = a;	//레퍼런스. 또 다른 이름을 설정해주는 효과. 평상시엔 따로 메모리를 할당해줄 필요가 없다. 컴파일러단에서 a로 바꿔치기 된다.
	int* pointer_a = &a;	//포인터와 비슷하다.
	reference_a = 5;

	std::cout << "a: " << a << std::endl;
	std::cout << "reference_a: " << reference_a << std::endl;
	
	int b = 10;
	reference_a = b;
	std::cout << "reference_a: " << reference_a << std::endl;


	std::cout << "reference_func1: " << func1(a) << std::endl;				
	std::cout << "reference_func1: " << func1(reference_a) << std::endl;

}