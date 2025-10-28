/*
🧩 السؤال 9: تحويل من ثانية إلى ساعات ودقائق
📝 الوصف:
 اكتب برنامجًا يأخذ عدد الثواني (مثل 3672)،
 ثم يحوله إلى ساعات ودقائق وثواني.
 (مثلاً 3672 = 1 ساعة، 1 دقيقة، 12 ثانية)
🔹 المطلوب:
 عمليات حسابية + if






*/
#include <iostream>
using namespace std;
int main ()
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
