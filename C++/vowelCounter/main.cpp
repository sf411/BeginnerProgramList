/* 
 * File:   main.cpp
 * Author: FrEaK
 *
 * Created on July 5, 2013, 1:10 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */

int countVowels(string input) {
    int count = 0;
    for (int i = 0; i <= input.length() - 1; i++) {
        char letter = input.at(i);

        if (letter == 'a' || letter == 'A') {
            count++;
        } else if (letter == 'e' || letter == 'E') {
            count++;
        } else if (letter == 'i' || letter == 'I') {
            count++;
        } else if (letter == 'o' || letter == 'O') {
            count++;
        } else if (letter == 'u' || letter == 'U') {
            count++;
        }
    }
    return count;
}

int main(int argc, char** argv) {
    cout << "Enter a word to count the vowels: ";
    string userInput;
    cin >> userInput;
    cout << "Number of vowels in the word " << userInput << ": " << countVowels(userInput) << endl;
    return 0;
}

