/*  
) ماكينة القهوة – فروع
لديك مصفوفة ثنائية الأبعاد تمثل مبيعات القهوة:
الصفوف = الفروع
الأعمدة = أنواع المشروبات
احسب:
مجموع مبيعات كل فرع
أكثر مشروب تم بيعه في جميع الفروع


*/
#include <iostream> 
#include <vector>
using namespace std ;
int main() 
{
    vector<vector<int>> sales = 
    {
        {30, 20, 50},  
        {40, 60, 10},  
        {25, 35, 40},
    };
           
    for (size_t i = 0; i < sales.size(); i++) 
    {
        int branch_total = 0;
        for (size_t j = 0; j < sales[i].size(); j++) 
        {
            branch_total += sales[i][j];
        }
        cout << "مجموع مبيعات الفرع " << i + 1 << ": " << branch_total << endl;
    }

    
    vector<int> drink_totals(sales[0].size(), 0);
    for (size_t i = 0; i < sales.size(); i++) 
    {
        for (size_t j = 0; j < sales[i].size(); j++) 
        {
            drink_totals[j] += sales[i][j];
        }
    }

    int max_drink_index = 0;
    for (size_t j = 1; j < drink_totals.size(); j++) 
    {
        if (drink_totals[j] > drink_totals[max_drink_index]) 
        {
            max_drink_index = j;
        }
    }

    cout << "أكثر مشروب تم بيعه هو المشروب رقم " << max_drink_index + 1 << " بعدد مبيعات: " << drink_totals[max_drink_index] << endl;

    return 0;
}