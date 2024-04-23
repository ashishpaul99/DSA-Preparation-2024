// 4. sort zeros and ones
// 1. counting approach
// ->while is loop is used for sorting zeros and ones.
// #include <iostream>
// using namespace std;
// void sortOnesZeros(int arr[], int n)
// {
//     int zerosCount = 0;
//     int onesCount = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zerosCount++;
//         }
//         else
//         {
//             onesCount++;
//         }
//     }

//        int i=0;
//        while(i<zerosCount){
//           arr[i]=0;
//           i++;

//        }
//        while(i<n){
//           arr[i]=1;
//           i++;
//        }

//     //    printing array
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
// }
// int main()
// {
//     int n = 9;
//     int arr[n] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
//     sortOnesZeros(arr, n);
// }

// Output:
// 0 0 0 0 0 0 1 1 1

// 2. using for loop sorting zeros and ones
// #include <iostream>
// using namespace std;
// void sortOnesZeros(int arr[], int n)
// {
//     int zerosCount = 0;
//     int onesCount = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zerosCount++;
//         }
//         else
//         {
//             onesCount++;
//         }
//     }
//     int i;
//     for (i = 0; i < zerosCount; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int j = i; j < n; j++)
//     {
//         arr[j] = 1;
//     }

//     //    printing array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int n = 9;
//     int arr[n] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
//     sortOnesZeros(arr, n);
// }

// Output:
// 0 0 0 0 0 0 1 1 1

// 3. using two pointer approach
// ->intialize left=0 and right=n-1.
// ->
#include<iostream>
using namespace std;
int main()
{
    int n = 6;
    int arr[n] = {0, 1, 1, 0, 1,0};
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0 & left<right)
        {
            left++;
        }

        while (arr[right] == 1 && left<right)
        {
            right--;
        }

        // swap 0's and 1's
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

    // printing sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// Output:
// 0 0 0 1 1 1          
