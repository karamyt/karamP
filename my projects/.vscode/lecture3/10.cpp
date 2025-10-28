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



#include <iostream>
using namespace std; 

int main ()
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