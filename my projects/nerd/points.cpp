#include <iostream>
using namespace std;

int main (){
    int x = 0 ;
    cout << "Please enter your points in math   " << endl;
    cin >> x ;  

    int y = 0 ;

    cout<< "please enter youe points physics        " << endl;
    cin >> y ;

    int z = 0 ; 
    cout << "please enter your points  in biolgy  " << endl;
    cin >> z ;
    int  k    =   (x + y + z) / 3 ;


if (k   <=  101 ) { cout << "    big     eror"  ; return 0; }



if ( k >= 90)
cout << "                       you are excellent               " << endl;

if ( k >=75 )
cout << "                        you are good                            " << endl;

if ( k >= 50)
cout << "                        you passed                               " << endl;
if ( k < 50)
cout << "                        you failed                         " << endl;

return 0 ;

}
