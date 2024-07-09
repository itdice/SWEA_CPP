//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    string str;

    cin >> str;
    for (const char letter: str)
        cout << static_cast<int>(letter)-
            static_cast<int>('A') + 1 << ' ';
    cout << endl;

    return 0;
}