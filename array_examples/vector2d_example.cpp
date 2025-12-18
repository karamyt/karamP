#include <iostream>
#include <vector>
using namespace std;

int main() {
    // إنشاء 2D vector بحجم 3x4 وقيم 0
    vector<vector<int>> matrix(3, vector<int>(4, 0));
    matrix[0][1] = 5;
    matrix[2][3] = 9;

    cout << "2D Vector (ثلاث صفوف، أربع أعمدة):\n";
    for (size_t i = 0; i < matrix.size(); i++) {
        for (size_t j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // إضافة صفوف ديناميكياً
    vector<vector<int>> table;
    table.push_back({1, 2, 3});
    table.push_back({4, 5, 6});
    table.push_back({7, 8, 9});

    cout << "\nجدول ديناميكي (table):\n";
    for (const auto &row : table) {
        for (auto val : row) cout << val << " ";
        cout << endl;
    }

    // إضافة عنصر إلى صف
    table[1].push_back(99);
    cout << "\nبعد إضافة 99 إلى الصف الثاني:\n";
    for (const auto &row : table) {
        for (auto val : row) cout << val << " ";
        cout << endl;
    }

    return 0;
}
