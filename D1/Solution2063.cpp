//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>
#include <list>
#include <vector>

using namespace std;
int main(int argc, char** argv) {
    int size, temp;
    list<int> numList;

    cin >> size;
    for (int index = 0; index < size; index++) {
        cin >> temp;
        numList.push_back(temp);
    }
    numList.sort();
    auto start = numList.begin();
    advance(start, size / 2);
    cout << *start << endl;

    return 0;
}