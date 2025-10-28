#include <iostream>
#include <limits>
using namespace std;

int main() {
    long long num;
    cout << "Enter an integer: ";
    if (!(cin >> num)) {
        cout << "Invalid input\n";
        return 0;
    }

    bool negative = (num < 0);
    long long n = (negative) ? -num : num; //
    long long reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (negative) reversed = -reversed;

    cout << "Reversed number: " << reversed << '\n';
    return 0;
}
