//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    int num;

    cin >> num;

    for(int index = num; index >= 0; index--) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}