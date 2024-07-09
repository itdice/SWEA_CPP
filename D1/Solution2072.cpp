//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>

#define SIZE 10

using namespace std;
int main(int argc, char** argv) {
    int testSize;

    cin >> testSize;
    for (int test = 1; test <= testSize; test++) {
        int temp, result = 0;
        for (int index = 0; index < SIZE; index++) {
            cin >> temp;
            result += (temp % 2 != 0) ? temp : 0;
        }
        printf("#%d %d\n", test, result);
    }
    return 0;
}