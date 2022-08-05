#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	// Animal an;

	const int N = 10;
	Animal** animals = new Animal*[N];
	for (int i = 0; i < N; i++) {
		if (i < N / 2) {
			animals[i] = new Cat();
		} else {
			animals[i] = new Dog();
		}
	}

	for (int i = 0; i < N; i++) {
		delete animals[i];
	}
	delete[] animals;

	return 0;
}