// Pattern-30 Solid square pattern
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output:
// enter n:
// 5
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// Pattern-31: Hollow square
// * * * * *
// *       *
// *       *
// *       *
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
//         for (int j = 0; j < n; j++)
//         {
//             if (i == 0 || i == n - 1 || j == 0 ||j==n-1)
//             {
//                 cout << "*"<<" ";
//             }
//             else
//             {
//                 cout << " "<<" ";
//             }
//         }
//         cout << endl;
//     }
// }

// Output:
// enter n:
// 5
// * * * * *
// *       *
// *       *
// *       *
// * * * * *

// Pattern-32:
// *****
// *  *
// * *
// **
// *

//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==0 || j==0 || j==n-i-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//  }

// enter n:
// 5
// *****
// *  *
// * *
// **
// *

// Pattern-33: uneven Hollow Pyrmaid
// *
// **
// * *
// *  *
// *****
// #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//        for(int j=0;j<i+1;j++){
//           if(j==0 || i==n-1 || j==i){
//             cout<<"*";
//           }
//           else{
//             cout<<" ";
//           }
//        }
//        cout<<endl;
//     }
//  }

//  Output:
//  enter n:
// 5
// *
// **
// * *
// *  *
// *****

// Pattern-34: Numeric hollow half pyramid
// 1
// 12
// 1 3
// 1  4
// 12345
// #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){

//         for(int j=0 ;j<i+1;j++){
//             if(j==0 || i==n-1 || j==i){
//              cout<<j+1;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//  }
//  Output:
// 5
// 1
// 12
// 1 3
// 1  4
// 12345

// Pattern-35: Hollow Inverted Half Pyramid
// *****
// *  *
// * *
// **
// *

// -> n=5

// #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//        for(int j=0;j<n-i;j++){
//          if(i==0 || j==0 || j==n-i-1){
//            cout<<"*";
//          }
//          else{
//             cout<<" ";
//          }
//        }
//        cout<<endl;
//     }
//  }

// Output:
//  enter n:
// 5
// *****
// *  *
// * *
// **
// *

// Pattern-36: Numeric solid inverted half pyramid
// 12345
// 1234
// 123
// 12
// 1
// #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){

//        for(int j=0;j<n-i;j++){
//           cout<<j+1;
//        }
//        cout<<endl;
//     }
//  }

// Output:
// 5
// 12345
// 1234
// 123
// 12
// 1

// Pattern-37:
// 12345
// 2  3
// 3 4
// 45
// 5

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int k=i;

//         for (int j = 0; j <n - i; j++)
//         {
//             if(i==0 || j==0 || j==n-i-1){
//                 cout<<k+1;
//                 k++;
//             }
//             else{
//                 cout<<" ";
//             }
//         }

//         cout << endl;
//     }
// }
// Outout:
// enter n:
// 5
// 12345
// 2  3
// 3 4
// 45
// 5

// Pattern-38:Numeric Hollow Inverted Half Pyramid
// 12345
// 1  4
// 1 3
// 12
// 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n - i; j++)
//         {
//             if(j==0 || i==0 || j==n-i-1 ){
//                 cout<<j+1;
//             }
//             else{
//                 cout<<" ";
//             }
//         }

//         cout << endl;
//     }
// }

// Output:
// enter n:
// 5
// 12345
// 1  4
// 1 3
// 12
// 1

// Pattern-39: Numeric Hollow Inverted Half Pyramid
// 12345
// 2  5
// 3 5
// 45
// 5

// Pattern-40:Numeric Palindrome equilateral pyramid
//     1
//    121
//   12321
//  1234321
// 123454321

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n-i-1; j++)
//         {
//              cout<<" ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<j+1;
//         }
//         for(int j=i;j>=1;j--){
//             cout<<j;
//         }
//         cout << endl;
//     }
// }

// Ouput:
// enter n:
// 5
//     1
//    121
//   12321
//  1234321
// 123454321

// Pattern-41 Fancy Pattern #1

// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         // printing star
//         for (int j = 0; j < n - i + 3; j++)
//         {
//             cout << "*";
//         }

//         // printing numbers and stars
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             if (j % 2 == 0)
//             {
//                 cout << i + 1;
//             }
//             else
//             {
//                 cout << "*";
//             }
//         }

//         // Printing stars
//         for (int j = 0; j < n - i + 3; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
