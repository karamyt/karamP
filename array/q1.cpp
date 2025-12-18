/**
🔹 أسئلة (1D Array / Vector)
1) ماكينة القهوة
لديك Array تحتوي أسعار 4 مشروبات قهوة.
المستخدم يُدخل رقم المشروب عدة مرات حتى يدخل 0.
احسب السعر الإجمالي.
 


 */

#include <iostream>
using namespace std;
int main() {
    int prices[4] = {1, 2, 3, 4};
    int total = 0;
    int num;
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        total += prices[num - 1];
    }
    cout << total << endl;
    return 0;
}