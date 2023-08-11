// Pattern-42: Solid Half Diamond
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

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
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n - i-1; j++)
//         {
//             cout <<"*";
//         }
//         cout << endl;

//     }

// }

// Output:

// enter n:
// 5
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// Pattern-43: fancy Pattern-3

// *
// *1*
// *121*
// *12321*
// *1234321*

// n=5

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         // printing stars
//         for (int j = 0; j <2*i+1; j++)
//         {
//             if(j==0){
//               cout <<"*";
//             }
//         }
//         // Printing numbers
//         for(int j=0;j<i;j++){
//             cout<<j+1;
//         }
//         // printing reverse numbers
//         for(int j=i-1;j>=1;j--){
//             cout<<j;
//         }
//         // Printing stars
//          for (int j = i+1; j <=2*i+1; j++)
//         {
//             if(j==2*i){
//               cout <<"*";
//             }
//         }
//         cout << endl;
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<2*n-1;j++){
//             if(j==0){
//               cout<<"*";
//             }
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout<<j+1;
//         }
//         for(int j=n-i-2;j>=1;j--){
//             cout<<j;
//         }
//         for(int j=i+1;j<2*n-1;j++){
//             if(j==n-2*i+3){
//                  cout<<"*";
//             }

//         }

//         cout<<endl;
//     }
// }

// Pattern-44:
// *1234321*
// *12321*
// *121*
// *1
// *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<2*n-1;j++){
//             if(j==0){
//               cout<<"*";
//             }
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout<<j+1;
//         }
//         for(int j=n-i-2;j>=1;j--){
//             cout<<j;
//         }
//         for(int j=i+1;j<2*n-1;j++){
//             if(j==n-2*i+3){
//                  cout<<"*";
//             }
//         }
//     cout<<endl;
//     }
// }
