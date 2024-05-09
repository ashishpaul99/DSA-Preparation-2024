// 19. sort 0's, 1's and 2's using two pointer approach
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
//         // catch - don't increment index in this case
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


// Alternative: Sort 0's, 1's and 2's using Counting approach
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
// 0 0 1 1 1 2 2 

