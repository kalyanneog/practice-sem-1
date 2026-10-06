#include <iostream>
using namespace std;
class Expense 
{
public:
    float expenses[12];
    void calculate() 
	{
        float total = 0;
        for (int i = 0; i < 12; i++) 
		{
            total += expenses[i];
        }
        cout << "Yearly Expense: Rs. " << total << endl;
        cout << "Average Monthly Expense: Rs. " << total / 12 << endl;
    }
};
int main() 
   {
    Expense e;
    cout << "Enter expenses for 12 months:" << endl;
    for (int i = 0; i < 12; i++)
    {
        cin >> e.expenses[i];
    }
    e.calculate();
    return 0;
}
