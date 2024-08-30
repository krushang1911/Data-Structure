#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int largest_odd(int num) {
    int max_odd = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0 && digit > max_odd) {
            max_odd = digit;
        }
        num /= 10;
    }
    return max_odd;
}

int main() {
    int num;
    cout << "Enter a string: ";
    cin >> num;

    int large_odd = largest_odd(num);
    cout << "Largest odd digit is: " << large_odd << endl;

    return 0;
}