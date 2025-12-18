#include <iostream>
using namespace std;

int main() {
    // تعريف مصفوفة ثابتة بحجم 5
    int numbers[5];
    // تهيئة بعض العناصر
    numbers[0] = 100;
    numbers[1] = 200;

    // تعريف وتهيئة (الباقي يتعطى 0 تلقائياً)
    int scores[5] = {10, 20, 30};

    // تعريف مع حجم محدد تلقائياً
    int marks[] = {5, 15, 25, 35};

    cout << "محتوى marks[2]: " << marks[2] << endl;

    cout << "طباعة عناصر scores: ";
    for (int i = 0; i < 5; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    cout << "طباعة عناصر numbers: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "عدد العناصر في marks: " << sizeof(marks) / sizeof(marks[0]) << endl;

    return 0;
}
