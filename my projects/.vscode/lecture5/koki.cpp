/* #include <iostream>
using namespace std;

int main() {
    int arr[4] = {1, 2, 3, 4};

    cout << "عناصر المصفوفة: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nعدد العناصر: " << 4 << endl;
    return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;               // تعريف vector فارغ
    vector<int> grades = {10, 20};  // تعريف مع قيم مبدئية
    vector<int> ages(5, 0);         // 5 عناصر كل واحد قيمته 0

    cout << "العنصر الثالث في grades: " << grades[1] << endl; // طباعة العنصر الثالث
    return 0;
}

*/


/*
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "عناصر المصفوفة:\n";
    for (int i = 0; i < 5; i++) {
        cout << "العنصر رقم " << i << " = " << numbers[i] << endl;
    }

    return 0;
}
*/ 

/*
#include <iostream>
using namespace std;

int main() {
    int nums[3] = {5, 10, 15};

    nums[1] = 99; // تعديل العنصر الثاني

    cout << "بعد التعديل:\n";
    for (int i = 0; i < 3; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
 */

/* #include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "عناصر المصفوفة الثنائية:\n";
    for (int i = 0; i < 2; i++) {         // الصفوف
        for (int j = 0; j < 3; j++) {     // الأعمدة
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;   // إنشاء vector فارغ

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    cout << "عناصر الـ vector:\n";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << "\nعدد العناصر: " << nums.size() << endl;

    return 0;
}
