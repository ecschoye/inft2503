#include <iostream>
#include "commodity/Commodity.h"

int main() {
    std::cout << "Task 3" << std::endl;

    // Specify the quantity in kilograms
    const double quantity = 2.5;

    // Create a commodity object with name "Norvegia", product code 123, and price 73.50 per kilo
    Commodity commodity("Norvegia", 123, 73.50);

    // Display the price per kilo and the total price for the specified quantity
    std::cout << "Price per kilo: " << commodity.getPrice(quantity) << std::endl;
    std::cout << "Price for " << quantity << " kilos: " << commodity.getPrice(quantity) << std::endl;
    std::cout << "Price for " << quantity << " kilos with sales tax: " << commodity.getPriceWithSalesTax(quantity) << std::endl;

    // Update the price per kilo to 79.60
    commodity.setPrice(79.60);
    std::cout << std::endl;

    // Display the new price details
    std::cout << "New price per kilo: " << commodity.getPrice(quantity) << std::endl;
    std::cout << "New price for " << quantity << " kilos: " << commodity.getPrice(quantity) << std::endl;
    std::cout << "New price for " << quantity << " kilos with sales tax: " << commodity.getPriceWithSalesTax(quantity) << std::endl;

    return 0;
}