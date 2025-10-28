#include <iostream>
using namespace std;

int  main ()    {

int x  ;

cout << "Enter the number you want the sum of it from 1 to your  number      " << endl ;
cout << "---------------------------------------------------------" << endl ;
cout << " your number is    "  ;  '\n' ;    
cin >> x ;

int sum = 0 ;
for ( int i = 1 ; i <= x ; i++ ) {
    sum = sum + i ;
}
cout << "               the sum is  "  << sum << endl ;
cout << "       ----------------------------          " << endl ;

























    return 0 ;
}