/*          


) موقف سيارات
لديك Array تمثل أماكن الموقف (0 فارغ، 1 محجوز).
احسب عدد الأماكن الفارغة وأول مكان متاح.


*/

#include <iostream>
#include <array>

using namespace std;
int main() {
    array<int, 10> parking = {1, 0, 1, 0, 0, 1, 1, 0, 1, 0};
    int empty_count = 0;
    int first_empty_index = -1;

    for (size_t i = 0; i < parking.size(); i++) {
        if (parking[i] == 0) {
            empty_count++;
            if (first_empty_index == -1) 
                 {
                first_empty_index = i;
            }
        }
    }

    cout << "عدد الأماكن الفارغة: " << empty_count << endl;
    if (first_empty_index != -1) 
    
             {
        cout << "أول مكان متاح في الموقع: " << first_empty_index << endl;
    } else {
        cout << "لا توجد أماكن فارغة" << endl;
    }

    return 0;
}