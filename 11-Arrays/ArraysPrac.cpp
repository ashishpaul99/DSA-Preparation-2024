// 1. Linear search
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,5,6,4,8};
//     int key=78;
//     int n=5;
//     int flag=false;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             flag=true;
//         }
//     }
//     if(flag==true){
//         cout<<"key found"<<endl;
//     }
//     else{
//         cout<<"key not found"<<endl;
//     }
// }

// // 2. Count 0's and 1's
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={0,1,0,1,1};
//     int n=5;
//     int zerocount=0;
//     int onecount=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             zerocount++;
//         }
//         else if(arr[i]==1){
//             onecount++;
//         }
//     }

//     cout<<"zerocount:"<<zerocount<<endl;
//     cout<<"onecount:"<<onecount<<endl;
// }

// 3. Minimum in an array
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int arr[5]={11,4,6,8,9};
//     int n=5;

//     int min=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(min>arr[i]){
//             min=arr[i];
//         }
//     }
//     cout<<"Minimum value:"<<min<<endl;
// }
// Output:
// Minimum value:4

// 7. Reverse an array
// #include<iostream>
// using namespace std;
// int main(){
//      int arr[6]={10,20,30,40,50,60};
//      int n=6;

//       cout<<"before swap ";
//       for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//       }

//       cout<<endl;

//      for(int left=0,right=n-1;left<=right;left++,right--){
//         swap(arr[left],arr[right]);

//      }

//      cout<<"After swap ";
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//      }
// }

// 8.  Exterme print in an array
// #include<iostream>
// using namespace std;
// int main(){
//      int arr[6]={10,20,30,40,50,60};
//      int n=6;

//       cout<<"before";
//       for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//       }

//       cout<<endl;

//      for(int left=0,right=n-1;left<=right;left++,right--){
//         cout<<arr[left]<<" "<<arr[right]<<" ";

//      }
//      cout<<endl;

//      cout<<"After";
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//      }
// }