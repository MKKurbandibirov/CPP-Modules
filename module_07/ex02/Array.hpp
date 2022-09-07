#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {
private:
	T* arr;
	unsigned int N;
public:
	Array( void ) {
		this->arr = NULL;
		this->N = 0;
	}
	Array( unsigned int N ) {
		if (N < 0) {
			throw std::exception();
		} else if (N == 0) {
			this->arr = NULL;
			this->N = 0;
		} else {
			this->arr = new T[N];
			this->N = N;
		}
	}
	~Array( void ) {
		delete[] this->arr;
	}
	Array( const Array& other ) {
		delete[] this->arr;
		this->arr = new T(other.size());
		for (int i = 0; i < (int)other.size(); i++) {
			this->arr[i] = other[i];
		}
	}
	Array& operator=( const Array& other) {
		if (this == &other) {
			return *this;
		}
		delete[] this->arr;
		this->arr = new T(other.size());
		for (int i = 0; i < (int)other.size(); i++) {
			this->arr[i] = other[i];
		}
		return *this;
	}

	T& operator[](unsigned int idx) const {
		if (this->size() - 1 < idx || idx < 0) {
			throw std::exception();
		}
		return this->arr[idx];
	}

	unsigned int size() const {
		return this->N;
	}
};

#endif