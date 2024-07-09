//
// Created by IT DICE on 2024-07-09.
//
#include <cmath>
#include <iostream>

#define SIZE 10

using namespace std;
int main(int argc, char** argv) {
    int testSize;

    cin >> testSize;
    for (int test = 1; test <= testSize; test++) {
        int temp, summary = 0;
        for (int index = 0; index < SIZE; index++) {
            cin >> temp;
            summary += temp;
        }
        printf("#%d %.0f\n", test, static_cast<double>(summary) / SIZE);
    }
    return 0;
}