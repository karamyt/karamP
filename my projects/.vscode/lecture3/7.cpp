/*       🧩 السؤال 7: حساب الفاتورة مع الخصم
📝 الوصف:
 اكتب برنامجًا يطلب من المستخدم إدخال سعر المشتريات.
 إذا كانت الفاتورة:
أكثر من 100 → خصم 20%


بين 50 و 100 → خصم 10%


أقل من 50 → لا خصم


اطبع السعر النهائي بعد الخصم.
🔹 المطلوب:
 if / else if / else + العمليات الحسابية
*/



#include <iostream>
#include <limits> // Required for numeric_limits

using namespace std;

int main ()

{
    double price;
    // Prompt the user to enter the total purchase price.
    cout << "========================================" << endl;
    cout << "      Welcome to the Discount Calculator!" << endl;
    cout << "========================================" << endl;
    cout << "Please enter the total purchase price: ";
    cin >> price;

    // Input validation: Check if the input is a valid number and positive.
    while (cin.fail() || price <= 0) {
        cout << "Invalid input. Please enter a positive number for the price: ";
        // Clear the error flag on cin.
        cin.clear();
        // Discard the rest of the line.
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> price;
    }

    double finalPrice;
    double discount = 0.0;

    // Determine the discount based on the price.
    if (price > 100) {
        discount = 0.20; // 20% discount
    } else if (price >= 50) {
        discount = 0.10; // 10% discount
    }

    // Calculate the final price.
    finalPrice = price * (1.0 - discount);

    // Display the results to the user.
    cout << " ----------------------------------------" << endl;
    cout << "           Billing Summary" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Original Price: $" << price << endl;
    if (discount > 0) {
        cout << "Discount Applied: " << (discount * 100) << "%" << endl;
    } else {
        cout << "No discount applied." << endl;
    }
    cout << "Final Price after discount: $" << finalPrice << endl;
    cout << "----------------------------------------" << endl;
    cout << "      Thank you for your purchase!" << endl;
    cout << "========================================" << endl;


    return 0;
}