#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <iostream>
#include <vector>

void PrintVector(std::vector<int> arr) {

}

void PrintVector(std::vector<int>& arr) {

}

void PrintArrayMatrix(std::vector<std::vector<int>>& myMatrix) {
	for (const auto& row : myMatrix) {
		for (int col : row) {
			std::cout << col << " ";
		}
		std::cout << "\n";
	}
}

void ShowVector() {
	std::vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8 };
	std::vector<int> one(10); //10 €чеек
	std::vector<int> two(5, 20); //5 €чеек. ¬се заполнены 20

	arr.empty(); //пуст ли вектор
	arr.push_back(10); //добавить в конец элемент
	arr.pop_back(); //удалить последний элемент
	arr.at(3); //обращение к €чейке с проверкой
	arr[3]; //обращение без проверки
	arr.front(); //первый элемент
	arr.back(); //последний элемент
	arr.clear(); //очистить массив

	arr.size(); //кол-во элементов
	arr.capacity(); //сколько выделено пам€ти

	for (auto &x : arr) {

	}

	for (auto it = arr.begin(); it != arr.end(); ++it) {
		std::cout << *it;
	}

	arr.insert(arr.begin(), 1000);
	arr.erase(arr.begin());

	std::erase(arr, 2);
	arr.erase(std::remove(arr.begin(), arr.end(), 2), arr.end());

	std::vector<std::vector<int>> matrix = {
		{1, 2, 3},
		{4, 5, 6}
	};

	std::vector<int> test;
	test.reserve(100);
}

#endif //!_VECTOR_H_