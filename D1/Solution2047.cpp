//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    string str;

    cin >> str;
    for (char& letter: str)
        letter = static_cast<char>(toupper(letter));
    cout << str << endl;

    return 0;
}