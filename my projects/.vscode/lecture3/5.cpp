//برنامجًا يطلب من المستخدم رقمين (مثل 4 و 17)
 //ثم يطبع جميع الأعداد الزوجية بينهما.
//🔹 المطلوب:
 //for loop + if 

#include <iostream>
using namespace std;

int main ()
{
    int x, y ;
    cout << " please enter two numbers  " << endl;
    cin >> x >> y ;

    cout << " The even numbers between " << x << " and " << y << " are: " << endl;

    for ( int i = x ; i <= y ; i++ )
    {
        if ( i % 2 == 0 )
        {
            cout << i << endl ;
        }
    }

    return 0 ;
}