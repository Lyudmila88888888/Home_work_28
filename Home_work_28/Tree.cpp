#include "Tree.hpp"
#include <iostream>

void print_tree(const Tree& T){
	std::cout << "Fruit:" << T.fruit << std::endl;
	std::cout << "Fruits_number:" << T.fruits_number << std::endl;
	std::cout << "Price_fruit:" << T.price_fruit << std::endl;
}

int full_price(const Tree& T) {
	return T.fruits_number * T.price_fruit;
}

int collect(const Tree& T, int num) {

	if (num > T.fruits_number)
		std::cout << "Ќельз€ сорвать больше плодов, чем есть";
		int total_price = num * T.price_fruit;
	
	return total_price;
}
