#include <iostream>
using namespace std;

int main ()
{
int x=0 ; 

cout << "Enter the number you want to see the sum of its digits"  << endl;
cin >> x ;
int sum = 0 ;
while ( x != 0)
{
    sum = sum + ( x % 10 ) ;
    x = x / 10 ;
    
    
}

cout << " the sum of the digits is  " << sum << endl ;
return 0;
















}