#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iterator>
#include <vector>
#include <set>
#include <iostream>

template<typename T>
typename T::iterator easyfind(T container, int val) {
	typename T::iterator iter = std::find(container.begin(), container.end(), val);
	if (iter != container.end()) {
		return iter;
	} else {
		throw std::invalid_argument("Container does not have this value!");
	}
}

#endif