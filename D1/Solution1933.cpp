//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>
#include <list>

using namespace std;
int main(int argc, char** argv) {
    int num;
    list<int> primes;

    cin >> num;
    for (int index = 1; index <= num; index++)
        if (num % index == 0)
            primes.push_back(index);

    for (const int pnum: primes)
        cout << pnum << " ";
    cout << endl;

    return 0;
}