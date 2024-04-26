// 2. Sort possitive and negative numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     int arr[n] = {2, 3, 6, -5, 4, -1};
//     int index=0,left=0;
//     while(index<n){
//          if(arr[index]>0){
//             index++;
//          }else{
//             swap(arr[index],arr[left]);
//             left++;
//          }
//     }

//     // printing array
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Output:
// -5 -1 6 2 4 3

// Alternative-1:
// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     int arr[n] = {2, 3, 6, -5, 4, -1};
//     int index=0,left=0;
//     for(index=0;index<n;index++){
//         while(arr[index]<0){
//             swap(arr[index],arr[left]);
//             left++;
//         }
//     }

//     // printing array
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Output:
// -5 -1 6 2 4 3

// alternative-2:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 6;
//     int arr[n] = {2, 3, 6, -5, 4, -1};
//     int index = 0, left = 0;
//     while (index < n)
//     {
//         if (arr[index] < 0)
//         {
//             swap(arr[index], arr[left]);
//             left++;
//         }
//         index++;
//     }

//     // printing array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// Output:
// -5 -1 6 2 4 3 

// Alter
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 6;
//     int arr[n] = {-2, 3, 6, -5, 4, -1};
//     int left = 0, right = n - 1;
//     while (left <= right)
//     {
//         while (arr[left] < 0 && left < right)
//         {
//             left++;
//         }
//         while (arr[right] > 0 && left < right)
//         {
//             right--;
//         }

//         if (left <= right)
//         {
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
