#include <iostream>
#include <vector>
#include "Array.h"
#include "Vector.h"


template<typename T>
void PrintVector(const Vector<T>& vector) {
	for (size_t i = 0; i < vector.Size(); i++) {
		std::cout << vector[i] << std::endl;
	}

	std::cout << "-------------------------\n";
}

int main() {

	std::cout << "These are integers" << std::endl;
	int integer = 0;
	int integer2 = 5;
	
	std::cout << integer << std::endl;
	std::cout << integer2 << std::endl;


	std::cout << "These are vector" << std::endl;
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	std::cout << vec[0] << std::endl;
	std::cout << vec[1] << std::endl;
	std::cout << vec[2] << std::endl;
	std::cout << vec[3] << std::endl;
	std::cout << vec[4] << std::endl;

	std::cout << "These are array" << std::endl;
	Array<std::string, 2> data;
	data[0] = "Howell";
	data[1] = "4";
	std::cout << data[0] << std::endl;
	std::cout << data[1] << std::endl;

	std::cout << "These are Vector(header):" << std::endl;
	Vector<std::string> vector;
	vector.PushBack("Robert");
	vector.PushBack("C++");

	PrintVector(vector);

	return 0;
}