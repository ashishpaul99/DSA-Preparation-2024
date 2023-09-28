// Pattern-17 : hollow pyramid pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){

//             // printing stars in first and last row
//             if(i==0 || i==n-1){
//                 cout<<"*";
//             }
//             else{

//                 // print stars in fist and last column
//                 if(j==0 || j==n-i-1){
//                     cout<<"*";
//                 }

//                 // spaces between stars
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }

// Output:
// enter n:
// 6
// ******
// *   *
// *  *
// * *
// **
// *

// Pattern-18:hollow numeric pyramid pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             if(i==0 || i==n-1){
//                 cout<<j+1;
//             }
//             else{
//                 if(j==0  || j==i){
//                     cout<<j+1;
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }

// Output:
// enter n:5
// 1
// 12
// 1 3
// 1  4
// 12345

// Pattern-19:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     int k = 0;
//     int count=0;
//     for (int i = 0; i < n; i++)
//     {
//         char ch;
//         for (int j = 0; j < i + 1; j++)
//         {
//             ch= j + 1 + 'A'-1;
//             cout << ch;
//         }

//     //    print until A is not reached
//         for(char alpha=ch ; alpha>'A';){
//             alpha=alpha-1;
//             cout<<alpha;
//         }

//         cout << endl;

//     }
// }

// enter n:5
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

// Pattern-20:
// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         int k = i+1;
//         for(int j=0;j<n-i;j++){
//          cout<<k;
//          k++;
//         }

//         cout << endl;
//     }
// }

// Output:
// enter n:5
// 12345
// 2345
// 345
// 45
// 5

// Pattern-21:
// 1 2 3 4 5
// 2     5
// 3   5
// 4 5
// 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         int k = i+1;
//         for(int j=0;j<n-i;j++){
//           if(i==0 || i==n-1){
//                cout<<k;
//           }
//           else{
//             if(j==0 || j==n-i-1){
//                 cout<<k;
//             }
//             else{
//                 cout<<" ";
//             }
//           }

//          k++;
//         }
//         cout << endl;
//     }
// }

// Output:
// enter n:5
// 12345
// 2  5
// 3 5
// 45
// 5

// Pattern-22 Numeric Plindrome equilateral pyramid
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int num;
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i + 1; j++)
//         {
//             num = j + 1;
//             cout << num;
//         }

//         for (int k = num; k > 1;)
//         {
//             k = k - 1;
//             cout << k;
//         }
//         cout << endl;
//     }
// }

// Output:
// enter n:5
//     1
//    121
//   12321
//  1234321
// 123454321

// Pattern-23:
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cout << "enter n:";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < 2 * n - i - 2; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < i + 1; j++)
//         {
//             if (j == i)
//             {
//                 cout << i + 1;
//             }
//             else
//             {
//                 cout << i + 1 << "*";
//             }
//         }
//         for (int j = 0; j < 2 * n - i - 2; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// Output:
// enter n:5
// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****



