//create a table with 3 rows and 5 columns each.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ()
{
    vector<vector<string>> table;
    vector<string> row1 = {"moris", "moris", "moris", "moris", "moris"};
    vector<string> row2 = {"alex", "alex", "alex", "alex", "alex"};
    vector<string> row3 = {"gomez", "gomez", "gomez", "gomez", "gomez"};
    table.push_back(row1);
    table.push_back(row2);
    table.push_back(row3);
    for (int i = 0; i < table.size(); i++)
    {
        for (int j = 0; j < table[i].size(); j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
