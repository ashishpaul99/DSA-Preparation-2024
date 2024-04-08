// 15-Arrays Level-3       Date:07/04/24  Time:4:16 PM
// 1. 2D-Array
// 1.1 Declaring 2-D Array
// #include <iostream>
// using namespace std;
// int main()
// {
//     // Declaring 2-D Array
//     // int arr[3][4];

//     // Intialise 2-D Array
//     int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 4}, {20, 43, 2, 26}};
// }

// 1.2 Intializing 2-D Array
// #include <iostream>
// using namespace std;
// int main()
// {
//     // Intialise 2-D Array
//     int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 4}, {20, 43, 2, 26}};
// }

// 1.3  Intilaizing 2-D Array with column size only
// ->In order to intialize 2-D Array atleast size of column should be given.
// ->for comverting 2-D Array to 1-D Array column size is important.
// ->In order to pass 2-D array to function, In function parameter column size is required.
// ->formula to convert 2-D Array to 1-D Array
//                 f->c*i+j

// 1.3.1 Intializing 2-D Arrays without mentioning row size
// ->it works

// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 4}, {20, 43, 2, 26}};
// }

// 1.3.2 Intializing 2-D Arrays without mentioning row and column size
// ->it gives error
// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[][] = {{1, 2, 3, 4}, {5, 6, 7, 4}, {20, 43, 2, 26}};
// }

// Output:
// error: declaration of 'arr' as multidimensional array must have bounds for
// all dimensions except the first

// 1.3.3 Intializing 2-D Arrays without mentioning row size
// ->it gives error
// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[3][] = {{1, 2, 3, 4}, {5, 6, 7, 4}, {20, 43, 2, 26}};
// }

// 2. Printing 2-D Array
// #include<iostream>
// using namespace std;
// void printArray(int arr[2][3],int row,int column){
//    for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//            cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//    }
// }
// int main(){

//     int arr[2][3]={{1,2,3},{4,5,6}};
//     int row=2;
//     int column=3;
//     printArray(arr,row,column);

// }

// Output:
// 1 2 3
// 4 5 6

// 2.1 Accessing column wise
//  input   -->      output
// 1 2 3    -->       1 4
// 4 5 6              2 5
//                    3 6

// #include<iostream>
// using namespace std;
// void colWisePrint(int arr[2][3],int row,int column){
//    for(int i=0;i<column;i++){
//     for(int j=0;j<row;j++){
//            cout<<arr[j][i]<<" ";
//     }
//     cout<<endl;
//    }
// }
// int main(){

//     int arr[2][3]={{1,2,3},{4,5,6}};
//     int row=2;
//     int column=3;
//     colWisePrint(arr,row,column);

// }

// Output:
// 1 4
// 2 5
// 3 6

// 3. How to take input for 2-D Array
// #include<iostream>
// using namespace std;
// int main(){
//    int row=3,col=3;
//    int arr[3][3];

//    for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//             cout<<"enter element at indexes -> "<<"("<<i<<","<<j<<")"<<":";
//             cin>>arr[i][j];
//       }
//    }

//    //Printing 2-D Array
//    for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//       }
//       cout<<endl;
//    }
// }

// output:
// enter element at indexes -> (0,0):1
// enter element at indexes -> (0,1):2
// enter element at indexes -> (0,2):3
// enter element at indexes -> (1,0):4
// enter element at indexes -> (1,1):5
// enter element at indexes -> (1,2):6
// enter element at indexes -> (2,0):7
// enter element at indexes -> (2,1):8
// enter element at indexes -> (2,2):9
// 1 2 3
// 4 5 6
// 7 8 9

// 4. Searching
// ->searching elements in 2-D Array.
// 10 20 30
// 40 50 60
// 70 80 90

// ->target=70   -----> Output: true or false
// ->check wheather 70 is present in 2-D array  or not.
// ->if 70 is present print true.
// ->if 70 not found print false.

// #include<iostream>
// using namespace std;

// bool linearSearch(int arr[][3],int row, int col,int target){
//    for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//           if(arr[i][j]==target){
//             // if target found, return true
//               return true;
//           }
//       }
//    }
//    // if target not found after checking all elements
//    return false;
// }
// int main(){
//    int row=3;
//    int col=3;
//    int target=70;
//    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
//    bool result=linearSearch(arr,row,col,target);
//    // cout<<result<<endl;
//    if(result){
//        cout<<"element found"<<endl;
//    }
//    else{
//       cout<<"element not found"<<endl;
//    }
// }

// Output:
// element found

// 5. Find maximum number in an array
// #include<iostream>
// #include<limits.h>
// using namespace std;

// void findMaximum(int arr[][3],int row, int col){
//    int max=INT_MIN;
//    for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//          if(arr[i][j]>max){
//             max=arr[i][j];
//          }
//       }
//    }
//    cout<<"Printing maximum number in array: "<<max<<endl;
// }

// void findMinimum(int arr[][3],int row, int col){
//    int min=INT_MAX;
//    for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//           if(arr[i][j]<min){
//             min=arr[i][j];
//           }
//       }
//    }
//    cout<<"Printing minmum number in array: "<<min<<endl;
// }

// int main(){
//    int row=3;
//    int col=3;
//    int arr[3][3]={{10,90,30},{40,70,60},{50,80,20}};
//    findMaximum(arr,row,col);
//    findMinimum(arr,row,col);
// }

// Output:
// Printing maximum number in array: 90
// Printing minmum number in array: 10

// 6. row wise sum
// #include<iostream>
// using namespace std;
// void rowSum(int arr[3][4],int row,int col){
//    for(int i=0;i<row;i++){
//       int sum=0;
//       for(int j=0;j<col;j++){
//          sum=sum+arr[i][j];
//       }
//       cout<<"sum of row "<<i<<":"<<sum<<endl;
//    }
// }
// int main(){
//    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11}};
//    int row=3;
//    int col=4;
//    rowSum(arr,row,col);

// }

// Output:
// sum of row 0:10
// sum of row 1:26
// sum of row 2:30

// 7. column wise sum

// #include <iostream>
// using namespace std;
// void rowSum(int arr[3][4], int row, int col)
// {
//    for (int i = 0; i < col; i++)
//    {
//       int sum = 0;
//       for (int j = 0; j < row; j++)
//       {
//          sum = sum + arr[j][i];
//       }
//       cout <<"sum of column "<<i<<":"<<sum<<endl;
//    }
// }
// int main()
// {
//    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//    int row = 3;
//    int col = 4;
//    rowSum(arr, row, col);
// }

// Output:
// sum of column 0:15
// sum of column 1:18
// sum of column 2:21
// sum of column 3:24

// 8. Diagonal Sum
//  1, 2, 3, 4
//  5, 6, 7, 8
//  9, 10, 11, 12
// 13, 14, 15, 16

// ->Diagonal sum = 1+6+11+16 = 34

// #include <iostream>
// using namespace std;
// void diagonalSum(int arr[4][4], int row, int col)
// {
//    int sum = 0;
//    for (int i = 0; i < col; i++)
//    {

//       for (int j = 0; j < row; j++)
//       {
//          if(i==j){
//              sum = sum + arr[j][i];
//          }
//       }
//    }
//    cout <<"sum of diagonal elements:"<<sum<<endl;
// }
// int main()
// {
//    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12},{13,14,15,16}};
//    int row = 4;
//    int col = 4;
//    diagonalSum(arr, row, col);
// }

// Output:sum of diagonal elements:34

// Alternative
// #include <iostream>
// using namespace std;
// void diagonalSum(int arr[4][4], int row, int col)
// {
//    int sum = 0;
//    for (int i = 0; i < col; i++)
//    {
//       sum = sum + arr[i][i];
//    }
//    cout << "diagonal sum: " << sum << endl;
// }
// int main()
// {
//    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//    int row = 4;
//    int col = 4;
//    diagonalSum(arr, row, col);
// }

// Output:
// diagonal sum: 34

// 9. Diagonal Print
// #include <iostream>
// using namespace std;
// void diagonalSum(int arr[4][4], int row, int col)
// {
//    for (int i = 0; i < col; i++)
//    {
//       cout<<arr[i][i]<<" ";
//    }
// }
// int main()
// {
//    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//    int row = 4;
//    int col = 4;
//    diagonalSum(arr, row, col);
// }

// Output:
// 1 6 11 16

// 10. Printing another diagonal
//  1,  2,  3,  4
//  5,  6,  7,  8
//  9, 10, 11, 12
// 13, 14, 15, 16

// Diagonal elements= 13,10,7,4

// #include <iostream>
// using namespace std;
// void diagonalSum(int arr[4][4], int row, int col)
// {
//      for(int i=row-1,j=0;i>=0;i--,j++){
//         cout<<arr[i][j]<<" ";
//      }
// }
// int main()
// {
//    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//    int row = 4;
//    int col = 4;
//    diagonalSum(arr, row, col);
// }

// Output: 13 10 7 4

// 10. Transpose of a matirx
// 1 2 3                  1 4 8
// 4 6 7        ----->    2 6 7
// 8 9 10                 3 7 10
// #include <iostream>
// using namespace std;
// void transposeMatrix(int arr[3][3], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = i; j < col; j++)
//         {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int row = 3;
//     int col = 3;
//     transposeMatrix(arr, row, col);
// }

// Output:
// 1 4 7
// 2 5 8
// 3 6 9

// 11. 1-D Vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n=5;
//     vector<int> v(n);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }

// }

// Output:
// 0 0 0 0 0

// eg-1:
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n=5;
//     vector<int> v(n,-1);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
// Output:
// -1 -1 -1 -1 -1

// 11.1 Inserting elements in vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(2);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }

//     // checking size of vector
//     cout<<v.size()<<endl;

//     // checking wheather vector is empty or not
//     // it returns true or false
//     cout<<v.empty()<<endl;
// }

// Output:
// 2

// 12- 2-D Vector

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>>arr(5,vector<int>(10,5));

//     // row size in 2-d vector -> size of vector
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output:
// 5 5 5 5 5 5 5 5 5 5
// 5 5 5 5 5 5 5 5 5 5
// 5 5 5 5 5 5 5 5 5 5
// 5 5 5 5 5 5 5 5 5 5
// 5 5 5 5 5 5 5 5 5 5

// 13. Jagged Array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr;

    // 1-D Arrays
    vector<int> vec1(6,0);
    vector<int> vec2(5,1);
    vector<int> vec3(4,0);

    // Inserting 1-D Arrays into 2-D array
    arr.push_back(vec1);
    arr.push_back(vec2);
    arr.push_back(vec3);

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Output:
// 0 0 0 0 0 0 
// 1 1 1 1 1
// 0 0 0 0
