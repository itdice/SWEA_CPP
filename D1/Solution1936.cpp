//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    int A, B;
    char result;

    // 1 : 가위, 2 : 바위, 3 : 보
    cin >> A >> B;
    if (abs(A - B) > 1) {
        result = A > B ? 'B' : 'A';
    }
    else {
        result = A > B ? 'A' : 'B';
    }
    cout << result << endl;

    return 0;
}