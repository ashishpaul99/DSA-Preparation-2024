// 1. Static Array
// #include<iostream>
// using namespace std;
// void fun(int arr[],int n){
//     for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//     }

// }
// int main(){
//     // Stactic memory allocation of array
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     fun(arr,n);
// }

// 2. Dynamic Array
// #include<iostream>
// using namespace std;
// void fun(int arr[],int n){
//     for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//     }

// }
// int main(){
//     // Dynamic array
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     int *arr=new int[n];
//     for(int i=0;i<n;i++){
//         int data;
//         cin>>data;
//         arr[i]=data;
//     }
//     fun(arr,n);
// }

// =>try to insert more elements
// #include<iostream>
// using namespace std;
// void fun(int arr[],int n){
//     for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//     }

// }
// int main(){
//     // Dynamic array
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     int *arr=new int[n];
//     for(int i=0;i<n;i++){
//         int data;
//         cin>>data;
//         arr[i]=data;
//     }//0 to 4th index

//     // try to insert more elements
//     //    Adding more items
//     // 5 -> 14 index
//     for(int i=0;i<n;i++){
//         arr[n+1]=80;
//     }
//     fun(arr,n);
// }

// ->if you declare n size elements we can insert n size elements only.
// ->Adding more elements in an array will not be possible after nth element is added.

//1. Vector in C++
// ->In vector no need to mention size of vector.
// ->just keep inserting the data.

//1.2 declaring vector
// vector<int>v;

// ->for using vector #include<vector> header file should be included.

//1.3 Inserting elements in vector
// v.push_back(element);

//1.4 To know size of vector
// int size=v.size();

// Example: vector

// #include<iostream>
// #include<vector>
// using namespace std;

// void print(vector<int>v){
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }

// }
// int main(){
//     vector<int>v;

//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(40);
//     v.push_back(30);

//     print(v);
// }

// Output:
// 10 20 40 30

// 1.5 size and capacity of vector

// #include<iostream>
// #include<vector>
// using namespace std;

// void print(vector<int>v){
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }

// }
// int main(){
//     vector<int>v;

//     while(1){
//         int d;
//         cout<<"enter data:"<<endl;
//         cin>>d;
//         v.push_back(d);
//         cout<<"Capacity:"<<v.capacity()<<" "<<"Size:"<<v.size()<<" "<<endl;;
//     }

//     print(v);
// }

// Output:
// enter data:
// 1
// Capacity:1 Size:1
// enter data:
// 2
// Capacity:2 Size:2
// enter data:
// 3
// Capacity:4 Size:3
// enter data:
// 4
// Capacity:4 Size:4
// enter data:
// 5
// Capacity:8 Size:5
// enter data:
// 6
// Capacity:8 Size:6
// enter data:
// 7
// Capacity:8 Size:7
// enter data:
// 8
// Capacity:8 Size:8

// 1.6 Deleting elements from vector
// #include <iostream>
// #include <vector>
// using namespace std;

// void print(vector<int> v)
// {
//     int size = v.size();
//     for (int i = 0; i < size; i++)
//     {
//         cout << v[i] << " ";
//     }
// }
// int main()
// {
//     vector<int> v;

//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);

//     print(v);
//     cout<<endl;


//     // deleting elements- pops out elements from back

// // 30 get poped out
//     v.pop_back();
//     print(v);
//     cout<<endl;

// // 20 get poped out
//     v.pop_back();
//     print(v);
//     cout<<endl;

// // 10 get poped out
//     v.pop_back();
//     print(v);
//     cout<<endl; 
// }


// 1.7 Pushing element after Taking input from the user. 
// #include<iostream>
// #include<vector>
// using namespace std;
// using namespace std;

// void print(vector<int>v){
//    int size=v.size();
//    for(int i=0;i<size;i++){
//          cout<<v[i]<<" ";
//    }
// }
// int main(){
//     vector<int>v;

//     // taking n size input in vector
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int d;
//         cout<<"enter d"<<endl;
//         cin>>d;
//         v.push_back(d);
//     }

//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(50);

//     print(v);

// }

// // Output:
// enter n:
// 3
// enter d
// 1
// enter d
// 2
// enter d
// 3
// 1 2 3 10 20 50 

// 1.8 clearing vector
// #include<iostream>
// #include<vector>
// using namespace std;
// using namespace std;

// void print(vector<int>v){
//    int size=v.size();
//    cout<<"printing vector"<<endl;
//    for(int i=0;i<size;i++){
    
//          cout<<v[i]<<" ";
//    }
// }
// int main(){
//     vector<int>v;
 

//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(50);

//     print(v);
//     cout<<endl;

// // clearing vector
//     v.clear();
//     print(v);

// // pushing element after clearing
//  v.push_back(20);
//  print(v);
// }

// // 1.9 intializing vector with elements
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v){
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main(){
    
//     vector<int>arr2(5,-1); //intializing n size with sepecific data
//     print(arr2);
//     cout<<endl;

//     vector<int>arr3={1,2,3,4,5};
//     print(arr3);
//     cout<<endl;

//     vector<int>arr4{10,2,30,4,5};
//     print(arr4);
//     cout<<endl;
 
// }

// 1.10 Intiliazing vector with other vector values.
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v){
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main(){
    

//     vector<int>arr3={1,2,3,4,5};
//     print(arr3);
//     cout<<endl;

//     vector<int>arr4(arr3);
//     print(arr4);
//     cout<<endl;
 
// }

// 1.11 char type vector
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<char>v){
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main(){
    
//     vector<char>v;
//     v.push_back('a');
//     v.push_back('b');
//     v.push_back('c');

//     print(v);

 
// }

// 1.12 for each loop in vector
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    for(auto it: v){
        cout<<it<<" ";
    }

}
int main(){

    vector<int>v;

    v.push_back(10);
    v.push_back(30);
    v.push_back(50);

    print(v);

}

