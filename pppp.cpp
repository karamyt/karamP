#include <iostream>
#include <vector>
using namespace std;

int main () {
vector <vector<int>> 
matrix  (2, vector<int>(3, 0));
matrix[0][0] = 1;
matrix[1][2] = 5;
for (size_t i = 0; i < matrix.size(); i++) {
    for (size_t j = 0; j < matrix[i].size(); j++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;


    
    


}