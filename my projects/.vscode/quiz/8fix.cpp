#include <iostream>
using namespace std;

int main() {



    int n, grade, sum = 0;
    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter grade of student " << i + 1 << ": ";
        cin >> grade;

        if (grade < 0 || grade > 100) {
            cout << "Invalid grade, try again" << endl;
            i--; // Decrement i to repeat this iteration
            continue;
        }

        sum = sum + grade;
    }

    
    float avg = sum / n;
    cout << "Average grade = " << avg << endl;

    if (avg >= 90)
        cout << "Excellent" << endl;
    else if (avg >= 75)
        cout << "Good" << endl;
    else if (avg >= 60)
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;
    return 0;
}