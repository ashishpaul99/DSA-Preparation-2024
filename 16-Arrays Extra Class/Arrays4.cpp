// 16-Arrays Extra Class
// 1. Sort negative numbers and possitive numbers
// i/p : arr-> {23,-7,12,-10,-11,40,60};
// o/p : arr-> {-7,-10,-11,23, 12, 40, 60 };

// taking two pointers
// 1. index -> for traversing an array
// 2. j -> In order to store negative numbers by using it.

// #include <iostream>
// using namespace std;

// void shiftNegativeOneSide(int arr[],int n){
//     int index = 0, j = 0;
//     for(int index=0;index<n;index++){
//         if(arr[index]<0){
//             swap(arr[index],arr[j]);
//             j++;
//         }
//     }

//      // printing array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

// }
// int main()
// {
//     int n = 7;
//     int arr[n] = {-23, 0, -12, -10, -11, -40, -60};
//     shiftNegativeOneSide(arr,n);

// }

// Output:
// -7 -10 -11 23 12 40 60

// Alternative
// #include <iostream>
// using namespace std;
// void shiftNegativeOneSide(int arr[], int n)
// {
//     int index = 0, j = 0;
//     while (index < n)
//     {
//         if (arr[index] < 0)
//         {
//             swap(arr[index], arr[j]);
//             j++;
//         }

//         index++;
//     }

//     // printing array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int n = 7;
//     int arr[n] = {23, -7, 12, -10, -11, 40, 60};
//     shiftNegativeOneSide(arr, n);
// }

// Output:
// -7 -10 -11 23 12 40 60

// Time Complexity: O(n)

// alternative-2
// ->intializing pointers with index=0, j=n-1

// #include <iostream>
// using namespace std;

// void shiftPositiveToRightNegativeToLeft(int arr[], int n) {
//     int left = 0, right = n - 1;
//     while (left <= right) {
//         while (left < n && arr[left] < 0) {
//             left++;
//         }
//         while (right >= 0 && arr[right] >= 0) {
//             right--;
//         }
//         if (left < right) {
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }

//     // printing array
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

// int main() {
//     int n = 7;
//     int arr[n] = {23, -7, 12, -10, -11, 40, 60};
//     shiftPositiveToRightNegativeToLeft(arr, n);
//     return 0;
// }

// 2. Sort 0's, 1's and 2's using Counting approach
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 7;
//     int arr[n] = {0, 1, 2, 0, 1, 1, 2};
//     int oneCount = 0, zeroCount = 0,twoCount=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zeroCount++;
//         }
//         else if(arr[i]==1)
//         {
//             oneCount++;
//         }
//         else{
//             twoCount++;
//         }
//     }

//     int i=0;
//     while(zeroCount--)
//     {
//         arr[i] = 0;
//         i++;
//     }
//     while(oneCount--)
//     {
//         arr[i] = 1;
//         i++;
//     }
//     while(twoCount--){
//         arr[i]=2;
//         i++;
//     }

//     //   printing array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// Output:
// 0 0 1 1 1 2 2 e

// 2.1 sort 0's, 1's and 2's using two pointer approach
// #include<iostream>
// using namespace std;
// int main(){
//   int n=8,index=0,left=0,right=n-1;
//   int arr[n]={1,0,2,2,1,0,1,0};
//   while(index<=right){
//      if(arr[index]==0){
//         swap(arr[index],arr[left]);
//         left++;
//         index++;
//      }
//      else if(arr[index]==2){
//         swap(arr[index],arr[right]);
//         right--;
//         // don't increment index in this case
//      }
//      else{
//         index++;
//      }
//   }

//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }

// }

// Output:
// 0 0 0 1 1 1 2 2

// 2. Rotate array by 1 Step
// #include<iostream>
// using namespace std;
// int main(){
//    int n=8;
//    int arr[n]={1,2,3,4,5,6,7,8};
//    int j=n-1;
//    int temp=arr[n-1];
//    while(j>=0){
//      if(j==0){
//         arr[j]=temp;
//      }
//      else{
//          swap(arr[j], arr[j-1]);
//      }

//      j--;

//    }

//    // printing array

// for(int i=0;i<n;i++){
//    cout<<arr[i]<<" ";
// }
// }

// Output:
// 8 1 2 3 4 5 6 7

// 3. rotate the array to the right by k steps

// 3.1 By using additional memory

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

// 3.2 Modulus Approach
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

// Output:
// 4 5 6 1 2 3

// 4. Missing Number
// #include <iostream>
// #include <vector>
// using namespace std;
// int missingNum(vector<int> &arr)
// {
//    int n = arr.size();
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//       sum = sum + arr[i];
//    }

//    int totalSum = n*(n + 1) / 2;
//    int ans=totalSum-sum;
//    return ans;
// }
// int main()
// {
//    vector<int> arr = {3, 0, 1};
//    int missingNumber=missingNum(arr);
//    cout<<missingNumber<<endl;
// }
// Output:
// 2

// 5. Row With Maximum Ones
// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;
// void rowWithMaxOnes(vector<vector<int>> &mat)
// {
//    vector<int> ans;
//    int maxOneCount = INT_MIN;
//    int n = mat.size();
//    int rowNo=0;
//    for (int i = 0; i < n; i++)
//    {
//       int oneCount= 0;
//       for (int j = 0; j < mat[i].size(); j++)
//       {
//          // if one is found in row then increment one count
//          if (mat[i][j] == 1)
//          {
//             oneCount++;
//          }
//       }
//       if (oneCount > maxOneCount)
//       {
//          // updating one count
//          maxOneCount=oneCount;

//          // updating row number
//          rowNo=i;

//       }

//    }

//    ans.push_back(rowNo);
//    ans.push_back(maxOneCount);

//    for(int i=0;i<ans.size();i++){
//       cout<<ans[i]<<" ";
//    }

// }
// int main()
// {
//    vector<vector<int>> mat = {{0, 1,0}, {1, 0,0},{1,1,1}};
//    rowWithMaxOnes(mat);

// }

// Output:
// 2 3

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
// #include <iostream>
// #include <vector>
// #include <algorithm> //Include the algorithm header for reverse
// using namespace std;

// // reversing array
// void reverseArray(vector<int> &arr)
// {
//    int n=arr.size();
//    int start=0;
//    int end=n-1;
//    while(start<end){
//       swap(arr[start],arr[end]);
//       start++;
//       end--;
//    }
      

// }
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
//       reverseArray(arr[i]);
//    }

//    // printing array
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j < arr[i].size(); j++)
//       {
//          cout << arr[i][j] << " ";
//       }
//       cout << endl;
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


