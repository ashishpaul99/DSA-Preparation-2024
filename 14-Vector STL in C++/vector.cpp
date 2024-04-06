// 13. Vector STL in C++    Date: 04/04/24  Time:4:43

// 1. The Standard Template Library (STL) provides a collection of template classes and functions that
// offer common data structures and algorithms to make programming more efficient and
// convenient.
// 2. A vector in C++ is a dynamic array that can grow or shrink in size, making it a versatile and
// efficient data structure for storing and manipulating sequences of elements

// 3. Static and Dynamic memory allocation of array
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

// 2.1 Taking elements as inputs in case of Dynamic Array
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

// 2.2  Problem with above dynamic array
// ->if n is given as 5.
// ->there is requirement to push element in 6th place.

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

// ->To fix this memory issues vector STL created.

// 4. Vector STL in C++
// -> A vector in C++ is a dynamic array that can grow or shrink in size, making it a versatile and
// efficient data structure for storing and manipulating sequences of elements
// eg-1:
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v){
//     // size of vector
//     int size=v.size();
//     for(int i=0;i<size;i++){
//          cout<<v[i]<<" ";
//     }
// }
// int main(){

//    // declaring vector
//     vector<int>v;

//     // inserting elements in vector
//     v.push_back(1);
//     v.push_back(5);
//     v.push_back(3);
//     v.push_back(2);
//     print(v);
// }

// Output:
// 1 5 3 2

// 4.1 Inserting elements in vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     // declaring vector
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
// }

// 4.2 size of vector
// ->by using size mehtod vector size can be known.

// eg-1:
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//    // declaring vector
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(5);
//     int size=v.size();
//     cout<<size<<endl;
// }

// Output:
// 2

// 5. Behind the scenes
// ->size of the vector increases internally.
// ->capacity get doubled when vecotr is filled.
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     while (1)
//     {
//         int d;
//         cout << "enter d:";
//         cin >> d;
//         v.push_back(d);
//         cout << "Capcity: " << v.capacity() << endl;
//         cout << "Size:" << v.size() << endl;
//     }
// }

// Output:
// enter d:1
// Capcity: 1
// Size:1
// enter d:2
// Capcity: 2
// Size:2
// enter d:3
// Capcity: 4
// Size:3

// 6. deleting elements from vector
// #include <iostream>
// #include <vector>
// using namespace std;
// void print(vector<int> v){
//     int size=v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);

//     // printing vector
//     print(v);
//     cout<<endl;


//     cout<<"poping out element"<<endl;
//     v.pop_back();
//     print(v);
  
// }

// 7. inserting element in vector
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int> v){
//     int size =v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){
//     vector<int>v;
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     // inserting element int vector
//     for(int i=0;i<n;i++){
//         int d;
//         cout<<"enter d:";
//         cin>>d;
//         v.push_back(d);
//     }
//     // adding some more elements in vector
//     for(int i=0;i<10;i++){
//         v.push_back(80);
//     }

//     // printing vector
//     print(v);
// }

// Output:
// enter n:5
// enter d:1
// enter d:2
// enter d:2
// enter d:3
// enter d:4
// 1 2 2 3 4 80 80 80 80 80 80 80 80 80 80 

// 8. clearing vector
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int> v){
//     int size =v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);

//     cout<<"vector is cleared"<<endl;
//     v.clear();
//     print(v);

//     // pushing after clearing
//     cout<<"pushing after clearing vector"<<endl;
//     v.push_back(50);
//     print(v); 
// }

// 9. Intialization of vector
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int> v){
//     int size =v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){

//     // 1. Intializing vector with no data and 0 size.
//     vector<int> arr1;
//     print(arr1);

//     //2. Intializing vector with n size with specific data
//     // ->it is dynamic array only
//     vector<int> arr2(5,-1);
//     arr2.push_back(6);
//     print(arr2);
//     cout<<endl;

//     // 3. Intializing vector with some elements
//     vector<int> arr3={1,2,3,4,5};
//     // arr3.pop_back();
//     print(arr3);

// }

// 10. Copying vector or intializing vector with other vector data.
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int> v){
//     int size =v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){

//     vector<int> arr1={1,2,3,4,5};
//     vector<int> arr2(arr1);
//     cout<<"printing arr1: ";
//     print(arr1);
//     cout<<endl;

//     cout<<"printing arr2: ";
//     print(arr2);

// }

// 11. Vector type
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<char> v){
//     int size =v.size();
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){

//     // char type vector
//     vector<char> c;
//     c.push_back('a');
//     c.push_back('b');
//     c.push_back('c');
//     print(c); 
// }

//output:a b c 

// 12. first and last element of vector
// vector -> v
// front element -->v[0]  or v.front()
// last element  -->v[v.size()-1]  or  v.back()

//  
// Output:
// a b c 
// Front element: a
// Last element: c


// 12. Printing vector by using for each loop
// ->Auto keyword automatically identify type of the vector.

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int> v){
//     for(auto element:v){
//        cout<<element<<" ";
//     }
// }

// int main(){

//     // char type vector
//     vector<int> v;
//     v.push_back(1);   
//     v.push_back(2);
//     v.push_back(3);
//     print(v); //output:a b c 
//     cout<<endl;

    

// }











