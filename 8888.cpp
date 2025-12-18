#include <iostream>
#include <vector>
using namespace std;

int main() {
    // تعريف مصفوفة 2D بحجم 3x4 وكل القيم = 0
    vector<vector<int>> matrix(3, vector<int>(4, 0));

    // تغيير بعض القيم
    matrix[0][1] = 5;
    matrix[2][3] = 9;

    // الطباعة
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
