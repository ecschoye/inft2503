//
// Created by Edvard Schøyen on 25/06/2023.
//

#include "Commodity.h"

/*
 * Default constructor
 */
Commodity::Commodity() {}


/*
 * Constructor
 */
Commodity::Commodity( const std::string& name, int productNumber, double price) {
    this->name = name;
    this->id = productNumber;
    this->price = price;
}

/*
 * Getters and setters
 */

int Commodity::getId() const {
    return id;
}

void Commodity::setId(int productNumber) {
    this->id = productNumber;
}

const std::string &Commodity::getName() const {
    return name;
}

void Commodity::setName(const std::string &name) {
    this->name = name;
}

double Commodity::getPrice(double quantity) const {
    return price * quantity;
}

void Commodity::setPrice(double price) {
    this->price = price;
}

double Commodity::getPriceWithSalesTax(double quantity) const {
    return price * tax * quantity;
}

