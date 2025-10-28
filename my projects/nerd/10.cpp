#include <iostream>
using namespace std;


int main ()
{
    int x = 0 ; 

    cout << "please enter a prime number" << endl;
    cin >> x ;
    if (x > 1)
    {
        bool isPrime = true;
        for (int i = 2; i <= x / 2; ++i)    









            
        {
            if (x % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << x << " is a prime number." << endl;
        }
        else
        {
            cout << x << " is not a prime number." << endl;
        }
    }
    else  
{

}

    return 0 ;
}