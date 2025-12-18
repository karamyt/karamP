#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;               // تعريف vector فارغ
    vector<int> grades = {10, 20};  // تعريف مع قيم مبدئية
    vector<int> ages(5, 0);         // 5 عناصر كل واحد قيمته 0

    // إضافة عناصر
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    cout << "العناصر داخل الـ vector: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    cout << "عدد العناصر: " << nums.size() << endl;

    nums.pop_back(); // حذف آخر عنصر
    cout << "بعد الحذف، الحجم: " << nums.size() << endl;

    // إدراج في منتصف
    nums.insert(nums.begin() + 1, 99);
    cout << "بعد الإدراج: ";
    for (auto v : nums) cout << v << " ";
    cout << endl;

    // حذف عنصر في المركز الثاني
    if (nums.size() > 1) {
        nums.erase(nums.begin() + 1);
        cout << "بعد المسح: ";
        for (auto v : nums) cout << v << " ";
        cout << endl;
    }

    return 0;
}
