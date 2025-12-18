
#include <iostream>
using namespace std;
int main () {
    for ( int i = 1 ; i <= 10 ; i++ ) {
        for ( int j = 1 ; j <= 10 ; j++ ) {
            int product = i * j ;
            if ( product % 7 == 0 ) {
                break ;
            }
            cout << product << "\t" ;
        }
        cout << endl ;
    }
    return 0 ;
}