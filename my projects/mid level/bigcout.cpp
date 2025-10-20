#include <iostream>
using namespace std;
int main (){

 int x = 0;
    int y = 0;
    int z = 0;

    cout << "Please enter a number" << endl;
    cin >> x;
    cout << "Please enter another number" << endl;
    cin >> y;
    cout << "Please enter another number" << endl;
    cin >> z;

    if (x >= y && x >= z){
        cout << "The biggest number is: " << x << endl;
    }
    else if (y >= x && y >= z){
        cout << "The biggest number is: " << y << endl;
    }
    else {
        cout << "The biggest number is: " << z << endl;
    }
    return 0; 

}