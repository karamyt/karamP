#include <iostream>
#include <string>
using namespace std;

int n = 6;

void shape1() {
    int i = 1;
    while (i <= n) {
        int s = 1;
        while (s <= n - i) {
            cout << ' ';
            s++;
        }

        int j = 1;
        while (j <= 2 * i - 1) {
            cout << "*";
            j++;
        }

        cout << '\n';
        i++;
    }
    cout << '\n';
}

void shape2() {
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= 11) {
            if (i == 1 || i == n || j == 1)
                cout << "*";
            else
                cout << ' ';
            j++;
        }
        cout << "*";
        cout << '\n';
        i++;
    }
    cout << '\n';
}

void shape3() {
    int i = n;
    while (i >= 1) {
        int s = 1;
        while (s <= n - i) {
            cout << ' ';
            s++;
        }

        int j = 1;
        while (j <= 2 * i - 1) {
            cout << "*";
            j++;
        }

        cout << '\n';
        i--;
    }
    cout << '\n';
}

int main() {
    shape1();
    shape2();
    shape3();
    return 0;
}
