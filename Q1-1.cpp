#include <iostream>
using namespace std;

int boundSum()
{
    int lower, upper;
    cout << "Enter the lower bound: ";
    cin >> lower;
    cout << "Enter the upper bound: ";
    cin >> upper;

    if (lower > upper) {
        return -1;
    }

    int sum = 0;
    for (int i = lower; i <= upper; i++) {
        sum += i;
    }
    return sum;
}

