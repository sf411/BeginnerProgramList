/* 
 * File:   main.cpp
 * Author: FrEaK
 *
 * Created on July 5, 2013, 4:50 PM
 */

#include <cstdlib>
#include <fstream>
#include <ostream>
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */

int keyboardString() {
    int count = 1;
    string keyboardInput = " ";
    cin.ignore();
    cout << "Enter a string of words: ";
    getline(cin, keyboardInput);

    for (int i = 0; i < keyboardInput.length(); i++) {

        if (keyboardInput.at(i) == ' ') {
            count++;
        }
    }
    return count;
}

int fileString() {
    int count = 1;
    cin.ignore();
    cout << "Enter a file location of the string: ";
    ifstream stringFile;
    string fileLocation, fileString;
    cin >> fileLocation;
    cin.ignore();
    stringFile.open(fileLocation.c_str());
    if (stringFile.is_open()) {
        while (!stringFile.eof()) {
            getline(stringFile, fileString);
        }
        for (int i = 0; i < fileString.length(); i++) {

            if (fileString.at(i) == ' ') {
                count++;
            }
        }
    }
    stringFile.close();
    return count;
}

int main(int argc, char** argv) {
    int userInput;
    cout << "1.Enter string from keyboard\n2.Enter string from file.\n";
    cin >> userInput;
    switch (userInput) {
        case 1:
            cout << "The numbers of words in your string is " << keyboardString() << endl;
            break;
        case 2:
            cout << "The numbers of words in your string is " << fileString() << endl;
            break;
        default:
            cout << "Not a menu option. Shutting down." << endl;
            break;
    }
    return 0;
}

