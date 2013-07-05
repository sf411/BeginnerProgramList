/* 
 * File:   main.cpp
 * Author: FrEaK
 *
 * Created on July 5, 2013, 12:12 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */

string reverseString(string input){
    string word = "";
    for(int i = input.length()-1; i >= 0; i--){
        word+= input.at(i);
    }
    return word;
}

int main(int argc, char** argv) {
    string userInput = "";
    cout<< "Enter a word to reverse: ";
    cin>> userInput;
    userInput = reverseString(userInput);
    cout<< "The word has been reversed: " << userInput << endl;
    return 0;
}



