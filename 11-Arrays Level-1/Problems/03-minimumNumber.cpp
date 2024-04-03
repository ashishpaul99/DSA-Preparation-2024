// 3. Minimum number in an array
// ->using limits.h header file
// ->using INT_MAX
#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {4, 3, 5, 2, 7};
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "minimum value in an array: " << min << endl;
}

// Ouput:
// minimum value in an array: 2
