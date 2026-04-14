#ifndef _MAP_H_
#define _MAP_H_

#include <map>
#include <iostream>
#include <string>

void PrintMap(const std::map<std::string, int>& myMap) {
	std::map<std::map<std::string, int>, std::map<int, double>> kak_s_etim_work;
}

void ShowMap() {
	std::map<std::string, int> m = {
		{"Lipton", 20}, // ключ: значение
		{"Pepsi", 50},
		{"Parsley tea", 30}
	};

	m["Lipton"] = 70; //добавление элементов по ключу. если нет ключа - он создаётся

	m["Coffee"]; //Coffee: 0
	m.at("Tea");

	if (m.find("Tea") != m.end()) {
		std::cout << "Yes";
	}

	//c++20
	if (m.contains("Tea")) {
		std::cout << "Yes";
	}

	m.erase("Tea");

	for (auto& [key, value] : m) {
		std::cout << key << " " << value << "\n";
	}

	std::map<int, std::string> mm = {
		{3, "Ivan"}, // ключ: значение
		{1, "Oleg"},
		{2, "Yana"}
	};

	m.insert({ "Imba", 137 });

	//if (m["Imba"] == 0) {
	//	так нельзя
	//} 
}

#endif //!_MAP_H_