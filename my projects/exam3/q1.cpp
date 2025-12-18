#include <iostream>
using namespace std;
int main() {
    const int NUM_DRINKS = 3;
    string drinks[NUM_DRINKS] = {"Coffee", "Tea", "Juice"};
    int prices[NUM_DRINKS] = {5, 3, 4}; // أسعار المشروبات
    int choice;
    do {
        cout << "اختر مشروبًا:\n";
        for (int i = 0; i < NUM_DRINKS; i++) {
            cout << i + 1 << ". " << drinks[i] << " - $" << prices[i] << endl;
        }
        cout << "4. خروج\n";
        cout << "أدخل اختيارك (1-4): ";
        cin >> choice;

        if (choice >= 1 && choice <= NUM_DRINKS) {
            int amount;
            cout << "أدخل المبلغ: $";
            cin >> amount;

            if (amount >= prices[choice - 1]) {
                cout << "استمتع بمشروبك " << drinks[choice - 1] << "!\n";
            } else {
                int shortage = prices[choice - 1] - amount;
                cout << "المبلغ غير كافٍ. تحتاج إلى $" << shortage << " إضافية.\n";
            }
        } else if (choice != 4) {
            cout << "اختيار غير صالح. حاول مرة أخرى.\n";
        }

    } while (choice != 4);
    cout << "شكراً لاستخدامك ماكينة المشروبات. وداعاً!\n";
    return 0;
}