#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "العناصر داخل الـ vector: ";
    for (int x : numbers) {
        cout << x << " ";
    }

    cout << "\nعدد العناصر: " << numbers.size() << endl;

    numbers.pop_back();   // حذف آخر عنصر
    cout << "بعد الحذف، الحجم: " << numbers.size() << endl;

    return 0;
}

