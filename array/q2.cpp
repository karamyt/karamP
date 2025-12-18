/*) آلة بيع الوجبات
لديك Vector يمثل عدد القطع المتوفرة لكل وجبة.
عند اختيار وجبة:
إذا الكمية > 0 يتم الخصم
وإلا اطبع "نفذت الكمية"
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<long long> meals = {2, 1, 0, 5};
    int choice;
    while (true) {
        cin >> choice;
        if (choice == 0) { 
            break;
        }
        if (meals[choice - 1] > 0) {
            meals[choice - 1]--;
        } else {
            cout << "نفذت الكمية" << endl;
        }
    }
    return 0;
}