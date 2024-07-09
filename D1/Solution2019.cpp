//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    int num, result = 1;

    cin >> num;

    for (int index = 0; index <= num; index++) {
        cout << result << ' ';
        result *= 2;
    }
    cout << endl;

    return 0;
}