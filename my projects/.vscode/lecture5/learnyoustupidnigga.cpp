#include <iostream>
using namespace std;

int main() {
    int numbers[5];                  // مصفوفة من 5 عناصر (بدون قيم مبدئية)
    int scores[5] = {10, 20, 30};    // الباقي تلقائي بصير 0
    int marks[] = {5, 15, 25, 35};   // الحجم يُحدد تلقائياً (4 عناصر)

    cout << marks[2] << endl;        // طباعة العنصر الثالث (index 2)
cout << scores[4] << endl;       // طباعة العنصر الخامس (index 4)
cout << numbers[1] << endl;      // طباعة العنصر الأول (index 0) 
    return 0;
}
