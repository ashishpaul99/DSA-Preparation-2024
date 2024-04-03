// 4. Minimum number in an array
// ->using limits.h header file
// ->using INT_MIN
#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {4, 3, 5, 2, 7};
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "maximum value in an array: " << max << endl;
}

// Output:
// maximum value in an array: 7