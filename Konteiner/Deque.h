#ifndef _DEQUE_H_
#define _DEQUE_H_

#include <deque>
#include <iostream>

void PrintDeque(std::deque<int>& arr) {

}

void PrintDeque2(std::deque<std::deque<int>>& arr) {

}

void ShowDeque() {
	std::deque<int> arr = { 1, 2, 3 };
	std::deque<int> arr2(5); //(5 ячеек, везде 0)
	std::deque<int> arr2(5, 10); //(5 ячеек, везде 10)

	arr.size(); //кол-во элементов
	arr.empty(); //пустой ли контейнер
	arr.at(2); //доступ с проверкой
	arr[2]; //доступ без проверки
	arr.front(); //первый элемент
	arr.back(); //последний элемент

	arr.push_back(10); //добавить в конец
	arr.push_front(100); //добавить в начало !!!
	
	arr.pop_back(); //удалить с конца
	arr.pop_front(); //удалить с начала !!!
	
	arr.insert(arr.begin() + 1, 100); //вставка по середин
	arr.erase(arr.begin() + 1); //удаление по середине

	for (auto& i : arr) {
		std::cout << i << " ";
	}

	std::deque<std::deque<int>> matrix = { {1, 2, 3}, {1, 2, 3} };

	std::erase(arr, 3); //удалить все тройки c++20
}

#endif //!_DEQUE_H_