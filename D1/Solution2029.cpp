//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    int testSize, left, right;

    cin >> testSize;
    for (int test = 1; test <= testSize; test++) {
        cin >> left >> right;
        printf("#%d %d %d\n", test, left / right, left % right);
    }
    return 0;
}