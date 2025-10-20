#include <iostream>
using namespace std;

int main()

{
    int n; 
    
    cout <<  "ادخل عدد الاسطر ";
    
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
          
        for (int j = 1; j <= n -3  ; j++) {
    
             cout << " ";
             
        }
    
    for (int k = 1; k <= (2 * i - 1); k++) {
cout << "*";
}
    
}

return 0 ;


}