#include <iostream>
using namespace std;


int n = 6;



void shape1() {
    cout << "Shape 1: Right triangle (left)\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) cout << "*";
        cout << '\n';
    }
    cout << '\n';
}


void shape2() {
    cout << "Shape 2: Inverted right triangle (left)\n";
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) cout << "*";
        cout << '\n';
    }
    cout << '\n';
}


void shape3() {
    cout << "Shape 3: Right triangle (right)\n";
    for (int i = 1; i <= n; ++i) {
        for (int s = 1; s <= n - i; ++s) cout << ' ';
        for (int j = 1; j <= i; ++j) cout << "*";
        cout << '\n';
    }
    cout << '\n';
}


void shape4() {
    cout << "Shape 4: Inverted right triangle (right)\n";
    for (int i = n; i >= 1; --i) {
        for (int s = 1; s <= n - i; ++s) cout << ' ';
        for (int j = 1; j <= i; ++j) cout << "*";
        cout << '\n';
    }
    cout << '\n';
}



void shape5() {
    cout << "Shape 5: Filled isosceles triangle (pyramid)\n";
    for (int i = 1; i <= n; ++i) {
        for (int s = 1; s <= n - i; ++s) cout << ' ';
        for (int j = 1; j <= 2 * i - 1; ++j) cout << "*";
        cout << '\n';
    }
    cout << '\n';
}



void shape6() {
    cout << "Shape 6: Filled inverted isosceles triangle\n";
    for (int i = n; i >= 1; --i) {
        for (int s = 1; s <= n - i; ++s) cout << ' ';
        for (int j = 1; j <= 2 * i - 1; ++j) cout << "*";
        cout << '\n';
    }
    cout << '\n';
}



void shape7() {
    cout << "Shape 7: Hollow isosceles triangle\n";
    for (int i = 1; i <= n; ++i) {
        for (int s = 1; s <= n - i; ++s) cout << ' ';
        for (int j = 1; j <= 2 * i - 1; ++j) {
            if (i == 1 || i == n || j == 1 || j == 2 * i - 1) cout << "*";
            else cout << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

void shape8() {
    cout << "Shape 8: Hollow right triangle (left)\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (i == 1 || i == n || j == 1 || j == i) cout << "*";
            else cout << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}




void shape9() {
    cout << "Shape 9: Number pyramid (rows show 1..i)\n";
    for (int i = 1; i <= n; ++i) {
        for (int s = 1; s <= n - i; ++s) cout << ' ';
        for (int j = 1; j <= i; ++j) cout << j;
        cout << '\n';
    }
    cout << '\n';
}




void shape10() {
    cout << "Shape 10: Number triangle (each row same number)\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) cout << i;
        cout << '\n';
    }
    cout << '\n';
}

int main() {
    // اختاري الحجم المناسب هنا أو خليه ثابت
    // n = 6; // تم تعريفه أعلاه، تغيّريه للعرض
    shape1();
    shape2();
    shape3();
    shape4();
    shape5();
    shape6();
    shape7();
    shape8();
    shape9();
    shape10();
    return 0;
}


