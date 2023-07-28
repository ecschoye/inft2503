#include <iostream>
#include "circle/Circle.h"
#include "commodity/Commodity.h"


int main() {
    std::cout << "Task 1 and 2" << std::endl;

    // Create a circle object
    Circle circle(5);

    // Print area and circumference of circle
    std::cout << "Circle " << std::endl;
    std::cout << "Area: " << circle.getArea() << std::endl;

    std::cout << "Circumference: " << circle.getCircumference() << std::endl;

    std::cout << std::endl;

    std::cout << "Task 3" << std::endl;

    const double quantity = 2.5;

    // Create a commodity object
    Commodity commodity("Norvegia", 123, 73.50);

    std::cout << "Price per kilo: " << commodity.getPrice(quantity) << std::endl;
    std::cout << "Price for " << quantity << " kilos: " << commodity.getPrice(quantity) << std::endl;
    std::cout << "Price for " << quantity << " kilos with sales tax: " << commodity.getPriceWithSalesTax(quantity) << std::endl;

    commodity.setPrice(79.60);
    std::cout << std::endl;

    std::cout << "New price per kilo: " << commodity.getPrice(quantity) << std::endl;
    std::cout << "New price for " << quantity << " kilos: " << commodity.getPrice(quantity) << std::endl;
    std::cout << "New price for " << quantity << " kilos with sales tax: " << commodity.getPriceWithSalesTax(quantity) << std::endl;



    std::cout << std::endl;

    std::cout << "Task 4" << std::endl;

    std::string word1, word2, word3;

    std::cout << "Enter three words: " << std::endl;
    std::cin >> word1 >> word2 >> word3;

    std::string sentence = word1 + " " + word2 + " " + word3;

    std::cout << "Length of word1: " << word1.length() << std::endl;
    std::cout << "Length of word2: " << word2.length() << std::endl;
    std::cout << "Length of word3: " << word3.length() << std::endl;
    std::cout << "Length of sentence: " << sentence.length() << std::endl;

    if (sentence.length() > 11) {
        std::string sentence2 = sentence;
        sentence2[9] = 'x';
        sentence2[10] = 'x';
        sentence2[11] = 'x';
        std::cout << "Sentence: " << sentence << std::endl;
        std::cout << "Sentence2: " << sentence2 << std::endl;
    }

    if (sentence.length() > 5) {
        std::string sentence_start = sentence.substr(0, 5);
        std::cout << "Sentence: " << sentence << std::endl;
        std::cout << "Sentence start: " << sentence_start << std::endl;
    }

    if (sentence.find("hallo") != std::string::npos) {
        std::size_t found = sentence.find("hallo");
        std::cout << "Sentence: " << sentence << std::endl;
        std::cout << "Found hallo at position " << found << std::endl;
    } else {
        std::cout << "Sentence: " << sentence << std::endl;
        std::cout << "Did not find hallo in sentence" << std::endl;
    }

    std::string substring = "er";

    int index = 0;
    while ((index = sentence.find(substring, index)) != std::string::npos) {
        std::cout << "Found substring " << substring << " at position " << index << std::endl;
        index++;
    }


    return 0;
}
