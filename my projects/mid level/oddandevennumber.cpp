#include <iostream>
using namespace std;
int main (){

    int x = 0;
    int y = 1;



    cout << "Please enter a number" << endl;
    cin >> x;       
    cout << "Please enter another number" << endl;
    cin >> y;

    if ((x % 2) == 0) 

        cout << "The first number is even" << endl;
    else 
        cout << "The first number is odd" << endl;
    if ((y % 2) == 0)
        cout << "The second number is even" << endl;
    else 
        cout << "The second number is odd" << endl;
    return 0 ;
}