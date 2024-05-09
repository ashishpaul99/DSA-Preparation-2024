// 1. Sort 0's and 1's
#include<iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n]={0,1,1,0,1,0};
    int left=0,right=n-1;
    while(left<=right){
        while(arr[left]==0 && left<right){
           left++;
        }
        while(arr[right]==1 && left<right){
           right--;
        }

        if(left<=right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// Alternative
// #include<iostream>
// using namespace std;
// int main(){
//   int n=8,index=0,left=0,right=n-1;
//   int arr[n]={0,1,1,0,1,0,0,1};
//   while(index<=right){
//       if(arr[index]==0){
//         swap(arr[index],arr[left]);
//         index++;
//         left++;
//       }
//       else{
//          swap(arr[index],arr[right]);
//          right--;
//       }
      
//   }

//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }

// }
