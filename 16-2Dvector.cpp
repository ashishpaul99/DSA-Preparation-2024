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
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<vector<int>> arr;

//     // 1-D Arrays
//     vector<int> vec1(6,0);
//     vector<int> vec2(5,1);
//     vector<int> vec3(4,0);

//     // Inserting 1-D Arrays into 2-D array
//     arr.push_back(vec1);
//     arr.push_back(vec2);
//     arr.push_back(vec3);

//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output:
// 0 0 0 0 0 0 
// 1 1 1 1 1
// 0 0 0 0
