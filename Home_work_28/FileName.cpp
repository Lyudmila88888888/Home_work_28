#include <iostream>
#include "Tree.hpp"





int main() {
	setlocale(LC_ALL, "Russian");

	// Задача 1. Структура
	Tree t1{ "Apples", 50, 15 };

	//Задача 2.
	print_tree(t1);
	
	// Задача 3.
	std::cout << "Стоимость покупки всех плодов : " << full_price(t1) << std::endl;

	// Задача 4.
	int collect_price = collect(t1, 5);
	std::cout << "\nЦена собранных фруктов:" << collect_price << std::endl;
	


	return 0;
}