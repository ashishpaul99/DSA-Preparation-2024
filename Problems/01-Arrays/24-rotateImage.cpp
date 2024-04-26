// 6. Rotate Image

// 1 2 3                  7 4 1
// 4 5 6       ------>    8 5 2
// 7 8 9                  9 6 3

// 6.1 Solving using extra space
// #include<iostream>
// #include<vector>
// using namespace std;
// void rotateImage(vector<vector<int>> arr){
//    int n=arr.size();
//    vector<vector<int>> ans(n, vector<int>(n,0));

//    for(int i=0;i<n;i++){
//       int k=n-1;
//       for(int j=0;j<arr[i].size();j++){
//           ans[i][j]=arr[k][i];
//           k--;
//       }
//    }

//    arr=ans;

//    // printing array
//    for(int i=0;i<n;i++){
//       for(int j=0;j<ans[i].size();j++){
//          cout<<arr[i][j]<<" ";
//       }
//       cout<<endl;
//    }
// }
// int main(){
//   vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
//   rotateImage(arr);

// }

// Output:
// 7 4 1
// 8 5 2
// 9 6 3

// 6.2 solving without using extra space
// ->take away
// Include the algorithm header for reverse

// #include <iostream>
// #include <vector>
// #include<algorithm> //Include the algorithm header for reverse
// using namespace std;
// void rotateImage(vector<vector<int>> arr)
// {
//    int n = arr.size();

//    // transpose of arr
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = i; j < arr[i].size(); j++)
//       {
//          swap(arr[i][j], arr[j][i]);
//       }
//    }

//    // reversing rows
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j < arr[i].size(); j++)
//       {
//          reverse(arr[i].begin(), arr[i].end());
//       }
//    }

//    // printing array
//    for(int i=0;i<n;i++){
//       for(int j=0;j<arr[i].size();j++){
//          cout<<arr[i][j]<<" ";
//       }
//       cout<<endl;
//    }
// }
// int main()
// {
//    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//    rotateImage(arr);
// }

// Output:
// 7 4 1
// 8 5 2
// 9 6 3

// alternative
#include <iostream>
#include <vector>
#include <algorithm> //Include the algorithm header for reverse
using namespace std;

// reversing array
void reverseArray(vector<int> &arr)
{
   int n=arr.size();
   int start=0;
   int end=n-1;
   while(start<end){
      swap(arr[start],arr[end]);
      start++;
      end--;
   }
      

}
void rotateImage(vector<vector<int>> arr)
{
   int n = arr.size();

   // transpose of arr
   for (int i = 0; i < n; i++)
   {
      for (int j = i; j < arr[i].size(); j++)
      {
         swap(arr[i][j], arr[j][i]);
      }
   }

   // reversing rows
   for (int i = 0; i < n; i++)
   {
      reverseArray(arr[i]);
   }

   // printing array
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < arr[i].size(); j++)
      {
         cout << arr[i][j] << " ";
      }
      cout << endl;
   }
}
int main()
{
   vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   rotateImage(arr);
}

// Output:
// 7 4 1 
// 8 5 2
// 9 6 3