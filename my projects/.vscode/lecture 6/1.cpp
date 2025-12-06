
#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4,5,6 } ; // تعريف مصفوفة تحتوي على 4 عناصر

    cout << "عناصر المصفوفة: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nعدد العناصر: " << 6 << endl;
    return 0;
}
