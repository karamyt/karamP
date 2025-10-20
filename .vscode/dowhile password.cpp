#include <iostream>
using namespace std;

int main () {



    int password = 1234;
    do {
        cout << "ادخل كلمة المرور: ";
        cin >> password;

    } while (password != 1234);
    cout << "تم الدخول" << endl;
return 0 ;  
}