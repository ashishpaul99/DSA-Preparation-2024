// 02- Print all pairs
// ->using nested loop
#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int arr[n] = {10, 20, 30};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")"
                 << " ";
        }
        cout << endl;
    }
}

// Output:
// (10,10) (10,20) (10,30)
// (20,10) (20,20) (20,30)
// (30,10) (30,20) (30,30)