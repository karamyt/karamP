#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <limits>
using namespace std;


void pause_console() {
    cout << "\nPress Enter to return to menu...";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    cin.get(); 
}
// Start of C++.cpp
namespace C__ {



int run()

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
}
// End of C++.cpp

// Start of Untitled-1.cpp
namespace Untitled_1 {



int run() {

    int n ;
int sum ;
  
        cout << "Enter a number: ";
        cin >> n;
    
while (n > 0) {
        sum += n;
       n++;
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
}
// End of Untitled-1.cpp

// Start of c++1.cpp
namespace c__1 {
    



int run()
{ 
    int n;
cout <<"دخل عدد الاشطر";

cin >> n;

for (int i = n; i  >= 1; i++) {
    
    for (int j = 1 ; j<= i ; j++) {
        cout << "😂";
        
    }
    cout <<endl;
    
}


return 0 ;
    
}
}
// End of c++1.cpp

// Start of do while.cpp
namespace do_while {



int run() {int i = 1 ;

    do {
        cout << i << endl;
        i++;
    
    
    
    
    } while (i++ <= 9);

return 0 ;

}
}
// End of do while.cpp

// Start of dowhile password.cpp
namespace dowhile_password {



int run() {



    int password = 1234;
    do {
        cout << "ادخل كلمة المرور: ";
        cin >> password;

    } while (password != 1234);
    cout << "تم الدخول" << endl;
return 0 ;  
}
}
// End of dowhile password.cpp

// Start of postfix + prefix.cpp
namespace postfix___prefix {



int run(){

int x = 5;

int y = 10 ;


cout << x+3 << endl;
cout << x++ << endl;
cout << ++x << endl;
cout << y++ << endl;
cout << y << endl;
cout << x << endl;
cout << x++ << endl;
cout << ++x << endl;
cout << x+y << endl; 
return 0 ;
}



}
// End of postfix + prefix.cpp

// Start of sum.cpp
namespace sum {





int run() {

    int n = 1; 
    int sum =0;

while (n <=10000) {

    sum += n;
    n++;


}
cout << "the sum is = " << sum << endl;


return 0 ;  
}
}
// End of sum.cpp

// Start of while trinangle.cpp
namespace while_trinangle {




int n = 6;

void shape1() {
    int i = 1;
    while (i <= n) {
        int s = 1;
        while (s <= n - i) {
            cout << ' ';
            s++;
        }

        int j = 1;
        while (j <= 2 * i - 1) {
            cout << "*";
            j++;
        }

        cout << '\n';
        i++;
    }
    cout << '\n';
}

void shape2() {
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= 11) {
            if (i == 1 || i == n || j == 1)
                cout << "*";
            else
                cout << ' ';
            j++;
        }
        cout << "*";
        cout << '\n';
        i++;
    }
    cout << '\n';
}

void shape3() {
    int i = n;
    while (i >= 1) {
        int s = 1;
        while (s <= n - i) {
            cout << ' ';
            s++;
        }

        int j = 1;
        while (j <= 2 * i - 1) {
            cout << "*";
            j++;
        }

        cout << '\n';
        i--;
    }
    cout << '\n';
}

int run() {
    shape1();
    shape2();
    shape3();
    return 0;
}

}
// End of while trinangle.cpp

// Start of while.cpp
namespace while_proj {



int run() {
    int i = 1;

    while (i <= 9) { 
        cout << i++ << endl;
        i++;    
    }

    return 0; // Fixed return
}

}
// End of while.cpp

// Start of wtf.cpp
namespace wtf {

 




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
    // The following lines were causing a syntax error due to misplaced 'else' and '}'
    // The original code had a syntax error here. The fix assumes the intent was to have
    // an inner loop with conditional printing, and the outer loop's body was prematurely closed.
    // This part of the fix is an interpretation to make the code syntactically valid.
    // The original structure was:
    // for (int j = 1 ; j <= 12 ; j++) {  cout << "*";
    // if ( i == 1 || i == n || j == 1 || j == 2 * n - 1 ) cout << "*";
    // else cout << ' ';
    // }
    // else cout << ' '; // This 'else' was unmatched
    // } // This '}' was unmatched
    // cout << '\n' ;
    // }
    // cout << '\n' ;
    // }
    // The corrected version below attempts to make it syntactically correct,
    // assuming the intent was to print a border-like pattern.
    // If the original intent was different, this fix might alter the logic.
    if ( i == 1 || i == n || i == 2 * n - 1 ) { // Assuming n is the height, 2*n-1 is max height
        for (int j = 1 ; j <= 12 ; j++) cout << "*";
    } else {
        cout << "*"; // Left border
        for (int j = 2 ; j <= 11 ; j++) cout << " "; // Inner space
        cout << "*"; // Right border
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
int run()
{
    shape1();
    shape2();
    shape3();
    return 0 ;
}
}
// End of wtf.cpp

// Start of 1.cpp
namespace prod_1 {



int run()
{
int x=0 ; 

cout << "Enter the number you want to see the sum of its digits"  << endl;
cin >> x ;
int sum = 0 ;
while ( x != 0)
{
    sum = sum + ( x % 10 ) ;
    x = x / 10 ;
    
    
}

cout << " the sum of the digits is  " << sum << endl ;
return 0;
















}
}
// End of 1.cpp

// Start of 10.cpp
namespace prod_10 {
/*          

🧩 السؤال 10: حساب المتوسط وإيجاد أعلى وأدنى علامة
📝 الوصف:
 اطلب من المستخدم إدخال عدد الطلاب،
 ثم إدخال علامات كل طالب.
 اطبع:
المتوسط


أعلى علامة


أدنى علامة


🔹 المطلوب:
 for loop + if + المجموع


*/




 

int run()
{
    int numberOfStudents ;
    cout << " please enter the number of students  " << endl;
    cin >> numberOfStudents ;

    int sum = 0 ;
    int highestGrade = -1 ;
    int lowestGrade = 101 ;

    for ( int i = 1 ; i <= numberOfStudents ; i++ )
    {
        int grade ;
        cout << " please enter the grade for student " << i << " : " ;
        cin >> grade ;

        sum += grade ;

        if ( grade > highestGrade )
        {
            highestGrade = grade ;
        }

        if ( grade < lowestGrade )
        {
            lowestGrade = grade ;
        }
    }

    double average = static_cast<double>(sum) / numberOfStudents ;

    cout << " The average grade is: " << average << endl;
    cout << " The highest grade is: " << highestGrade << endl;
    cout << " The lowest grade is: " << lowestGrade << endl;

    return 0 ;
}
}
// End of 10.cpp

// Start of 2.cpp
namespace prod_2 {



int run()
 {
int x = 0;



while ( x <= 0 ) 
    {
    cout << " الرجاء إدخال رقم صحيح :   " << endl;
    cin >> x;
    }
for ( int i = 1; i <= 10; i++ ) 
    {
    cout << x << " * " << i << " = " << x * i << endl;
    cout << "------------------------" << endl;

// This if condition was inside the loop and would return prematurely.
// It's moved outside or removed if the while loop already handles validation.
// Given the while loop `while ( x <= 0 )`, x will be > 0 here.
// So, this `if (x == 0)` block is unreachable and can be removed or commented out.
// For now, I'll remove it as it's dead code after the while loop.
// if (x == 0){
//     cout << "الرجاء إدخال رقم صحيح أكبر من الصفر:" << endl;
// return 0;
// }



 }

 return 0;  
}
}
// End of 2.cpp

// Start of 3.cpp
namespace prod_3 {



int run() {
    cout << "أدخل 10 أعداد (اضغط Enter بعد كل عدد):" << endl;
    int positives = 0;
    int negatives = 0;
    int zeros = 0;
    
    for (int i = 0; i < 10; ++i) {
        long long x;
        if (!(cin >> x)) {
            //  إذا دخل المستخدم قيمة غير عددية، نخبره وننهي البرنامج  
            cout<<"خطأ: الرجاء إدخال أعداد صحيحة فقط." << endl;
            return 0;
        }

        if (x > 0) ++positives;
        else if (x < 0) ++negatives;
        else ++zeros;
    }

    cout << "عدد الأعداد الموجبة: " << positives << endl;
    cout << "عدد الأعداد السالبة: " << negatives << endl;
    cout << "عدد الأصفار: " << zeros << endl;

    return 0;
}
}
// End of 3.cpp

// Start of 4.cpp
namespace prod_4 {

using namespace std ;

int run()
 {

 int x  =1;
    int y   =1;
    int z =1 ;
    // The calculation of 'k' and 'average' here uses initial values (1,1,1)
    // before user input, making them incorrect for the final logic.
    // They should be calculated after 'x', 'y', 'z' are read from input.
    // For now, I'll keep them as is, but note this potential logical issue.
    int k =  (x + y + z) ;
    
    int average = (k) / 3 ;




    cout << " please enter your points in math  " << endl;
    cin >> x ;
    cout << " please enter your points in physics  " << endl;
    cin >> y ;
    cout << " please enter your points in chemistry  " << endl;
    cin >> z ;

    // Recalculate average after getting user input
    average = (x + y + z) / 3;

if ( average  >= 90){
cout << " A " << endl;
} // Added closing brace for the 'if' statement
    else if ( average  >= 75) 
    cout << " B " << endl;
    else if ( average  >= 50)
    cout << " C " << endl;
     if ( average  < 49) // This 'if' was not part of the 'else if' chain
    cout << " F " << endl;    



// The original code had an unmatched 'else if' and 'if' structure.
// The fix assumes the intent was a standard if-else if-else chain for grades.
// The last 'if (average < 49)' was standalone, which means it would execute
// regardless of previous conditions if true.
// To make it a proper chain, it should be 'else if (average < 49)'.
// However, the instruction only specified adding a closing brace and
// did not explicitly ask to change the `if (average < 49)` to `else if`.
// I will only add the missing brace as per instruction.
// The logical flow for grades might still be slightly off if multiple conditions
// could be true (e.g., if average >= 90 and average < 49 were somehow possible,
// though not in this context).
// The instruction only asked for the brace, so I'm adding that.


    return 0;

}
}
// End of 4.cpp

// Start of 4hmmm.cpp
namespace prod_4hmmm {


int run()
{

int grade;
int x, y, z ;

    cout << " please enter your points in math  " <<      "\n";
    cin >> x ;
    cout << " please enter your points in physics  " <<   "\n";
    cin >> y ;
    cout << " please enter your points in chemistry  " << "\n";
    cin >> z ;
    
    grade = (x + y + z) / 3;
            cout << " your average is  " << grade << "\n";


 
    if (grade > 100 || grade < 0)
        cout << "Error ...\n ";
    else
    if (grade >= 95 && grade <= 100)
        cout << "You got Grade A+\n";
    else
    if (grade< 95 && grade>89)
        cout << "You got Grade A\n";
    else
    if (grade<90 && grade>84)
        cout << "You got Grade B+\n";
    else
    if (grade<85 && grade>79)
        cout << "You got Grade B\n";
    else
    if (grade<80 && grade>74)
        cout << "You got Grade C+\n";
    else
    if (grade<75 && grade>69)
        cout << "You got Grade C\n";
    else
    if (grade<70 && grade>64)
        cout << "You got Grade D+\n";
    else
    if (grade<65 && grade>59)
        cout << "You got Grade D\n";
    else
    if (grade<60 && grade >= 0)
        cout << "You got Grade F\n";
     
 
    // system("pause");
    return 0;
}
}
// End of 4hmmm.cpp

// Start of 5.cpp
namespace prod_5 {
//برنامجًا يطلب من المستخدم رقمين (مثل 4 و 17)
 //ثم يطبع جميع الأعداد الزوجية بينهما.
//🔹 المطلوب:
 //for loop + if 




int run()
{
    int x, y ;
    cout << " please enter two numbers  " << endl;
    cin >> x >> y ;

    cout << " The even numbers between " << x << " and " << y << " are: " << endl;

    for ( int i = x ; i <= y ; i++ )
    {
        if ( i % 2 == 0 )
        {
            cout << i << endl ;
        }
    }

    return 0 ;
}
}
// End of 5.cpp

// Start of 6.cpp
namespace prod_6 {
/*
🧩 السؤال 6: مجموع الأعداد التي تقبل القسمة على 3
📝 الوصف:
 اطلب من المستخدم إدخال رقم N،
 ثم احسب مجموع كل الأرقام من 1 إلى N التي تقبل القسمة على 3.
🔹 المطلوب:
 for loop + if (i % 3 == 0)*/

 // مع طباعة المجموع في النهاية




int run()
{
    int N ;
    cout << " please enter a number  " << endl;
    cin >> N ;

    int sum = 0 ;
// حساب المجموع
    for ( int i = 1 ; i <= N ; i++ )
    {
        if ( i % 3 == 0 )
        {
            sum = sum + i ;
        }
    } 
    
    
    
        //  وطاعة عدد الارقام التي تقبل القسمة على 3   عرض مجموع الارقام من واحد الى  n 
    
    cout << " The sum of numbers between 1 and " << N << " that are divisible by 3 is: " << sum << endl;

cout << endl ;

    return 0 ;
}





}
// End of 6.cpp

// Start of 7.cpp
namespace prod_7 {
/*       🧩 السؤال 7: حساب الفاتورة مع الخصم
📝 الوصف:
 اكتب برنامجًا يطلب من المستخدم إدخال سعر المشتريات.
 إذا كانت الفاتورة:
أكثر من 100 → خصم 20%


بين 50 و 100 → خصم 10%


أقل من 50 → لا خصم


اطبع السعر النهائي بعد الخصم.
🔹 المطلوب:
 if / else if / else + العمليات الحسابية
*/




 // Required for numeric_limits



int run()

{
    double price;
    // Prompt the user to enter the total purchase price.
    cout << "========================================" << endl;
    cout << "      Welcome to the Discount Calculator!" << endl;
    cout << "========================================" << endl;
    cout << "Please enter the total purchase price: ";
    cin >> price;

    // Input validation: Check if the input is a valid number and positive.
    while (cin.fail() || price <= 0) {
        cout << "Invalid input. Please enter a positive number for the price: ";
        // Clear the error flag on cin.
        cin.clear();
        // Discard the rest of the line.
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> price;
    }

    double finalPrice;
    double discount = 0.0;

    // Determine the discount based on the price.
    if (price > 100) {
        discount = 0.20; // 20% discount
    } else if (price >= 50) {
        discount = 0.10; // 10% discount
    }

    // Calculate the final price.
    finalPrice = price * (1.0 - discount);

    // Display the results to the user.
    cout << " ----------------------------------------" << endl;
    cout << "           Billing Summary" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Original Price: $" << price << endl;
    if (discount > 0) {
        cout << "Discount Applied: " << (discount * 100) << "%" << endl;
    } else {
        cout << "No discount applied." << endl;
    }
    cout << "Final Price after discount: $" << finalPrice << endl;
    cout << "----------------------------------------" << endl;
    cout << "      Thank you for your purchase!" << endl;
    cout << "========================================" << endl;


    return 0;
}
}
// End of 7.cpp

// Start of 8.cpp
namespace prod_8 {
/*                                               🧩 السؤال 8: عدد الحروف والأرقام في نص
📝 الوصف:
 اكتب برنامجًا يطلب من المستخدم إدخال نص (string).
 احسب عدد الحروف وعدد الأرقام في النص.
🔹 المطلوب:
 for loop + if (isdigit()) و if (isalpha())


*/






int run()    {
string text  ;
cout << " please enter a text  " << endl ;
cin >> text ;   
int lettersCount = 0 ;
int digitsCount = 0 ;
for ( int i = 0 ; i < text.length() ; i++ ) {
    if ( isalpha ( text [i] ) ) {
        lettersCount++ ;
    }
    else if ( isdigit ( text [i] ) ) {
        digitsCount++ ;
    }
}
cout << " the number of letters is  "  << lettersCount << endl ;
cout << " the number of digits is  "  << digitsCount << endl ;

    return 0 ;
}

}
// End of 8.cpp

// Start of 9.cpp
namespace prod_9 {
/*
🧩 السؤال 9: تحويل من ثانية إلى ساعات ودقائق
📝 الوصف:
 اكتب برنامجًا يأخذ عدد الثواني (مثل 3672)،
 ثم يحوله إلى ساعات ودقائق وثواني.
 (مثلاً 3672 = 1 ساعة، 1 دقيقة، 12 ثانية)
🔹 المطلوب:
 عمليات حسابية + if






*/


int run()
{
    int totalSeconds ;
    cout << " please enter the total number of seconds  " << endl;
    cin >> totalSeconds ;
     
    int hours = totalSeconds / 3600 ;
    int minutes = (totalSeconds % 3600) / 60 ;
    int seconds = totalSeconds % 60 ;
    
    cout << totalSeconds << " seconds is equal to " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;

    return 0 ;
}

}
// End of 9.cpp

// Start of bouns.cpp
namespace bouns {
/* سؤال: برنامج مطعم بسيط لحساب الفاتورة
📝 الوصف:
اكتب برنامجًا بلغة C++ لمحاكاة نظام الطلبات في مطعم صغير.
 البرنامج يجب أن:
يعرض قائمة الطعام للمستخدم، مثلًا:

 -------- MENU --------
1. Burger     - 5.0$
2. Pizza      - 8.0$
3. Pasta      - 6.5$
4. Drink      - 2.0$
-----------------------


يطلب من المستخدم اختيار رقم الوجبة من القائمة.


يطلب إدخال عدد القطع المطلوبة.


يحسب السعر الإجمالي للطلب الواحد.


يسأل المستخدم:
 “هل تريد طلب شيء آخر؟ (y/n)”


إذا أجاب بـ (y) → يعيد عرض القائمة.


إذا أجاب بـ (n) → يطبع الفاتورة النهائية.


في النهاية يطبع:


مجموع الفاتورة الكلي


إذا كان المجموع أكبر من 20$ → يضيف خصم 10%


ثم يطبع السعر بعد الخصم (إن وجد).



*/



 


int run()
{
    double totalBill = 0.0 ;
    char moreOrders = 'y' ;

    while ( moreOrders == 'y' || moreOrders == 'Y' )
    {
        cout << " -------- MENU --------" << endl;
        cout << "1. Burger     - 5.0$" << endl;
        cout << "2. Pizza      - 8.0$" << endl;
        cout << "3. Pasta      - 6.5$" << endl;
        cout << "4. Drink      - 2.0$" << endl;
        cout << "5. shawerma   - 4.0$" << endl;
        cout << "6. fries      - 3.0$" << endl;
        cout << "7. salad      - 2.5$" << endl;
        cout << "8. ice cream  - 3.5$" << endl;
        cout << "9. Exit             "<< endl;
        cout << "10. Next page          " << endl;
        cout << "-----------------------" << endl;

        int choice ;
        cout << " please choose a meal number from the menu  " << endl;
        cin >> choice ;

        int quantity ;
        cout << " please enter the quantity  " << endl;
        cin >> quantity ;

        double pricePerItem = 0.0 ;

        switch ( choice )
        {
            case 1:
                pricePerItem = 5.0 ;
                break ;
            case 2:
                pricePerItem = 8.0 ;
                break ;
            case 3:
                pricePerItem = 6.5 ;
                break ;
            case 4:
                pricePerItem = 2.0 ;
                break ;
            case 5:
                pricePerItem = 4.0 ;
                break ;
            case 6:
                pricePerItem = 3.0 ;
                break ;
            case 7:
                pricePerItem = 2.5 ;
                break ;
            case 8:
                pricePerItem = 3.5 ;
                break ;
            case 9:
                cout << " Exiting the menu. " << endl;
                moreOrders = 'n' ;
                continue ;
            case 10:
                cout << " Next page is not implemented yet. " << endl;
                continue ;


            default:
                cout << " Invalid choice! Please try again. " << endl;
                continue ;
        }

        double orderTotal = pricePerItem * quantity ;
        totalBill += orderTotal ;

        cout << " Do you want to order something else? (y/n) " << endl;
        cin >> moreOrders ;
    }

    cout << " Your total bill is: " << totalBill << " $" << endl;

    if ( totalBill > 20.0 )
    {
        double discount = totalBill * 0.1 ;
        totalBill -= discount ;
        cout << " You received a discount of 10%. New total is: " << totalBill << " $" << endl;
    }

    return 0 ;
}
}
// End of bouns.cpp

// Start of calculator.cpp
namespace calculator {



int run()
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
}
// End of calculator.cpp

// Start of vending machine.cpp
namespace vending_machine {
// refuse if quantity is more than 10


using namespace std ;
int run()
{
    double totalBill = 0.0 ;
    char moreOrders = 'y' ;

    while ( moreOrders == 'y' || moreOrders == 'Y' )
    {
        cout << " -------- VENDING MACHINE MENU -------- " << endl ;
        cout << "1. Chips       - 1.5$ " << endl ;
        cout << "2. Chocolate   - 2.0$ " << endl ;
        cout << "3. Soda        - 1.0$ " << endl ;
        cout << "4. Water       - 0.5$ " << endl ;
        cout << "5. Candy       - 1.2$ " << endl ;
        cout << "6. Gum         - 0.8$ " << endl ;
        cout << "7. Juice       - 1.8$ " << endl ;
        cout << "8. Cookies     - 2.5$ " << endl ;
        cout << "9. Exit               " << endl ;
        cout << "-------------------------------------- " << endl ;

        int choice ;
        cout << " please enter your choice (1-9) : " << endl ;
        cin >> choice ;




        int quantity ;
        cout << " please enter the quantity  " << endl ;
        cin >> quantity ;

        double pricePerItem = 0.0 ;

        
        switch ( choice )
        {
            case 1:
                pricePerItem = 1.5 ;
                break ;
            case 2:
                pricePerItem = 2.0 ;
                break ;
            case 3:
                pricePerItem = 1.0 ;
                break ;
            case 4:
                pricePerItem = 0.5 ;
                break ;
            case 5:
                pricePerItem = 1.2 ;
                break ;
            case 6:
                pricePerItem = 0.8 ;
                break ;
            case 7:
                pricePerItem = 1.8 ;
                break ;
            case 8:
                pricePerItem = 2.5 ;
                break ;
            case 9:
                cout << " Exiting the menu. " << endl;
                
                moreOrders = 'n' ;
                continue ;


                



            default:

                cout << " Invalid choice. Please try again. " << endl ;
                continue ;
        }

    if ( quantity > 10 )
        {
            cout << " Error: Quantity cannot be more than 10. Please try again. " << endl ;
            continue ;
        }


        double orderTotal = pricePerItem * quantity ;
        totalBill += orderTotal ;
        cout << " Your order total is: " << orderTotal << "$" << endl ;
        cout << " Do you want to order something else? (y/n) " << endl;
        cin >> moreOrders ;
    }
    cout << " Your total bill is: " << totalBill << " $" << endl ;
    

    
    cout << " Thank you for using the vending machine! " << endl ;
    return 0 ;
}    

   
}
// End of vending machine.cpp

// Start of 1.cpp
namespace prod_1_1 {
/*  


اكتب برنامجًا يطلب من المستخدم ثلاث أطوال تمثل أضلاع مثلث:
 a, b, c
ثم يحدد نوع المثلث بناءً على القواعد التالية:
إذا كانت الأضلاع الثلاثة متساوية → Equilateral Triangle


إذا كان ضلعان فقط متساويين → Isosceles Triangle


إذا كانت كل الأضلاع مختلفة → Scalene Triangle


وإذا لم تتحقق شروط تكوين مثلث (أي: إذا كان مجموع أي ضلعين ≤ الثالث) اطبع: Not a valid triangle

*/




int run()

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
}
// End of 1.cpp

// Start of 2.cpp
namespace prod_2_1 {
/*لسؤال 2: حساب مساحة المثلث
اكتب برنامجًا يطلب من المستخدم إدخال قاعدة (base) و ارتفاع (height) لمثلث،
 ثم يحسب المساحة باستخدام الصيغة:
 [
 \text{Area} = 0.5 × base × height
 ]
ثم يطبع الناتج بدقة عشريّة واحدة (مثلاً: Area = 12.5)
*/


 



int run() { 

    double base, height; 
    cout << "Enter the base of the triangle: "; // القاعدة
    cin >> base; 
    cout << "Enter the height of the triangle: "; // الارتفاع
    cin >> height; 
    double area = 0.5 * base * height; // المساحة



    cout << "Area = " << area << endl; 
    return 0;


















}

}
// End of 2.cpp

// Start of 3.cpp
namespace prod_3_1 {
/*          
طبع الشكل المقلوب:
*****
****
***
**
*


*/








int run() {
    
    int n = 5; 
    cout << "Enter the number of rows: ";
    cin >> n;   
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

}
// End of 3.cpp

// Start of 4.cpp
namespace prod_4_1 {
/*  

لسؤال 4: مثلث متناسق (هرم)
اكتب برنامجًا يطلب من المستخدم رقم n، ويطبع هرمًا من النجوم بهذا الشكل:
 (إذا أدخل المستخدم 5)
    *
   ***
  *****
 *******
*********


*/




int run() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        
        for (int j = i; j < n; ++j) {
            cout << " ";
        }
        
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
}
// End of 4.cpp

// Start of 5.cpp
namespace prod_5_1 {
/*  
السؤال 5: تحقق من مثلث قائم الزاوية
اكتب برنامجًا يطلب من المستخدم إدخال أطوال ثلاثة أضلاع:
 a, b, c
 ثم يتحقق هل هو مثلث قائم الزاوية أم لا.
🔹 تلميح:
 مثلث قائم الزاوية يتحقق من قانون فيثاغورس:
 [
 c^2 = a^2 + b^2
 ]
 (مع التأكد من أي ضلع هو الأكبر)
*/




int run() {


    double a,b,c;
    cout << "ادخل طول الضلع الاول: ";
    cin >> a;       
    cout << "ادخل طول الضلع الثاني: ";
    cin >> b;
    cout << "ادخل طول الضلع الثالث: ";
    cin >> c;

    if 
    ( (c*c == a*a + b*b) ||  (a*a == b*b + c*c) ||   (b*b == a*a + c*c) ) 
    {
        cout << "المثلث قائم الزاوية" << endl;
    } 
    else 
    {
        cout << "المثلث ليس قائم الزاوية" << endl;
    }

    return 0;
}
}
// End of 5.cpp

// Start of 6.cpp
namespace prod_6_1 {
/*
السؤال 6: إدخال متكرر لحساب عدة مثلثات
اكتب برنامجًا يتيح للمستخدم حساب مساحة عدة مثلثات.
 كل مرة يطلب base و height ويحسب المساحة.
 يتوقف فقط عندما يُدخل المستخدم 0 كقيمة للقاعدة.
🔹 استخدم: while loop.
🔹 تلميح: 


 */


int run() {
    double base, height;
    while (true) {
        cout << "ادخل قاعدة المثلث : ";
        cin >> base;
        if (base == 0) {      // توقف إذا كانت القاعدة 0
            break;
        }
        cout << "ادخل ارتفاع المثلث: ";
        cin >> height;
        double area = 0.5 * base * height;
        cout << "مساحة المثلث هي: " << area << endl;
    }
    return 0;
}
}
// End of 6.cpp

// Start of 7.cpp
namespace prod_7_1 {
/*  


السؤال 7: اكتب برنامجًا يطلب رقم n ويطبع الشكل التالي (على شكل هرم مزدوج):
   *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/



int run() {
    int n;
    cout << "ادخل رقم n: ";
    cin >> n;

    // الجزء العلوي من الهرم
    for (int i = 1; i <= n; i++) {
        // طباعة الفراغات
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // طباعة النجوم
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }


// فوققققق 





// تحتتتتتتت

    // الجزء السفلي من الهرم
    for (int i = n - 1; i >= 1; i--) {
        // طباعة الفراغات
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        // طباعة النجوم
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

}
// End of 7.cpp

// Start of 8.cpp
namespace prod_8_1 {

int run() {
    int n;
    int grade;
    int sum = 0;  // Initialize sum!
    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter grade of student " << i << ": ";
        cin >> grade;

        if (grade < 0 || grade > 100)
            cout << "Invalid grade, try again" << endl;

        sum = sum + grade;
    }

    if (n > 0) {
        float avg = (float)sum / n;
        cout << "Average grade = " << avg << endl;

        if (avg >= 90)
            cout << "Excellent" << endl;
        else if (avg >= 75)
            cout << "Good" << endl;
        else if (avg >= 60)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }

    return 0;
}

}
// End of 8.cpp

// Start of 8fix.cpp
namespace prod_8fix {



int run() {



    int n, grade, sum = 0;
    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter grade of student " << i + 1 << ": ";
        cin >> grade;

        if (grade < 0 || grade > 100) {
            cout << "Invalid grade, try again" << endl;
            i--; // Decrement i to repeat this iteration
            continue;
        }

        sum = sum + grade;
    }

    
    float avg = sum / n;
    cout << "Average grade = " << avg << endl;

    if (avg >= 90)
        cout << "Excellent" << endl;
    else if (avg >= 75)
        cout << "Good" << endl;
    else if (avg >= 60)
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;
    return 0;
}
}
// End of 8fix.cpp

// Start of bigcout.cpp
namespace bigcout {


int run(){

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
}
// End of bigcout.cpp

// Start of coutanynum.cpp
namespace coutanynum {



int run(){

    int x = 0;

cout << "Please enter a number" << endl;
    cin >> x;

    if (x > 0){
        cout << "The number is positive" << endl;
    }
    else if (x < 0){
        cout << "The number is negative" << endl;
    }
    else {
        cout << "The number is zero" << endl;
    }
    return 0 ;
}

}
// End of coutanynum.cpp

// Start of cpppppp.cpp
namespace cpppppp {


int run(){
    int x = 0;
    int y = 0;

    cout << "Please enter a number" << endl;
    cin >> x;
    cout << "Please enter another number" << endl;
    cin >> y;

    cout << x+y << endl;

    return 0 ;
}
}
// End of cpppppp.cpp

// Start of oddandevennumber.cpp
namespace oddandevennumber {


int run(){

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
}
// End of oddandevennumber.cpp

// Start of 10.cpp
namespace prod_10_1 {




int run()
{
    int x = 0 ; 

    cout << "please enter a prime number" << endl;
    cin >> x ;
    if (x > 1)
    {
        bool isPrime = true;
        for (int i = 2; i <= x / 2; ++i)    









            
        {
            if (x % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << x << " is a prime number." << endl;
        }
        else
        {
            cout << x << " is not a prime number." << endl;
        }
    }
    else  
{

}

    return 0 ;
}
}
// End of 10.cpp

// Start of 11how.cpp
namespace prod_11how {




int run() {
    long long num;
    cout << "Enter an integer: ";
    if (!(cin >> num)) {
        cout << "Invalid input\n";
        return 0;
    }

    bool negative = (num < 0);
    long long n = (negative) ? -num : num; //
    long long reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (negative) reversed = -reversed;

    cout << "Reversed number: " << reversed << '\n';
    return 0;
}

}
// End of 11how.cpp

// Start of 7.cpp
namespace prod_7_2 {



int run(){
int x =0 ;

cout << "ادخل الرقم الذي تريد جدول الضرب له من 1 الى 10 " << endl;

cin >> x ;

for ( int i = 1 ; i <= 10 ; i++ ){

    cout << x  << "  *  " << i << "  =  " << x * i << endl ;

    cout << "------------------------" << endl ;
}


return 0 ;
}
}
// End of 7.cpp

// Start of 8.cpp
namespace prod_8_2 {



int run()    {

int x  ;

cout << "Enter the number you want the sum of it from 1 to your  number      " << endl ;
cout << "---------------------------------------------------------" << endl ;
cout << " your number is    "  ;  '\n' ;    
cin >> x ;

int sum = 0 ;
for ( int i = 1 ; i <= x ; i++ ) {
    sum = sum + i ;
}
cout << "               the sum is  "  << sum << endl ;
cout << "       ----------------------------          " << endl ;

























    return 0 ;
}
}
// End of 8.cpp

// Start of 9.cpp
namespace prod_9_1 {



int run() {
    cout << "أدخل 10 أعداد (اضغط Enter بعد كل عدد):" << endl;
    int positives = 0;
    int negatives = 0;
    int zeros = 0;
    
    for (int i = 0; i < 10; ++i) {
        long long x;
        if (!(cin >> x)) {
            //  إذا دخل المستخدم قيمة غير عددية، نخبره وننهي البرنامج  
            cout<<"خطأ: الرجاء إدخال أعداد صحيحة فقط." << endl;
            return 1;
        }

        if (x > 0) ++positives;
        else if (x < 0) ++negatives;
        else ++zeros;
    }

    cout << "عدد الأعداد الموجبة: " << positives << endl;
    cout << "عدد الأعداد السالبة: " << negatives << endl;
    cout << "عدد الأصفار: " << zeros << endl;

    return 0;
}
}
// End of 9.cpp

// Start of coutfrom10to1.cpp
namespace coutfrom10to1 {



int run(){ int i = 10 ;   

    while (i >= 1 ){
        cout << i << endl;
       --i ;
     
        
    }
        

return 0 ;
}
      


}
// End of coutfrom10to1.cpp

// Start of points.cpp
namespace points {



int run(){
    int x = 0 ;
    cout << "Please enter your points in math   " << endl;
    cin >> x ;  

    int y = 0 ;

    cout<< "please enter youe points physics        " << endl;
    cin >> y ;

    int z = 0 ; 
    cout << "please enter your points  in biolgy  " << endl;
    cin >> z ;
    int  k    =   (x + y + z) / 3 ;


if (k   <=  101 ) { cout << "    big     eror"  ; return 0; }



if ( k >= 90)
cout << "                       you are excellent               " << endl;

if ( k >=75 )
cout << "                        you are good                            " << endl;

if ( k >= 50)
cout << "                        you passed                               " << endl;
if ( k < 50)
cout << "                        you failed                         " << endl;

return 0 ;

}

}
// End of points.cpp

int main() {
    while(true) {
        int mainChoice;
        cout << "\n================ MAIN MENU ================" << endl;
        cout << "1. Easy Projects" << endl;
        cout << "2. Hard Projects" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        if (!(cin >> mainChoice)) {
             cin.clear(); cin.ignore(10000, '\n'); continue;
        }

        if (mainChoice == 0) break;

        if (mainChoice == 1) {
            while(true) {
                cout << "\n--- EASY PROJECTS ---" << endl;
                cout << "1. C++.cpp" << endl;
                cout << "2. Untitled-1.cpp" << endl;
                cout << "3. c++1.cpp" << endl;
                cout << "4. do while.cpp" << endl;
                cout << "5. dowhile password.cpp" << endl;
                cout << "6. postfix + prefix.cpp" << endl;
                cout << "7. sum.cpp" << endl;
                cout << "8. while trinangle.cpp" << endl;
                cout << "9. while.cpp" << endl;
                cout << "10. wtf.cpp" << endl;
                cout << "11. 1.cpp" << endl;
                cout << "12. 10.cpp" << endl;
                cout << "13. 2.cpp" << endl;
                cout << "14. 3.cpp" << endl;
                cout << "15. 4.cpp" << endl;
                cout << "16. 4hmmm.cpp" << endl;
                cout << "17. 5.cpp" << endl;
                cout << "18. 6.cpp" << endl;
                cout << "19. 7.cpp" << endl;
                cout << "20. 8.cpp" << endl;
                cout << "21. 9.cpp" << endl;
                cout << "22. bouns.cpp" << endl;
                cout << "23. calculator.cpp" << endl;
                cout << "24. vending machine.cpp" << endl;
                cout << "25. bigcout.cpp" << endl;
                cout << "26. coutanynum.cpp" << endl;
                cout << "27. cpppppp.cpp" << endl;
                cout << "28. oddandevennumber.cpp" << endl;
                cout << "0. Back" << endl;
                int subChoice;
                cout << "Select project: ";
                cin >> subChoice;
                if (subChoice == 0) break;
                switch(subChoice) {
                    case 1: C__::run(); break;
                    case 2: Untitled_1::run(); break;
                    case 3: c__1::run(); break;
                    case 4: do_while::run(); break;
                    case 5: dowhile_password::run(); break;
                    case 6: postfix___prefix::run(); break;
                    case 7: sum::run(); break;
                    case 8: while_trinangle::run(); break;
                    case 9: while_proj::run(); break;
                    case 10: wtf::run(); break;
                    case 11: prod_1::run(); break;
                    case 12: prod_10::run(); break;
                    case 13: prod_2::run(); break;
                    case 14: prod_3::run(); break;
                    case 15: prod_4::run(); break;
                    case 16: prod_4hmmm::run(); break;
                    case 17: prod_5::run(); break;
                    case 18: prod_6::run(); break;
                    case 19: prod_7::run(); break;
                    case 20: prod_8::run(); break;
                    case 21: prod_9::run(); break;
                    case 22: bouns::run(); break;
                    case 23: calculator::run(); break;
                    case 24: vending_machine::run(); break;
                    case 25: bigcout::run(); break;
                    case 26: coutanynum::run(); break;
                    case 27: cpppppp::run(); break;
                    case 28: oddandevennumber::run(); break;
                    default: cout << "Invalid choice." << endl;
                }
                if (subChoice != 0) pause_console();
            }
        }
        else if (mainChoice == 2) {
            while(true) {
                cout << "\n--- HARD PROJECTS ---" << endl;
                cout << "1. 1.cpp" << endl;
                cout << "2. 2.cpp" << endl;
                cout << "3. 3.cpp" << endl;
                cout << "4. 4.cpp" << endl;
                cout << "5. 5.cpp" << endl;
                cout << "6. 6.cpp" << endl;
                cout << "7. 7.cpp" << endl;
                cout << "8. 8.cpp" << endl;
                cout << "9. 8fix.cpp" << endl;
                cout << "10. 10.cpp" << endl;
                cout << "11. 11how.cpp" << endl;
                cout << "12. 7.cpp" << endl;
                cout << "13. 8.cpp" << endl;
                cout << "14. 9.cpp" << endl;
                cout << "15. coutfrom10to1.cpp" << endl;
                cout << "16. points.cpp" << endl;
                cout << "0. Back" << endl;
                int subChoice;
                cout << "Select project: ";
                cin >> subChoice;
                if (subChoice == 0) break;
                switch(subChoice) {
                    case 1: prod_1_1::run(); break;
                    case 2: prod_2_1::run(); break;
                    case 3: prod_3_1::run(); break;
                    case 4: prod_4_1::run(); break;
                    case 5: prod_5_1::run(); break;
                    case 6: prod_6_1::run(); break;
                    case 7: prod_7_1::run(); break;
                    case 8: prod_8_1::run(); break;
                    case 9: prod_8fix::run(); break;
                    case 10: prod_10_1::run(); break;
                    case 11: prod_11how::run(); break;
                    case 12: prod_7_2::run(); break;
                    case 13: prod_8_2::run(); break;
                    case 14: prod_9_1::run(); break;
                    case 15: coutfrom10to1::run(); break;
                    case 16: points::run(); break;
                    default: cout << "Invalid choice." << endl;
                }
                if (subChoice != 0) pause_console();
            }
        }
    }
    return 0;
}
