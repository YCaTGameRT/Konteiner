#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <array>
#include <iostream>

void PrintArray(std::array<int, 5> arr) {
	
}

void PrintArray(const std::array<int, 5>& arr) {

}

template<size_t Size>
void PrintArray(const std::array<int, Size>& arr) {
	
}

void PrintArrayMatrix(std::array<std::array<int, 3>, 2>& myMatrix) {
	for (const auto& row : myMatrix) {
		for (int col : row) {
			std::cout << col << " ";
		}
		std::cout << "\n";
	}
}

void ShowArray() {
	std::array<int, 5> arr = {4, 1, 5, 1, 3};

	arr.size(); //размер массива
	arr.at(2); //доступ с проверкой границ
	arr[2]; //доступ без проверки
	arr.front(); //первый элемент
	arr.back(); //последний элемент
	arr.fill(10); //заполнение массива

	for (auto i : arr) {
		std::cout << i << " ";
	}

	std::array <int, 5>second = arr;

	std::array<std::array<int, 3>, 2> matrix;
}

#endif //!_ARRAY_H_