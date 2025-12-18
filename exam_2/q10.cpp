/*
) سؤال
أكتب برنامج يطبع الأرقام من 1 إلى 50
 لكن:
إذا كان الرقم بين 10 و 20 تجاهله


إذا كان الرقم أكبر من 40
  افحص:
   إذا كان يقبل القسمة على 2 → اطبع "High Even"
   وإذا كان لا يقبل → "High Odd"
 (هذا يعني شروط متداخلة داخل loop)

*/
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 50; i++) {
        if (i >= 10 && i <= 20) {
            continue; // تجاهل الأرقام بين 10 و 20
        }

        if (i > 40) {
            if (i % 2 == 0) {
                cout << "High Even" << endl;
            } else {
                cout << "High Odd" << endl;
            }
        } else {
            cout << i << endl; // طباعة الرقم إذا لم يكن ضمن الشروط الخاصة
        }
    }
    return 0;
}