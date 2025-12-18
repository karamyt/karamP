#include <iostream>
#include <vector>
using namespace std;
int main() {
    int num_students;
    cout << "أدخل عدد الطلاب: ";
    cin >> num_students;

    vector<int> grades(num_students);
    for (int i = 0; i < num_students; i++) {
        cout << "أدخل درجة الطالب " << (i + 1) << ": ";
        cin >> grades[i];
    }

    int pass_count = 0;
    int fail_count = 0;

    for (int i = 0; i < num_students; i++) {
        if (grades[i] >= 50) {
            pass_count++;
        } else {
            fail_count++;
        }

        char grade_letter;
        switch (grades[i] / 10) {
            case 10:
            case 9:
                grade_letter = 'A';
                break;
            case 8:
                grade_letter = 'B';
                break;
            case 7:
                grade_letter = 'C';
                break;
            case 6:
            case 5:
                grade_letter = 'D';
                break;
            default:
                grade_letter = 'F';
                break;
        }
        cout << "درجة الطالب " << (i + 1) << ": " << grades[i] << " - التقدير: " << grade_letter << endl;
    }

    cout << "عدد الطلاب الناجحين: " << pass_count << endl;
    cout << "عدد الطلاب الراسبين: " << fail_count << endl;

    return 0;
}