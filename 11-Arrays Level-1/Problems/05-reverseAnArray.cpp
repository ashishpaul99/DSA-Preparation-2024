// 5. Reverse an Array
// ->usig two poiner approach.
// ->swaap inbuilt function is used for swapping elements in an array.
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {10, 20, 30, 40, 50};
    int i = 0, j = n - 1;
    // swapping array
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    //printing array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// Output:
// 50 40 30 20 10 