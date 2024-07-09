//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    int num, result = 0;

    cin >> num;
    for(int index = 1; index <= num; index++)
        result += index;
    cout << result << endl;

    return 0;
}
