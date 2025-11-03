/*  


اكتب برنامجًا يطلب من المستخدم ثلاث أطوال تمثل أضلاع مثلث:
 a, b, c
ثم يحدد نوع المثلث بناءً على القواعد التالية:
إذا كانت الأضلاع الثلاثة متساوية → Equilateral Triangle


إذا كان ضلعان فقط متساويين → Isosceles Triangle


إذا كانت كل الأضلاع مختلفة → Scalene Triangle


وإذا لم تتحقق شروط تكوين مثلث (أي: إذا كان مجموع أي ضلعين ≤ الثالث) اطبع: Not a valid triangle

*/

#include <iostream>
using namespace std;

int main ()

{
    double a,b,c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a  ; cout << endl;  
   cin  >> b ; cout << endl;
    cin >> c;   cout << endl;
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Not a valid triangle" << endl;
    } 
    else if (a == b && b == c) {
        cout << "Equilateral Triangle" << endl;
    } 
    else if (a == b || b == c || a == c) {
        cout << "Isosceles Triangle" << endl;
    } 
    else {
        cout << "Scalene Triangle" << endl;
    } 

    return 0;
}