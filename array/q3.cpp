/*      


3) نظام درجات
لديك Array علامات طلاب.
احسب عدد الطلاب في كل فئة (ممتاز، جيد جدًا، جيد، مقبول)



*/
#include <iostream>
#include <array>
using namespace std;
int main() {
    array<int, 10> grades = {95, 82, 67, 74, 88, 91, 53, 79, 85, 100};
    int excellent = 0, very_good = 0, good = 0, pass = 0;
    for (size_t i = 0; i < grades.size(); i++) {
        if (grades[i] >= 90) {
            excellent++;
        } else if (grades[i] >= 80) {
            very_good++;
        } else if (grades[i] >= 70) {
            good++;
        } else {
            pass++;
        }
    }
    cout << "ممتاز: " << excellent << endl;
    cout << "جيد جدًا: " << very_good << endl;
    cout << "جيد: " << good << endl;
    cout << "مقبول: " << pass << endl;
    return 0;
}