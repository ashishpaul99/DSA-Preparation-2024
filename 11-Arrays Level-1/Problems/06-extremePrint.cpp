// 06-Extreme print
// ->two pointer approach is used in this case
// even array -> input: arr -> {10,20,30,40,50,60} -> Output -> 10,60,20,50,30,40
// Odd array  -> input: arr -> {10,20,30,40,50} -> Output -> 10,60,20,50,30

// 6.1 even array
// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     int arr[n]={10,20,30,40,50,60};
//     int left=0,right=n-1;

//     // extreme print logic
//     while(left<=right){
//         cout<<arr[left]<<" "<<arr[right]<<" ";
//         left++;
//         right--;
//     }
// }

// Output:
// 10 60 20 50 30 40 

// 6.2 Odd array
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={10,20,30,40,50};
    int left=0,right=n-1;

    // extreme print logic
    while(left<=right){
        if(left==right){
            cout<<arr[left]<<" ";
        }else{
            cout<<arr[left]<<" "<<arr[right]<<" ";
        }
        
        left++;
        right--;
    }
}

// Output:
// 10 50 20 40 30 