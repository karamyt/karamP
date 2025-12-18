#include <iostream>
using namespace std;

int main () {

    int N ;
      cout << "Enter a number: " ;
    cin >> N ;
     

    for (int i = 1 ; i <= N ; i++ )
    {
        cout << i << endl ;
    }   
    if (N % 2 == 0 )
    {
        cout << N << " is even number " << endl ;
    }
    else 
    {
        cout << N << " is odd number " << endl ;
    }
    if (N % 3 == 0 || N % 5 == 0 )
    {
        cout << N << " is a special number " << endl ;
    }
    else 
    {
        cout << N << " is not a special number " << endl ;
    }
    return 0 ;
}