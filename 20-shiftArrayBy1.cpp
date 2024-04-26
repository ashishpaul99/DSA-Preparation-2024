//20. Rotate array by 1 Step
#include<iostream>
using namespace std;
int main(){
    int n=9;
    int arr[n]={1,2,3,4,5,6,7,8,9};
    int j=n-1,temp=arr[n-1];
    while(j>=0){
        if(j==0){
            arr[j]=temp;
        }
        else{
            arr[j]=arr[j-1];
        }
        j--;
    }

    // print an array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// Output:
// 9 1 2 3 4 5 6 7 8 

// alternative:
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