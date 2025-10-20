#include <iostream>
 using namespace std;




    int n=6;


void shape1() {
    
    for (int i = 1; i <= n; ++i) {
        for (int s = 1; s <= n - i; ++s) cout << ' ';
        for (int j = 1; j <= 2 * i - 1; ++j) cout << "*";
        cout << '\n';
    }
    
    cout << '\n' ;
}
    void shape2() {
             for (int i= n ; i >= 1 ; --i) { 
       for (int k = 1 ; k <= n - i ; ++k) cout << " ";
      for (int r = 1 ; r <= 2 * i-1 ; ++r) cout << "*";
        }
        cout << '\n' ;





        
}
int main()
{
    shape1();
    shape2();
    return 0 ;
}




 for (int e = 0 ; e<= n - i ; e++) cout << ' ';



 void shape3() {
    for (int i = 1; i <= n; i++) {        // حلقة للأسطر
        for (int j = 1; j <= n; j++) {    // حلقة للأعمدة
            cout << "*";
        }










            // 🔹  المربع في المنتصف (بعرض أكبر سطر في الهرم
    int squareSize = 2 * n - 1;
    for (int i = 1; i <= squareSize; i++) {
        for (int j = 1; j <= squareSize; j++) cout << '*';
        cout << endl;