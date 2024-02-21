#include <iostream>
#include <string>

class File {
private:
    std::string fileName;

public:
    // Constructor
    File(const std::string& name) : fileName(name) {
        std::cout << "File '" << fileName << "' created." << std::endl;
    }

    // Destructor
    ~File() {
        std::cout << "File '" << fileName << "' destroyed." << std::endl;
    }

    // Function to get the file name
    std::string getFileName() const {
        return fileName;
    }
};

int main() {
    // Creating File objects using constructor
    File file1("document.txt");
    File file2("image.jpg");

    // Accessing file names using a member function
    std::cout << "File 1: " << file1.getFileName() << std::endl;
    std::cout << "File 2: " << file2.getFileName() << std::endl;

    // File objects will be destroyed when they go out of scope
    // Destructor will be called automatically

    return 0;
}
