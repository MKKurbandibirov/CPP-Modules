#include "Span.hpp"

Span::Span(void): N(0) {}

Span::Span(unsigned int N): N(N) {}

Span::Span(const Span& other) {
	this->N = other.N;
	std::copy(other.container.begin(), other.container.end(), std::back_inserter(this->container));
}

Span& Span::operator=(const Span& other) {
	if (this == &other) {
		return *this;
	}
	this->N = other.N;
	std::copy(other.container.begin(), other.container.end(), std::back_inserter(this->container));
	return *this;
}

Span::~Span() {}

void Span::addNumber(int val) {
	if (this->container.size() >= N) {
		throw std::invalid_argument("Container is full!");
	}
	this->container.push_back(val);
}

void Span::addNumbersRange(int from, int to) {
	for (int i = from; i < to; i++) {
		try {
			Span::addNumber(i);
		} catch (std::invalid_argument &ex) {
			throw std::invalid_argument("Container is full!");
		}
	}
}

unsigned int Span::shortestSpan(void) {
	std::vector<int> copy;
	std::copy(this->container.begin(), this->container.end(), std::back_inserter(copy));
	std::sort(copy.begin(), copy.end());
	unsigned int minSpan = INT32_MAX;
	for (int i = 0; i < (int)copy.size() - 1; i++) {
		if (copy.at(i + 1) - copy.at(i) < (int)minSpan) {
			minSpan = copy.at(i) - copy.at(i + 1);
		}
	}
	return minSpan;
}


void Span::print() {
	for (int i = 0; i < (int)this->container.size(); i++) {
		std::cout << this->container.at(i) << std::endl;
	}
}