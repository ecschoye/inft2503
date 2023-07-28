//
// Created by Edvard Schøyen on 09/07/2023.
//

#include <iostream>
#include <vector>
#include <memory>


using namespace std;

class Animal {
public:
    Animal() = default;
    virtual ~Animal() = default;
    virtual string makeNoise() = 0;

};

class Elephant : public Animal {
public:
    Elephant() = default;
    ~Elephant() = default;
    string makeNoise() override {
        return "Toot!";
    }
};

class Pig : public Animal {
public:
    Pig() = default;
    ~Pig() = default;
    string makeNoise() override {
        return "Honk!";
    }
};



int main() {

    vector<unique_ptr<Animal>> animals;
    animals.emplace_back(make_unique<Elephant>());
    animals.emplace_back(make_unique<Elephant>());
    animals.emplace_back(make_unique<Pig>());

    for(auto &a : animals)
        cout << a->makeNoise() << endl;

    return 0;
}