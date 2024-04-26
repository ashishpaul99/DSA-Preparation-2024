// 22. Missing Number
// ->sum approach 
// ->Time complexity=O(n);
#include <iostream>
#include <vector>
using namespace std;
int missingNum(vector<int> &arr)
{
   int n = arr.size();
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
      sum = sum + arr[i];
   }

   int totalSum = n*(n + 1) / 2;
   int ans=totalSum-sum;
   return ans;
}
int main()
{
   vector<int> arr = {3, 0, 1};
   int missingNumber=missingNum(arr);
   cout<<missingNumber<<endl;
}
// Output:
// 2
