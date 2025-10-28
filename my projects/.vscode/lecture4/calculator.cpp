#include <iostream>
using namespace std;

int main ()
{
  
    char op ;
    double num1 , num2 ;
        cout << " Simple Calculator " << endl ;


    // المتغيرات

// input from user 

cout << " please enter the operation (+ , - , * , / ) " << endl ;
cin >> op;

cout << " please enter two operands  " << endl ;
cin >> num1 >> num2 ;


switch (op)     {
case '+':
cout << num1 << "+"  << num2 << "=" << num1 + num2 << endl ;  
    
    break;

    case '-':
cout << num1 << "-"  << num2 << "=" << num1 - num2 << endl ;  
    
    break;

    case '*':  
cout << num1 << "*"  << num2 << "=" << num1 * num2 << endl ;

    break;

    case '/':
    if ( num2 != 0 )
    {
    cout << num1 << "/"  << num2 << "=" << num1 / num2 << endl ;
    }
    else 
    {
        cout << " error: Division by zero is not allowed " << endl ;
    }
    break;

default:

    cout << " error: Invalid operation " << endl ;
    break;
}



return 0 ;

}