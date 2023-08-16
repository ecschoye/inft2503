#include <iostream>
#include "commodity/Commodity.h"

int main() {
    std::cout << "Task 4" << std::endl;


    // Get three words from the user
    std::cout << "Enter three words: " << std::endl;
    std::string word1, word2, word3;
    std::cin >> word1 >> word2 >> word3;

    // Concatenate the words into a single sentence
    std::string sentence = word1 + " " + word2 + " " + word3;

    // Display the length of each word and the entire sentence
    std::cout << "Length of word1: " << word1.length() << std::endl;
    std::cout << "Length of word2: " << word2.length() << std::endl;
    std::cout << "Length of word3: " << word3.length() << std::endl;
    std::cout << "Length of sentence: " << sentence.length() << std::endl;

    // If the sentence length is greater than 11, create a new sentence with 'xxx' at positions 9, 10, and 11
    if (sentence.length() > 11) {
        std::string sentence2 = sentence;
        sentence2[9] = 'x';
        sentence2[10] = 'x';
        sentence2[11] = 'x';
        std::cout << "Sentence: " << sentence << std::endl;
        std::cout << "Sentence2: " << sentence2 << std::endl;
    }

    // Check for the presence of the word "hallo" in the sentence
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

    // Find all occurrences of the substring "er" in the sentence
    std::string substring = "er";
    int index = 0;
    while ((index = sentence.find(substring, index)) != std::string::npos) {
        std::cout << "Found substring " << substring << " at position " << index << std::endl;
        index++;
    }


    return 0;
}