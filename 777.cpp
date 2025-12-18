#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    cout << "عناصر المصفوفة:\n";
    for (int i = 0; i < 2; i++) {          // الصفوف
        for (int j = 0; j < 3; j++) {      // الأعمدة
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
