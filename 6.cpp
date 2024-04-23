#include <iostream>
#include <fstream>
#include <cctype>
#include <algorithm>

// Function to count vowels
int countVowels(const std::string &text) {
    int vowels = 0;
    for (char ch : text) {
        switch (std::tolower(ch)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowels;
        }
    }
    return vowels;
}

// Function to count words
int countWords(const std::string &text) {
    int words = 0;
    bool inWord = false;
    for (char ch : text) {
        if (std::isspace(ch)) {
            if (inWord) {
                ++words;
                inWord = false;
            }
        } else {
            inWord = true;
        }
    }
    if (inWord) ++words;
    return words;
}

// Function to reverse the string
string reverseString(const std::string &text) {
    return std::string(text.begin(), text.end());
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(std::string text) {
    bool capitalizeNext = false;
    for (char &ch : text) {
        if (std::isspace(ch)) {
            capitalizeNext = true;
        } else if (!capitalizeNext && std::isalpha(ch)) {
            capitalizeNext = false;
        } else if (capitalizeNext && std::isalpha(ch)) {
            ch = std::toupper(ch);
            capitalizeNext = false;
        }
    }
    return text;
}

int main() {
    string fileData;
    ifstream file("charles.txt");
    
    // Read the content of the file into fileData
    if (file.is_open()) {
        getline(file, fileData);
        file.close();
    } else {
        std::cerr << "Unable to open file." << std::endl;
        return 1;
    }
    
    // Output the number of vowels
    cout << "Number of vowels: " << countVowels(fileData) << std::endl;
    
    // Output the number of words
    cout << "Number of words: " << countWords(fileData) << std::endl;
    
    // Output the reversed statement
    cout << "Reversed statement: " << reverseString(fileData) << std::endl;
    
    // Output the statement with the second letter of each word capitalized
    cout << "Capitalized second letter: " << capitalizeSecondLetter(fileData) << std::endl;
    
    return 0;
}
