/*      
) نظام الحضور
لديك Vector يمثل حضور طالب خلال أيام الأسبوع.
احسب عدد أيام الحضور وأطول حضور متواصل.



*/

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> attendance = {1, 1, 0, 1, 1, 1, 0}; 
int total_days = 0;
int longest_streak = 0;
int current_streak = 0;
    
    for (size_t i = 0; i < attendance.size(); i++)
     {
        if (attendance[i] == 1) {
            total_days++;
            current_streak++;
            if (current_streak > longest_streak) 
            {
                longest_streak = current_streak;
            }
        } else 
        {
            current_streak = 0;
        }
    }

    cout << "عدد أيام الحضور: " << total_days << endl;
    cout << "أطول حضور متواصل: " << longest_streak << endl;

    return 0;
}