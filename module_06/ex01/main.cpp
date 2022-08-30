#include <iostream>
#include <string>
#include <sstream>
#include <stdint.h>

struct Data {
    char _char;
    int _int;
    float _float;
    double _double;
    std::string _string;
};

uintptr_t serialize(Data* ptr){
	std::cout << "Serialization of data\n";
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	std::cout << "Deserialization of data\n";
	return reinterpret_cast<Data *>(raw);
}

std::ostream& operator<<(std::ostream& out, Data* data) {
    out << "char: " << data->_char << std::endl
    << "int: " << data->_int << std::endl
    << "float: " << data->_float << std::endl
    << "double: " << data->_double << std::endl
    << "string: " << data->_string << std::endl;
    return out;
} 

int main() {
    struct Data *data = new Data;
    data->_char = 'c';
    data->_int = 42;
    data->_float = 42.2f;
    data->_double = 42.2;
    data->_string = "string";

    std::cout << data << std::endl;
    
    uintptr_t ptr = serialize(data);
    struct Data *newData = deserialize(ptr);

    std::cout << std::endl << newData;
}