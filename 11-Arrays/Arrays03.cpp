// 03. Arrays and Fuctions
// 1. Printing Array by using fuction
// #include<iostream>
// using namespace std;
// void printArray(int arr[], int size){

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

// }
// int main(){
//     int arr[5]={2,5,6,4,8};
//     int size=5;

// fuction call
//     printArray(arr,size);

// }

// 2. Linear search using fuction
// #include <iostream>
// using namespace std;
// bool linear(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             // found;
//             return true;
//         }
//     }

//     // not found
//     return false;
// }
// int main()
// {
//     int arr[5] = {2, 5, 6, 4, 5};
//     int size = 5;
//     int key = 5;
//     bool ans=linear(arr, size, key);
//     cout<<ans<<endl;

// }
// Output:
// 1

// // 3. Count 0's and 1's in an array
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[5]={0,1,0,1,1};
//    int size=5;
//    int zerocount=0;
//    int onecount=0;
//    for(int i=0;i<size;i++){
//       if(arr[i]==0){
//         zerocount++;
//       }
//       else if(arr[i]==1){
//         onecount++;
//       }
//    }
//    cout<<zerocount<<endl;
//    cout<<onecount<<endl;

// }

// 4. Min number in array
// #include <iostream>
// #include <limits.h>
// using namespace std;
// int main()
// {
//     int arr[5] = {7, 4, 3,   2,6};
//     int size = 5;
//     int min = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
//     }
//     cout << min << endl;
// }
// Output:2

// 5. Reverse an Array
// #include <iostream>
// #include <limits.h>
// using namespace std;
// void reverseArray(int arr[], int size){
//     int left=0;
//     int right=size-1;
//     // run loop upto left<=right
//     while(left<=right)
//     {
//        swap(arr[left], arr[right]);
//        left++;
//        right--;
//     }

//     // printing array
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

// }
// int main()
// {
//     int arr[5] = {2, 5, 4, 5, 8};
//     int size = 5;
//     reverseArray(arr,size);

// }

// =>using for loop
// #include <iostream>
// #include <limits.h>
// using namespace std;
// void reverseArray(int arr[], int size)
// {
//     int left = 0;
//     int right = size - 1;

//     // using for loop
//     for (int left = 0, right=n-1; left <= right; left++, right--)
//     {
//         swap(arr[left], arr[right]);
//     }

//     // printing array
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[5] = {2, 5, 4, 5, 9};
//     int size = 5;
//     reverseArray(arr, size);
// }

// Output:
// 9 5 4 5 2

// 6. Exterme print in an array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int size = 5;
//     int left = 0;
//     int right = size - 1;
//     while (left <= right)
//     {
//         if (left == right)
//         {
//             cout << arr[left] << " ";
//         }
//         else
//         {
//             cout << arr[left] << " " << arr[right] << " ";
//         }
//         left++;
//         right--;
//     }
// }

// Output:
// 10 50 20 40 30

