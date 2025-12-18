/*
9) سؤال
أعمل برنامج يطلب من المستخدم رقمًا
 ثم يقوم بعكس الرقم باستخدام العمليات الحسابية فقط
 وبعدها يفحص إذا الرقم الأصلي يساوي المعكوس أو لا
 (Palindrome)
 ولكن اضيف شرط داخل الـ loop
 أنه إذا ظهر رقم 0 في منتصف الرقم
 يطبع رسالة "Zero Found" ويتابع.
*/
#include <iostream>
using namespace std;
int main() {
    int original_number, number, reversed_number = 0, digit;
    cout << "أدخل رقمًا: ";
    cin >> original_number;

    number = original_number;

    while (number > 0) {
        digit = number % 10;

        
        if (digit == 0 && number < 10) {
            cout << "Zero Found" << endl;
        }

        reversed_number = reversed_number * 10 + digit;
        number /= 10;
    }

    cout << "الرقم المعكوس هو: " << reversed_number << endl;

    if (original_number == reversed_number) {
        cout << original_number << " هو رقم Palindrome." << endl;
    } else {
        cout << original_number << " ليس رقم Palindrome." << endl;
    }

    return 0;
}