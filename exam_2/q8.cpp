
#include <iostream>
using namespace std;
int main () {
    string password ;
    cout << "Enter your password: " ;
    cin >> password ;

    if (password.length() >= 6) 
    {
        bool hasDigit = false ;
        for ( char c : password ) 
        
        {
            if ( isdigit(c) ) 
            
            
            {
                hasDigit = true ;
                break ;
            }
        }
        if (hasDigit) {
            bool hasUpper = false ;
            for ( char c : password )
            
            {
                if ( isupper(c) ) 
                {
                    hasUpper = true ;
                    break ;
                }
            }
            if (hasUpper)
             {
                bool hasSpecial = false ;
                for ( char c : password ) // : تعني -في-   ":"
                
                {
                    if ( !isalnum(c) ) 
                    {
                        hasSpecial = true ;
                        break ;
                    }
                
                    
                }
                if (hasSpecial) 
                {
                    cout << "Password is accepted." << endl ;
                } else 
                {
                    cout << "Password rejected: missing special character." << endl ;
                }
            } else 
            {
                cout << "Password rejected: missing uppercase letter." << endl ;
            }
        } else
         {
            cout << "Password rejected: missing digit." << endl ;
        }
    } else
     {
        cout << "Password rejected: too short." << endl ;
    }
    return 0;
}