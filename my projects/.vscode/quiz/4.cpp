/*  

لسؤال 4: مثلث متناسق (هرم)
اكتب برنامجًا يطلب من المستخدم رقم n، ويطبع هرمًا من النجوم بهذا الشكل:
 (إذا أدخل المستخدم 5)
    *
   ***
  *****
 *******
*********


*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        
        for (int j = i; j < n; ++j) {
            cout << " ";
        }
        
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}