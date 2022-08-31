#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Base *generate(void){
	std::srand(static_cast<unsigned int>(time(0)));
	int i = std::rand() % 3;

	switch (i) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return NULL;
}

void identify(Base* p){
	A *a = dynamic_cast<A *>(p);
	if (a){
		std::cout << "A" << std::endl;
		return;
	}
	B *b = dynamic_cast<B *>(p);
	if (b) {
		std::cout << "B" << std::endl;
		return;
	}
	C *c = dynamic_cast<C *>(p);
	if (c) {
		std::cout << "C" << std::endl;
		return;
	}
}

void identify(Base& p) {
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	} catch (std::exception &ex) {
		ex.what();
	}
	try {
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	} catch (std::exception &ex) {
		ex.what();
	}
	try {
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	} catch (std::exception &ex) {
		ex.what();
	}
}

int main() {
	Base *base = generate();

	identify(base);

	identify(*base);
	delete base;
	return 0;
}