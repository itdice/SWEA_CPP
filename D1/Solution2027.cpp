//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    constexpr int num = 5;

    for (int row = 0; row < num; row++) {
        for (int left = row; left > 0; left--)
            cout << '+';
        cout << '#';
        for (int right = num - row - 1; right > 0; right--)
            cout << '+';
        cout << endl;
    }

    return 0;
}