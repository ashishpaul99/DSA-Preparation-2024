// Pattern-24:Solid Half Diamond
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;

//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;

//     }
// }

// Output:
// enter n:5
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// // Pattern-25: Floyd's triangle
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << count + 1 << " ";
//             count++;
//         }
//         cout << endl;
//     }
// }

// Output:
// enter n:6
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21

// Pattern-26: Butterfly Pattern
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < 2 * n - 2 * i - 2;j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << "*";
//         }

//         for (int j = 0; j < 2 * i + 2; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }
// }

// Output:
// enter n:5
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
