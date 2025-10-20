#include <iostream>
 using namespace std;




    int n=6;


void shape1() {
    
    for (int i = 1; i <= n; ++i) {
        for (int s = 1; s <= n - i; ++s) cout << ' ';
        for (int j = 0; j <= 2 * i  - 1 ; ++j) cout << "*";
        cout << '\n';
    }
      
     
      
      
 cout <<'\n';
    
}
void shape2() {
    for (int  i = 1 ; i <= 2 * n - 1 ; i++){
    for (int j = 1 ; j <= 12 ; j++)  cout << "*";
    if ( i == 1 || i == n || j == 1 || j == 2 * n - 1 ) cout << "*";
    else cout << ' ';
    }
    cout << '\n' ;
    }
cout << '\n' ;
    
    
}
    void shape3() {
           for (int i= n ; i >= 1 ; --i) { 
       for (int k = 1 ; k <= n - i ; ++k) cout << " ";
      for (int r = 1 ; r <= 2 * i-1 ; ++r) cout << "*";
       cout << '\n' ;
       }
        
        
}
int main()
{
    shape1();
    shape2();
    shape3();
    return 0 ;
}