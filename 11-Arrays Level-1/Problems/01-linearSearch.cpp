// 1. Linear Search
#include <iostream>
using namespace std;
void linearSearch(int arr[], int key, int n)
{
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            cout << "key found at index" << i << endl;
        }
    }
    if (flag == 0)
    {
        cout << "key not found" << endl;
    }
}
int main()
{
    int size = 5;
    int arr[size] = {5, 4, 6, 7, 9};
    int key = 7;
    linearSearch(arr, key, size);
}

// Output:
// key found at index 3
