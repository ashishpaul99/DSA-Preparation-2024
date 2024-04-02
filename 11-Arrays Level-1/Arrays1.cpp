// 1. Address of operator and sizeOf() function
// #include <iostream>
// using namespace std;
// int main()
// {
//     // address of a
//     int a = 5;
//     cout << "Address of a  :" << &a << endl;

//     // size of a
//     cout << "size of a:" << sizeof(a) << endl;

//     // address of arr
//     int arr[5];
//     cout << "Address of arr:" << &arr << endl;
//     cout << "Address of arr:" << arr << endl;

//     // size of arr[]
//     cout << "size of arr:" << sizeof(arr) << endl;
// }

// Output:
// Address of a  :0x61ff0c
// size of a:4
// Address of arr:0x61fef8
// Address of arr:0x61fef8
// size of arr:20

// 2. Intializing array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,5,4,6};
//     int brr[5]={2,4,6,7,8};
//     int crr[5]={2,6};
//     int drr[2]={4,5,6,8,2}; //it gives error
// }

// Output:
// Arrays1.cpp:36:26: error: too many initializers for 'int [2]'
//      int drr[2]={4,5,6,8,2};
//

// 3. Accessing elements in array using indexes.
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[5]={2,5,6,4,5};
//    cout<<arr[0]<<endl;
//    cout<<arr[1]<<endl;
//    cout<<arr[2]<<endl;
//    cout<<arr[3]<<endl;
//    cout<<arr[4]<<endl;

// }

// Output:
// 2
// 5
// 6
// 4
// 5

// 4. Accessing elements in array using for loop
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[5]={2,5,6,4,5};
//    for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
//    }

// }

// Output:2 5 6 4 5

// 5. Taking input in an array
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[5];

// // taking input in an array
//    for(int i=0;i<5;i++){
//     cout<<"enter elements:";
//     cin>>arr[i];
//    }

// // print an array
//   for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
//   }

// }

// Output:
// enter elements:2
// enter elements:3
// enter elements:5
// enter elements:4
// enter elements:6
// 2 3 5 4 6

// 6. Problem statement
// 1. declare 10 size array and take inputs in that array.double up the elements in the array.

// #include<iostream>
// using namespace std;
// int main(){

//     int n=5;
//     int arr[n];

//     // taking input in an array
//     for(int i=0;i<n;i++){
//         cout<<"enter element at index "<<i<<":";
//         cin>>arr[i];
//     }

//     //printing an array
//     for(int i=0;i<n;i++){
//         cout<<2*arr[i]<<" ";
//     }
//     return 0;
// }

// Output:
// enter element at index 0:2
// enter element at index 1:3
// enter element at index 2:5
// enter element at index 3:6
// enter element at index 4:4
// 4 6 10 12 8

// 2. Sum of an array
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//      int arr[n]={2,4,5,6,1};
//      int sum=0;
//      for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//      }
//      cout<<sum<<endl; //18
// }

// 3. Linear search
// 0->(false) -> not found
// 1->(true) -> found

// #include<iostream>
// using namespace std;
// int main(){
// int arr[6]={2,4,6,8,10,12};
// int key=10;

// bool flag=0;
// for(int i=0;i<6;i++){
//     if(arr[i]==key){
//         flag=1;
//         break;
//     }
// }

// if(flag == 1) {
//     cout<<"key found"<<endl;
// }
// else{
//     cout<<"key not found"<<endl;
// }

// }

// alter:
// #include<iostream>
// using namespace std;
// int main(){
// int arr[6]={2,4,6,8,10,12};
// int key=11;

// bool flag=0;
// for(int i=0;i<6;i++){
//     if(arr[i]==key){
//         cout<<"key found at index "<<i<<endl;
//         flag=1;
//     }
// }

// if(flag == 0) {
//     cout<<"key not found"<<endl;
// }

// }

// 4. Arrays and functions
// 4.1 print an array using functions
// #include<iostream>
// using namespace std;
// void printArray(int arr[],int size){
//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";  //output:2 4 5 6 7
//   }
// }

// int main(){
//     int size=5;
//     int arr[size]={2,4,5,6,7};

//     // calling function
//     printArray(arr,size);

// }

// Output:
// 2 4 5 6 7

// 4.2 linear search using functions

// #include<iostream>
// using namespace std;
// void linearSearch(int arr[],int size, int key){

// bool flag=false;
// for(int i=0;i<size;i++){
//     if(arr[i]==key){
//         cout<<"key found at index "<<i<<endl;
//         flag=1;
//     }
// }
// if(flag==0){
//     cout<<"key not found"<<endl;
// }

// }
// int main(){

//    int arr[5]={2,4,6,8,10};
//    int size=5;
//    int key=6;
//    linearSearch(arr,size,6) ;

// }

// Output:
// key found at index 2

// alternative
// #include<iostream>
// using namespace std;
// bool linearSearch(int arr[],int size, int key){
// for(int i=0;i<size;i++){
//     if(arr[i]==key){
//         // key found
//         return true;
//     }
// }

//     // key not found
//     return false;
// }
// int main(){

//    int arr[5]={2,4,6,8,10};
//    int size=5;
//    int key=10;
//    bool result=linearSearch(arr,size,key) ;
//    if(result==1){
//     cout<<"target found"<<endl;
//    }
//    else{
//     cout<<"target not found"<<endl;
//    }

// }

// 4.3 Count 0's and 1's in an Array
// #include <iostream>
// using namespace std;
// void countZerosOnes(int arr[], int size)
// {
//     int zerosCount = 0;
//     int onesCount = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zerosCount++;
//         }
//         else
//         {
//             onesCount++;
//         }
//     }
//     cout << "number of zeros:" << zerosCount << endl;
//     cout << "number of ones:" << onesCount << endl;
// }
// int main()
// {
//     int size = 8;
//     int arr[size] = {0, 1, 1, 1, 1, 0,1,1};
//     countZerosOnes(arr, size);
// }

// 4.4 Minimum in an array
// Approach-1 using limits.h --> INT_MIN and INT_MAX
// #include<iostream>
// #include<limits.h>
// using namespace std;
// void minElement(int arr[],int size){
//     int min=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<min<<endl;
// }

// int main(){
//    int size=5;
//    int arr[size]={5,6,2,1,3};
//    minElement(arr,size);
// }

// output:1

// Approach-2:using built in function min(a,b)
// #include <iostream>
// #include <limits.h>
// using namespace std;
// void minElement(int arr[], int size)
// {
//     int minAns = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         minAns = min(arr[i], minAns);
//     }
//     cout << minAns << endl;
// }

// int main()
// {
//     int size = 5;
//     int arr[size] = {5, 6, 2, 9, 3};
//     minElement(arr, size);
// }

// Output:2

// 3. Apporach-3 Intializing min with intial value of an array.

// #include<iostream>
// using namespace std;
// void minElement(int arr[],int size){
//     int min=arr[0];
//     for(int i=0;i<size;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<min<<endl;
// }

// int main(){
//    int size=5;
//    int arr[size]={5,6,2,4,3};
//    minElement(arr,size);
// }

// Output:2

// 4.5 Reverse an array
// #include <iostream>
// using namespace std;
// void reverseArray(int arr[], int size)
// {
//     int left=0;
//     int right=size-1;
//     while(left<=right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }

//     // print an array
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

   
// }
// int main()
// {
//     int size = 6;
//     int arr[size] = {10, 20, 30, 40, 50, 60};
//     reverseArray(arr, size);
// }

// Output:
// 60 50 40 30 20 10 

// 4.6 Extreme print
// 1. In case of even array
// #include <iostream>
// using namespace std;
// void extremePrint(int arr[],int size){
//    int left=0;
//    int right=size-1;
//    while(left<=right){
//        cout<<arr[left]<<" "<<arr[right]<<" ";
//        left++;
//        right--;
//    }

// }
// int main(){
//     int size=6;
//     int arr[size]={10,20,30,40,50,60};
//     extremePrint(arr,size);
// }

// Output:
// 10 60 20 50 30 40 


// 2. In case of odd array

#include <iostream>
using namespace std;
void extremePrint(int arr[],int size){
   int left=0;
   int right=size-1;
   while(left<=right){
    if(left==right){
        cout<<arr[left]<<endl;
    }
    else{
       cout<<arr[left]<<" "<<arr[right]<<" ";
    }
    left++;
    right--;
      
   }

}
int main(){
    int size=5;
    int arr[size]={10,20,30,40,50};
    extremePrint(arr,size);
}

// Output:
// 10 50 20 40 30
