#include "Span.hpp"

int main()
{
	Span sp = Span(20);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	sp.print();

	std::cout << std::endl;
	// sp.addNumbersRange(3, 8);

	// sp.print();
	std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	return 0;
}