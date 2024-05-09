// 5. shift element of array by 1
https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

Solution-1: 
void rotate(int arr[], int n)
{  
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;   
}


Solution-2
// how to approach?
// 1. Initialize two pointers, left and right, to the second-to-last and last indices of the array, respectively.
// 2. Store the value of the last element of the array (arr[right]) in a temporary variable temp.
// 3. Iterate through the array from right to left (from left to 0):
// ->Assign the value of the element at arr[left] to the element at arr[right].
// ->Move the pointers left and right one position to the left.
// 4. After the loop, assign the value stored in temp to the first element of the array (arr[0]), effectively moving the last element of the array to the beginning.
// 5. Finally, print the modified array.

// Code:
#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int arr[n] = {10, 20, 30, 40, 50, 60};

    int left = n - 2, right = n - 1;
    int temp = arr[right];
    while (left >= 0)
    {
        arr[right] = arr[left];

        left--;
        right--;
    }
    arr[0] = temp;

    // printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Output:
// 60 10 20 30 40 50
