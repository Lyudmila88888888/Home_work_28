#pragma once
#include <string>

struct Tree {
	std::string fruit;
	int fruits_number = 0;
	int price_fruit;
};

void print_tree(const Tree& T);
int full_price(const Tree& T);
int collect(const Tree& T, int num);