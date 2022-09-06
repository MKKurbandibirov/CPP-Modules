#include "easyfind.hpp"

int main() {
	std::vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}
	try {
		std::vector<int>::iterator iter1 = easyfind(vec, 4);
		std::cout << *iter1 << std::endl;
		// std::vector<int>::iterator iter2 = easyfind(vec, 12);
		// (void)iter2;
	} catch (std::invalid_argument &ex) {
		std::cout << ex.what();
	}

	std::set<int> set;
	for (int i = 0; i < 10; i++) {
		set.insert(i);
	}
	try {
		std::set<int>::iterator iter1 = easyfind(set, 5);
		std::cout << *iter1 << std::endl;
		// std::set<int>::iterator iter2 = easyfind(set, 14);
		// (void)iter2;
	} catch (std::invalid_argument &ex) {
		std::cout << ex.what();
	}
}