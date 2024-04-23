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