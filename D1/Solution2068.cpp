//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>

#define SIZE 10

using namespace std;
int main(int argc, char** argv) {
    int testSize, temp, result;

    cin >> testSize;
    for (int test = 1; test <= testSize; test++) {
        result = 0;
        for (int index = 0; index < SIZE; index++) {
            cin >> temp;
            result = max(result, temp);
        }
        printf("#%d %d\n", test, result);
    }
    return 0;
}