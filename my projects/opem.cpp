#include <iostream>
using namespace std;

int main() {
    int age;
    bool student;
    cout << "Enter age: "; cin >> age;
    cout << "Are you a student? (1=yes, 0=no): "; cin >> student;

    if (age < 12) {
        cout << "Ticket: Child (free)" << endl;
    } else if (age <= 18) {
        cout << "Ticket: Youth (discounted)" << endl;
    } else {
        // Adult or senior special cases
        if (age >= 65) {
            cout << "Ticket: Senior (discounted)" << endl;
        } else if (student) {
            cout << "Ticket: Adult student (discounted)" << endl;
        } else {
            cout << "Ticket: Adult (full price)" << endl;
        }
    }

    return 0;
}

