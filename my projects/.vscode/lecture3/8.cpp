/*                                               🧩 السؤال 8: عدد الحروف والأرقام في نص
📝 الوصف:
 اكتب برنامجًا يطلب من المستخدم إدخال نص (string).
 احسب عدد الحروف وعدد الأرقام في النص.
🔹 المطلوب:
 for loop + if (isdigit()) و if (isalpha())


*/
#include <iostream>
#include  <string>
#include <cctype>

using namespace std;

int  main ()    {
string text  ;
cout << " please enter a text  " << endl ;
cin >> text ;   
int lettersCount = 0 ;
int digitsCount = 0 ;
for ( int i = 0 ; i < text.length() ; i++ ) {
    if ( isalpha ( text [i] ) ) {
        lettersCount++ ;
    }
    else if ( isdigit ( text [i] ) ) {
        digitsCount++ ;
    }
}
cout << " the number of letters is  "  << lettersCount << endl ;
cout << " the number of digits is  "  << digitsCount << endl ;

    return 0 ;
}
