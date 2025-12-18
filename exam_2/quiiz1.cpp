#include <iostream>
using namespace std;

int main () {
    int deduction ;
    int salary ;
    int hours ;
    cout << "Enter worked hours: ";
    cin >> hours ;

    int salaryperhour ;
    cout << "Enter salary per hour : ";
    cin >> salaryperhour ;
    if  (hours >= 1000)
    { 

     // اضافة 10 % مكافئة 

        salary = hours * salaryperhour ;
        int bonus = salary * 0.1 ;
        salary = salary + bonus ;
        cout << "Total Salary  with bouns is : " << salary << endl ;
    }
    else                
    
       
       
       
        if (hours <= 300)
    {   // خصم 5 %
        int deduction = salary * 0.05 ;
         deduction = salary - deduction ;
 
        cout << "Total Salary after deduction is : " << deduction << endl ;
        
    }
    return 0 ; 

    }
    
