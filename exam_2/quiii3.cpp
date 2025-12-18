
#include <iostream>
using namespace std;
int main () {
    int grade ;
    cout << "Enter your grade: " ;
    cin >> grade ;

    if (grade >= 90) {
        if (grade >= 95) {
            cout << "A+" << endl ;
        }  else {
            cout << "A" << endl ;
        }
    } else   if (grade < 50)        {
        if   (grade < 30) {
            cout    << "Very Weak" << endl ;
        } else {
            cout << "Weak" << endl ;
        }
    }

    return 0 ;
}