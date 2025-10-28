/* سؤال: برنامج مطعم بسيط لحساب الفاتورة
📝 الوصف:
اكتب برنامجًا بلغة C++ لمحاكاة نظام الطلبات في مطعم صغير.
 البرنامج يجب أن:
يعرض قائمة الطعام للمستخدم، مثلًا:

 -------- MENU --------
1. Burger     - 5.0$
2. Pizza      - 8.0$
3. Pasta      - 6.5$
4. Drink      - 2.0$
-----------------------


يطلب من المستخدم اختيار رقم الوجبة من القائمة.


يطلب إدخال عدد القطع المطلوبة.


يحسب السعر الإجمالي للطلب الواحد.


يسأل المستخدم:
 “هل تريد طلب شيء آخر؟ (y/n)”


إذا أجاب بـ (y) → يعيد عرض القائمة.


إذا أجاب بـ (n) → يطبع الفاتورة النهائية.


في النهاية يطبع:


مجموع الفاتورة الكلي


إذا كان المجموع أكبر من 20$ → يضيف خصم 10%


ثم يطبع السعر بعد الخصم (إن وجد).



*/


#include <iostream>
using namespace std; 


int main ()
{
    double totalBill = 0.0 ;
    char moreOrders = 'y' ;

    while ( moreOrders == 'y' || moreOrders == 'Y' )
    {
        cout << " -------- MENU --------" << endl;
        cout << "1. Burger     - 5.0$" << endl;
        cout << "2. Pizza      - 8.0$" << endl;
        cout << "3. Pasta      - 6.5$" << endl;
        cout << "4. Drink      - 2.0$" << endl;
        cout << "5. shawerma   - 4.0$" << endl;
        cout << "6. fries      - 3.0$" << endl;
        cout << "7. salad      - 2.5$" << endl;
        cout << "8. ice cream  - 3.5$" << endl;
        cout << "9. Exit             "<< endl;
        cout << "10. Next page          " << endl;
        cout << "-----------------------" << endl;

        int choice ;
        cout << " please choose a meal number from the menu  " << endl;
        cin >> choice ;

        int quantity ;
        cout << " please enter the quantity  " << endl;
        cin >> quantity ;

        double pricePerItem = 0.0 ;

        switch ( choice )
        {
            case 1:
                pricePerItem = 5.0 ;
                break ;
            case 2:
                pricePerItem = 8.0 ;
                break ;
            case 3:
                pricePerItem = 6.5 ;
                break ;
            case 4:
                pricePerItem = 2.0 ;
                break ;
            case 5:
                pricePerItem = 4.0 ;
                break ;
            case 6:
                pricePerItem = 3.0 ;
                break ;
            case 7:
                pricePerItem = 2.5 ;
                break ;
            case 8:
                pricePerItem = 3.5 ;
                break ;
            case 9:
                cout << " Exiting the menu. " << endl;
                moreOrders = 'n' ;
                continue ;
            case 10:
                cout << " Next page is not implemented yet. " << endl;
                continue ;


            default:
                cout << " Invalid choice! Please try again. " << endl;
                continue ;
        }

        double orderTotal = pricePerItem * quantity ;
        totalBill += orderTotal ;

        cout << " Do you want to order something else? (y/n) " << endl;
        cin >> moreOrders ;
    }

    cout << " Your total bill is: " << totalBill << " $" << endl;

    if ( totalBill > 20.0 )
    {
        double discount = totalBill * 0.1 ;
        totalBill -= discount ;
        cout << " You received a discount of 10%. New total is: " << totalBill << " $" << endl;
    }

    return 0 ;
}