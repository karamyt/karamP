#include <iostream>
using namespace std;

int main ()
 {
int x = 0;



while ( x <= 0 ) 
    {
    cout << " الرجاء إدخال رقم صحيح :   " << endl;
    cin >> x;
    }
for ( int i = 1; i <= 10; i++ ) 
    {
    cout << x << " * " << i << " = " << x * i << endl;
    cout << "------------------------" << endl;

if (x == 0){
    cout << "الرجاء إدخال رقم صحيح أكبر من الصفر:" << endl;
return 0;
}



 }

 return 0;  
}