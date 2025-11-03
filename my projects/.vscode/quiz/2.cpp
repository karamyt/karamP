/*لسؤال 2: حساب مساحة المثلث
اكتب برنامجًا يطلب من المستخدم إدخال قاعدة (base) و ارتفاع (height) لمثلث،
 ثم يحسب المساحة باستخدام الصيغة:
 [
 \text{Area} = 0.5 × base × height
 ]
ثم يطبع الناتج بدقة عشريّة واحدة (مثلاً: Area = 12.5)
*/


#include <iostream> 
using namespace std;


int main() { 

    double base, height; 
    cout << "Enter the base of the triangle: "; // القاعدة
    cin >> base; 
    cout << "Enter the height of the triangle: "; // الارتفاع
    cin >> height; 
    double area = 0.5 * base * height; // المساحة



    cout << "Area = " << area << endl; 
    return 0;


















}
