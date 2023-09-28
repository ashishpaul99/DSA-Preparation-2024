// Pattern Printing
// 1. Square
// #include<iostream>
// using namespace std;
// int main(){
//     // Outer loop ->row
//     for(int i=0;i<4;i++){

//         // Print 4 stars
//         for(int j=0;j<4;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output:
// * * * *
// * * * *
// * * * *
// * * * *

// 2. Rectangle
// #include<iostream>
// using namespace std;
// int main(){

//   Outer loop for rows
//     for(int i=0;i<3;i++){

//     printing stars in each row
//         for(int j=0;j<5;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output:
// * * * * *
// * * * * *
// * * * * *

// 3. Hollow Rectangle
// * * * * * *
// *         *
// *         *
// *         *
// * * * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     // Outer loop for rows
//     for(int i=0;i<5;i++){
//         for(int j=0;j<6;j++){
//             if(i==0 || i==4){
//                 cout<<"*"<<" ";
//             }
//             else{
//                if(j==0 || j==5){
//                 cout<<"*"<<" ";
//                }
//                else{
//                  cout<<" "<<" ";
//                }

//             }

//         }
//         cout<<endl;
//     }
// }

// Output:
// * * * * * *
// *         *
// *         *
// *         *
// * * * * * *

// Generalizing code
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int row;
//      cout<<"enter row:"<<endl;
//      cin>>row;
//      int col;
//      cout<<"enter col:"<<endl;
//      cin>>col;

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(i==0  || i==row-1){
//                 cout<<"*"<<" ";
//             }
//             else{
//                 if(j==0 || j==col-1){
//                     cout<<"*"<<" ";

//                 }
//                 else{
//                     cout<<" "<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }

// Output:
// enter row:
// 4
// enter col:
// 5
// * * * * *
// *       *
// *       *
// * * * * *

// 4. Half Pyramid

// *
// * *
// * * *
// * * * *
// * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*"
//                  << " ";
//         }
//         cout << endl;
//     }
// }

// Output:
// enter n:
// 5
// *
// * *
// * * *
// * * * *
// * * * * *

// Pattern-5 : Inverted pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl; 
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Output:
// enter n:
// 5
// *****
// ****
// ***
// **
// *

// Pattern-6: Numeric Half Pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }
// Output:
// enter n:
// 5
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// Pattern-7: Inverted Half Pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output:
// enter n:
// 5
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1




