#include <iostream>
#include <string>

int main( void ) {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "str(address): " << &str << std::endl;
    std::cout << "pointer: " << stringPTR << std::endl;
    std::cout << "reference: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "str: " << str << std::endl;
    std::cout << "pointer: " << *stringPTR << std::endl;
    std::cout << "reference: " << stringREF << std::endl;
    return 0;
}
