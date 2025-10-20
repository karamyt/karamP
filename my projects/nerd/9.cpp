#include <iostream>
using namespace std;

int main() {
    cout << "أدخل 10 أعداد (اضغط Enter بعد كل عدد):" << endl;
    int positives = 0;
    int negatives = 0;
    int zeros = 0;
    
    for (int i = 0; i < 10; ++i) {
        long long x;
        if (!(cin >> x)) {
            // إذا دخل المستخدم قيمة غير عددية، نخبره وننهي البرنامج بأمان
            cout<<"خطأ: الرجاء إدخال أعداد صحيحة فقط." << endl;
            return 1;
        }

        if (x > 0) ++positives;
        else if (x < 0) ++negatives;
        else ++zeros;
    }

    cout << "عدد الأعداد الموجبة: " << positives << endl;
    cout << "عدد الأعداد السالبة: " << negatives << endl;
    cout << "عدد الأصفار: " << zeros << endl;

    return 0;
}