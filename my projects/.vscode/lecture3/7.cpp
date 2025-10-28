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
using namespace std;

int main ()

{
    double price ;
    cout << " please enter the total purchase price  " << endl;
    cin >> price ;

    double finalPrice ;

    if ( price > 100 )
    {
        finalPrice = price * 0.8 ; // خصم 20%
    }
    else if ( price >= 50 && price <= 100 )
    {
        finalPrice = price * 0.9 ; // خصم 10%
    }
    else
    {
        finalPrice = price ; // لا خصم
    }

    cout << " the final price after discount is: " << finalPrice << endl;

    return 0 ;






















}