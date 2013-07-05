/* 
 * File:   main.cpp
 * Author: FrEaK
 *
 * Created on July 5, 2013, 12:34 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

/*
 * 
 */

string pigLatin(string input){
    string brokenWord = "";
    string pigWord = "";
    
     pigWord = input.substr(0,1) + "ay";
     brokenWord = input.substr(1, input.length()-1) + "-" + pigWord;
     return brokenWord;
}
int main(int argc, char** argv) {
    string userInput = "";
    cout<< "Enter a word to turn into pig latin: ";
    cin>> userInput;
    userInput = pigLatin(userInput);
    cout<< "Your word in Pig Latin is: " << userInput << endl;
    return 0;
}

