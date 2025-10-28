#include <iostream>
using namespace std ;

int main ()
 {

 int x  =1;
    int y   =1;
    int z =1 ;
    int k =  (x + y + z) ;
    
    int average = (k) / 3 ;




    cout << " please enter your points in math  " << endl;
    cin >> x ;
    cout << " please enter your points in physics  " << endl;
    cin >> y ;
    cout << " please enter your points in chemistry  " << endl;
    cin >> z ;

if ( average  >= 90){
cout << " A " << endl;

    else if ( average  >= 75) 
    cout << " B " << endl;
    else if ( average  >= 50)
    cout << " C " << endl;
     if ( average  < 49)
    cout << " F " << endl;    



}








    return 0;

}