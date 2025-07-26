#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= 1)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
