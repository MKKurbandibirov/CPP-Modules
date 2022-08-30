#include <iostream>
#include <string>
#include <stdlib.h>

char _char = 0;
int _int = 0;
double _double = 0.0;
float _float = 0.0f;

int countSubs(std::string s1, std::string s2) {
    int cnt = 0;
    
    for(std::string::size_type i = 0; i < s1.length(); ++i)
        if(s1[i] == s2[0])
            if(s1.substr(i, s2.length()) == s2)
            {
                ++cnt;
                i += s2.length() - 1;
            }
    return cnt;
}

std::string computeType(std::string input) {
    if (!input.compare("+inf") || !input.compare("-inf") || !input.compare("nan") ||
        !input.compare("+inff") || !input.compare("-inff") || !input.compare("nanf")) {
            return "optional";
    } else if (input.size() == 1 && isdigit(input[0]) == false) {
        return "char";
    } else if (countSubs(input, ".") == 1) {
        if (input[input.size() - 1] == 'f') {
            return "float";
        }
        return "double";
    } else {
        return "int";
    }
    return "";
}

void intToChar(void) {
    std::cout << "char: ";
    if (_int >= 0 && _int <= 127){
		if (_int >= 32 && _int < 127){
			std::cout << "'" << static_cast<char>(_int) << "'" << std::endl;
		} else {
			std::cout << "Not displayed" << std::endl;
		}
	} else {
		std::cout << "cannot be translated to char" << std::endl;
	}
}

void castChar(std::string input) {
    _char = input[0];
    std::cout << "char: " << "'" << _char << "'" << std::endl;
    _int = static_cast<int>(_char);
    std::cout << "int: " << _int << std::endl;
    _float = static_cast<float>(_char);
    std::cout << "float: " << _float << ".0f" << std::endl;
    _double = static_cast<double>(_char);
    std::cout << "double: " << _double << ".0" << std::endl;
}

void castInt(std::string input) {
    _double = std::atof(input.c_str());
    if ((_double > 0 && _double - 2147483647 > 0) || (_double < 0 && _double + 2147483648 < 0)) {
        std::cout << "int: overflow" << std::endl;
        return;
    } else {
        _int = static_cast<int>(_double);
    }
    intToChar();
    std::cout << "int: " << _int << std::endl;
    _float = static_cast<float>(_double);
    std::cout << "float: " << _float << ".0f" << std::endl;
    std::cout << "double: " << _double << ".0" << std::endl;
}

void castFloat(std::string input) {
    _double = std::atof(input.c_str());
    if ((_double > 0 && _double - 2147483647 > 0) || (_double < 0 && _double + 2147483648 < 0)) {
        std::cout << "int: overflow" << std::endl;
        return;
    } else {
        _int = static_cast<int>(_double);
    }
    intToChar();
    std::cout << "int: " << _int << std::endl;
    _float = static_cast<float>(_double);  
    if (_double - _int == 0) {
        std::cout << "float: " << _float << ".0f" << std::endl;
        std::cout << "double: " << _double << ".0" << std::endl;
    } else {
        std::cout << "float: " << _float << "f" << std::endl;
        std::cout << "double: " << _double << std::endl;
    }
}

void castOptional(std::string input) {
    _double = std::atof(input.c_str());
	std::cout << "char: impossible\n";
	_float = static_cast<float>(_double);
	std::cout << "int: impossible\n";
	std::cout << "float: " << _float << "f" << std::endl;
	std::cout << "double: " << _double << "" << std::endl;
}


int main(int argc, char** argv) {
    if (argc == 2) {
        std::string type = computeType(argv[argc -1]);
        if (!type.compare("char")) {
            castChar(argv[argc -1]);
        } else if (!type.compare("int")) {
            castInt(argv[argc -1]);
        } else if (!type.compare("float") || !type.compare("double")) {
            castFloat(argv[argc -1]);
        } else {
            castOptional(argv[argc -1]);
        }
    }
}