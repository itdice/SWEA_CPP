//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    int testSize, left, right;
    char result;

    cin >> testSize;
    for (int test = 1; test <= testSize; test++) {
        cin >> left >> right;
        result = ((left == right) ? '=' : ((left > right) ? '>' : '<'));
        printf("#%d %c\n", test, result);
    }
    return 0;
}