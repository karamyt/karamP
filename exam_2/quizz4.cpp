#include <iostream>
using namespace std;
int main () {
    

  int n  ; 
    cout << "Enter a number: " ;
    cin >> n ;
    int sum = 0 ;
    for ( int  i = 1 ; i <= n ; i += 2 ) 
    {
        if ( i > 100 ) 
        {
            break ;
        }
        sum += i ;
    }
    cout << "The sum of odd numbers is: " << sum << endl ;

    return 0 ;
}
