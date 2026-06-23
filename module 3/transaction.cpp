#include <iostream>
#include <string>

int main() {
    // Declaring variables using clear naming conventions
    std::string itemName;
    int itemQuantity = 0;
    double itemCost = 0.0; // Using double to handle decimals for currency
    double totalCost = 0.0;

    std::cout << "Inventory Input System" << std::endl;
    std::cout << "----------------------" << std::endl;

    // Accepting user inputs
    std::cout << "Enter item name: ";
    std::getline(std::cin, itemName); // Using getline in case the item name has spaces

    std::cout << "Enter quantity: ";
    std::cin >> itemQuantity;

    std::cout << "Enter cost per item: ";
    std::cin >> itemCost;

    // Calculating total cost
    totalCost = itemQuantity * itemCost;

    // Displaying the results
    std::cout << "\n----------------------" << std::endl;
    std::cout << "Calculation Summary:" << std::endl;
    std::cout << "Item Name:  " << itemName << std::endl;
    std::cout << "Quantity:   " << itemQuantity << std::endl;
    std::cout << "Unit Cost:  $" << itemCost << std::endl;
    std::cout << "Total Cost: $" << totalCost << std::endl;

    return 0;
}
