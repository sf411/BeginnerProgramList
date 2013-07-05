/* 
 * File:   main.cpp
 * Author: FrEaK
 *
 * Created on July 5, 2013, 4:40 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

/*
 * 
 */

bool palindromeChecker(string input){
    string reversedWord = "";
    for (int i = 0; i < input.length(); i++){
        char letter = input.at(i);
        reversedWord += letter;
    }
    return reversedWord.compare(input);
}

int main(int argc, char** argv) {
    cout << "Enter a word to check if it a palindrome: ";
    string userInput;
    cin >> userInput;
    
    if (palindromeChecker(userInput)){
        cout << "Your word - " << userInput << " - is in fact a palindrome." << endl;
    }else{
        cout << "Your word - " << userInput << " - is in fact not a palindrome." << endl;
    }
    return 0;
}

