#include <iostream>

int func1(int& ref) {	//�Լ� ���ڷ� ���۷��� �ޱ�. �ش� ��쿣 ���ڸ� ���޹޾� ref ������ ���ǵǴ� ����, ���ڷ� ���� �ּҸ� ����ϱ� ���� �޸𸮰� �Ҵ�ȴ�.
	int a = ref;
	return a;
}


int main() {
	int a = 3;
	int& reference_a = a;	//���۷���. �� �ٸ� �̸��� �������ִ� ȿ��. ���ÿ� ���� �޸𸮸� �Ҵ����� �ʿ䰡 ����. �����Ϸ��ܿ��� a�� �ٲ�ġ�� �ȴ�.
	int* pointer_a = &a;	//�����Ϳ� ����ϴ�.
	reference_a = 5;

	std::cout << "a: " << a << std::endl;
	std::cout << "reference_a: " << reference_a << std::endl;
	
	int b = 10;
	reference_a = b;
	std::cout << "reference_a: " << reference_a << std::endl;


	std::cout << "reference_func1: " << func1(a) << std::endl;				
	std::cout << "reference_func1: " << func1(reference_a) << std::endl;

}