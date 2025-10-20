#include <iostream>
using namespace std;

int main (){
int x =0 ;

cout << "ادخل الرقم الذي تريد جدول الضرب له من 1 الى 10 " << endl;

cin >> x ;

for ( int i = 1 ; i <= 10 ; i++ ){

    cout << x  << "  *  " << i << "  =  " << x * i << endl ;

    cout << "------------------------" << endl ;
}


return 0 ;
}