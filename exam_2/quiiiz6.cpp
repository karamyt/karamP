#include <iostream>
using namespace std;

int main () {
    int N ;
    cout << "Enter a number N: " ;
    cin >> N ;

    for ( int i = 1 ; i <= N ; i++ )
    {
        //  الفراغات قبل نجوم
        for ( int j = 1 ; j <= N - i ; j++ )
        {
            cout << " " ;
        }
        
        //طباعة نجوم والفراغات 
        for ( int k = 1 ; k <= (2 * i - 1) ; k++ )
        {
            if ( k == 1 || k == (2 * i - 1) || i == N )
            {
                cout << "*" ;
            }
            else
            {
                cout << " " ;
            }
        }
        cout << endl ;
        
    }
    
    
cout << "---------------------pyramid ---------------------" << endl ;
    return 0 ;
}