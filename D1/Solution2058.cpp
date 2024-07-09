//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    int data, result = 0;

    cin >> data;
    for (int num = data; num > 0; num /= 10)
        result += (num % 10);
    cout << result << endl;

    return 0;
}