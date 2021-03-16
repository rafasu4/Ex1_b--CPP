//
// Created by stycks on 14/03/2021.
//
#include <iostream>
#include "snowman.hpp"

using namespace std;
using namespace ariel;

int main() {
    int letter = 0;
    int number = 0;
    do {
        cout << endl;
        cout << "Welcome to Snowman program!" << endl;
        cout << "Enter an 8 digits number between 1 - 4 for a snowman figure: ";
        cin >> number;
        cout << snowman(number);
        cout << endl << "For another run enter any number. To exit enter 0: ";
        cin >> letter;
    }while (letter != 0);
    return 0;
}
