#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> table;

    // إضافة صفوف يدويًا
    table.push_back({1, 2, 3});
    table.push_back({4, 5, 6});
    table.push_back({7, 8, 9});

    cout << "العناصر في 2D Vector:\n";
    for (int i = 0; i < table.size(); i++) {
        for (int j = 0; j < table[i].size(); j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
