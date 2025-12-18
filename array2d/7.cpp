/*
7) درجات طلاب الصف
لديك 2D Array:
الصفوف = الطلاب
الأعمدة = المواد
احسب:
معدل كل طالب
اسم/رقم الطالب صاحب أعلى معدل

*/
#include <iostream>
    #include <vector>
    using namespace std;
    int main() {
        vector<vector<int>> grades = {
            {85, 90, 78},  
            {88, 76, 92},  
            {90, 91, 89},
        };

        vector<double> student_averages;
        for (size_t i = 0; i < grades.size(); i++) {
            int total = 0;
            for (size_t j = 0; j < grades[i].size(); j++) {
                total += grades[i][j];
            }
            double average = static_cast<double>(total) / grades[i].size();
            student_averages.push_back(average);
            cout << "معدل الطالب " << i + 1 << ": " << average << endl;
        }

        int top_student_index = 0;
        for (size_t i = 1; i < student_averages.size(); i++) {
            if (student_averages[i] > student_averages[top_student_index]) {
                top_student_index = i;
            }
        }

        cout << "الطالب صاحب أعلى معدل هو الطالب رقم " << top_student_index + 1
             << " بمعدل: " << student_averages[top_student_index] << endl;

        return 0;
    }