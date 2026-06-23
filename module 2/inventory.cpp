#include <iostream>

int main() {
    // 1. Prints the required greeting
    std::cout << "Hello Inventory System!" << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    // 2. Demonstrates the use of escape characters (\n for newline, \t for tab)
    std::cout << "Demonstrating Escape Characters:\n";
    std::cout << "\t-> This line is indented using a tab escape character (\\t).\n";
    std::cout << "This line ends with two newline characters (\\n).\n\n";

    // 3. Outputs the sizes of char, int, and float
    std::cout << "Displaying Data Type Sizes:" << std::endl;
    std::cout << "Size of char  : " << sizeof(char) << " byte(s)" << std::endl;
    std::cout << "Size of int   : " << sizeof(int) << " byte(s)" << std::endl;
    std::cout << "Size of float : " << sizeof(float) << " byte(s)" << std::endl;

    return 0;
}
