#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <cmath>

class Span {
private:
	unsigned int N;
	std::vector<int> container;
public:
	Span( void );
	Span( unsigned int );
	Span( const Span& );
	Span& operator=( const Span& );
	~Span( void );

	void addNumber( int );
	void addNumbersRange( int, int);
	int shortestSpan( void );
	int longestSpan( void );

	void print();
};

#endif