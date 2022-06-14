#include <iostream>
#include <fstream>

void    replace(std::string filename, char *s1, char *s2) {
    std::ifstream file;
    std::string tmp, result;
    file.open(filename.data());
    while (getline(file, tmp)) {
        result += tmp;
        result += "\n";
    }
    file.close();
    size_t pos;
    while ((pos=result.find(s1)) != std::string::npos) {
        result.erase(pos, std::string(s1).length());
        result.insert(pos, std::string(s2));
    }
    std::ofstream newFile;
    std::string newFilename = "new_"+filename;
    newFile.open(newFilename.data());
    newFile << result;
    newFile.close();
}

int main(int argc, char **argv) {
    if (argc == 4) {
        replace(std::string(argv[1]), argv[2], argv[3]);
    }
    return 0;
}