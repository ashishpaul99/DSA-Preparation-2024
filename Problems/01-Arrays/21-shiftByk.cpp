//  21.1 shift array by k using temporary array
// ->store last two elements in an temparory array.
// ->move through an array.
// ->swap --> arr[j]<--> arr[j-k]

// code
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 7;
//     int arr[] = {1, 2, 3, 4, 5, 6, 7}; // Removed the size specification as it's not allowed in C++
//     int k = 3;
//     int j = n - 1;
//     int temp[k];
//     for (int i = 0; i < k; i++)
//     {
//         temp[i] = arr[j - i]; // Corrected the assignment of temp array
//     }

//     for (int i = n - 1; i >= k; i--)
//     {
//         arr[i] = arr[i - k]; // Shift elements to the right by k positions
//     }

//     for (int i = 0; i < k; i++)
//     {
//         arr[i] = temp[k - i - 1]; // Copy elements from temp back to the beginning of the array
//     }

//     // print the array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// Output:
// 5 6 7 1 2 3 4

// ->alternative
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 7;
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int k = 3;
//     int j = n - 1;
//     int temp[k];
//     int i = 0;

//     // Store the last k elements in temp array
//     while (i < k)
//     {
//         temp[i] = arr[j - i];
//         i++;
//     }

//     i = n - 1;
//     // Shift elements to the right by k positions
//     while (i >= k)
//     {
//         arr[i] = arr[i - k];
//         i--;
//     }

//     i = 0;
//     // Copy elements from temp back to the beginning of the array
//     while (i < k)
//     {
//         arr[i] = temp[k - i - 1];
//         i++;
//     }

//     // Print the array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }


// alternative:
// #include <iostream>
// using namespace std;
// void rotateArray(int arr[], int temp[], int n,int k)
// {
//    int j = n - 1;
//    int i = 0;
//    while (j >= 0)
//    {

//       if (j < k)
//       {
//          arr[j]=temp[i];
//          i++;
//       }
//       else
//       {
//          arr[j]=arr[j - k];
//       }
//       j--;
//    }

//    // print array
//    for (int i = 0; i < n; i++)
//    {
//       cout << arr[i] << " ";
//    }
// }
// int main()
// {
//    int n = 6;
//    int arr[n] = {1, 2, 3, 4, 5,6};
//    int k=3;
//    int temp[k];
//    for (int i = 0; i < k; i++)
//    {
//       temp[i] = arr[n - (i+1)];
//    }
//    rotateArray(arr, temp, n,k);
// }

// 21.2 shift array by k using modulus approach
// logic:- newIndex=(index+k)%n

// code:
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k =2 ;
    int index = 0;
    int n = arr.size();
     vector<int> ans(n);
    while (index < n)
    {
        int newIndex = (index + k) % n;
        ans[newIndex] = arr[index];
        index++;
    }

    arr=ans;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//=>alternative:
// #include <iostream>
// using namespace std;
// void rotateArray(int arr[], int temp[], int n,int k)
// {
//    int index=0;
//    while (index<n)
//    {
//       temp[(index+k)%6]=arr[index];
//       index++;
//    }

//    // print array
//    for (int i = 0; i < n; i++)
//    {
//       cout << temp[i] << " ";
//    }
// }
// int main()
// {
//    int n = 6;
//    int arr[n] = {1, 2, 3, 4, 5,6};
//    int k=3;
//    int temp[k];
//    rotateArray(arr,temp, n,k);
// }





