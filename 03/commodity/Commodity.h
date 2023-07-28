//
// Created by Edvard Schøyen on 25/06/2023.
//

#ifndef INC_03_COMMODITY_H
#define INC_03_COMMODITY_H
#include "string"


class Commodity {
private:
    int id;
    std::string name;
    double price;
    double tax = 1.25;

public:
    /**
     * Default constructor.
     */
    Commodity();

    /**
     * Constructor.
     * @param productNumber The product number.
     * @param name The name of the commodity.
     * @param price The price of the commodity.
     */
    Commodity( const std::string &name, int productNumber, double price);


    /**
     * Getters and setters
     */
    int getId() const;
    void setId(int Id_);

    const std::string &getName() const;
    void setName(const std::string &name);

    double getPrice(double quantity) const;
    double getPriceWithSalesTax(double quantity) const;
    void setPrice(double price);
};


#endif //INC_03_COMMODITY_H
