#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv) {
	if (argc == 4) {
		std::fstream file;
		file.open(std::string(argv[1]));
		std::string result;
		std::string line;
		while (getline(file, line)) {
			
			result.append(line);
			result.append("\n");
		}
		// std::cout << result;
		
		// file.write(result);
		file.close();
	}
	return 0;
}