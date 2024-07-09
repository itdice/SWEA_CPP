//
// Created by IT DICE on 2024-07-09.
//
#include <iostream>
#include <map>

using namespace std;
int main(int argc, char** argv) {
    int testSize, raw;
    const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    map<string, int> date;

    cin >> testSize;
    for (int test = 1; test <= testSize; test++) {
        cin >> raw;

        date["year"] = raw / 10000;
        date["month"] = raw % 10000 / 100;
        date["day"] = raw % 100;

        if (date["month"] >= 1 && date["month"] <= 12
            && date["day"] >= 1 && date["day"] <= days[date["month"]])
            printf("#%d %04d/%02d/%02d\n",
                test, date["year"], date["month"], date["day"]);
        else
            printf("#%d -1\n", test);
    }
    return 0;
}