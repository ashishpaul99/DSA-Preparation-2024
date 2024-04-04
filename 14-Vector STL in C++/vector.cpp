// 13. Vector STL in C++    Date: 04/04/24  Time:4:43
// 1. Static memory allocation of array
// #include<iostream>
// using namespace std;
// void printStaticArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }
// int main(){
//     // static memory allocation of array
//     int arr[5]={5,6,4,2,3};
//     printStaticArray(arr,5);
// }

// Output:
// 5 6 4 2 3

// 2. Dynamic memory allocation of array
// #include<iostream>
// using namespace std;
// void printDynamicArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }
// int main(){
//     // Dynamic memory allocation of array
//      int n;
//      cout<<"enter n:"<<endl;
//      cin>>n;
//      int *arr=new int[n]; //each element would be zero or garbage.
//      printDynamicArray(arr,n);
// }

// Output:
// enter n:
// 5
// 16389912 16384192 16390040 1702125940 50331651

// 3. Taking elements as inputs in case of Dynamic Array
// #include<iostream>
// using namespace std;
// void printDynamicArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }
// int main(){
//     // Dynamic memory allocation of array
//      int n;
//      cout<<"enter n:"<<endl;
//      cin>>n;
//      int *arr=new int[n]; //each element would be zero or garbage.

//     taking elements as input and inserting in array
//      for(int i=0;i<n;i++){
//         int data;
//         cout<<"enter element: ";
//         cin>>data;
//         arr[i]=data;
//      }
//      printDynamicArray(arr,n);
// }

// Output:
// enter n:
// 5
// enter element: 3
// enter element: 6
// enter element: 1
// enter element: 5
// enter element: 4
// 3 6 1 5 4

// 4. Problem with above dynamic array
// ->if n is given as 5.
// ->there is requirement to push element in 6th place.
// ->

// eg-1:
// #include <iostream>
// using namespace std;
// void printDynamicArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     // Dynamic memory allocation of array
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//     int *arr = new int[n]; // each element would be zero or garbage.

//     // taking elements as input and inserting in array
//     for (int i = 0; i < n; i++)
//     {
//         int data;
//         cout << "enter element: ";
//         cin >> data;
//         arr[i] = data;
//     }

//     //  Inserting 10 more items in array
//     for (int i = 0; i < 10; ++i)
//     {
//         arr[n + i] = 80;
//     }

//     printDynamicArray(arr, n);
// }

// Output:
// enter n:
// 5
// enter element: 6
// enter element: 7
// enter element: 9
// enter element: 1
// enter element: 2
// 6 7 9 1 2 
// malloc() - corrupted top size

// 5. To fix this memory issues vector STL created.
// ->no need to tell size 