// Pattern-16: Hollow Diamond
//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             if (j == 0 || j == 2 * i)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 0; j < 2 * n - 2 * i - 1; j++)
//         {
//             if (j == 0 || j == 2 * n - 2 * i - 2)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// Output:
// enter n:
// 5
//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *

// Pattern-17: structures hoolow diamond
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;

//     // Upper triangle
//     for (int i = 0; i < n; i++)
//     {
//         int k = 0;
//         for (int j = 0; j < 2 * n - 1; j++)
//         {
//             if (j < n - i - 1)
//             {
//                 cout << " ";
//             }
//             else if (k < 2 * i + 1)
//             {
//                 if (k == 0 || k == 2 * i)
//                 {
//                     cout << "*";
//                 }
//                 else
//                 {
//                     cout << " ";
//                 }
//                 k++;
//             }
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int k = 0;
//         for (int j = 0; j < 2 * n - 1; j++)
//         {
//             if (j < i)
//             {
//                 cout << " ";
//             }
//             else if (k < 2 * n - 2 * i - 1)
//             {
//                 if (k == 0 || k == 2 * n - 2 * i - 2)
//                 {
//                     cout << "*";
//                 }
//                 else
//                 {
//                     cout << " ";
//                 }
//                 k++;
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// Output:
// enter n:
// 5
//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *

// Pattern-18:Flipped solid diamond
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****

// here n=5:

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
//             cout <<"*";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//         {
//             cout <<"*";
//         }
//         for(int j=0;j<2*n-2*i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }

// Output:
// enter n:
// 5
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****

// alternative flipped hollow diamond
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n:" << endl;
//     cin >> n;
//     // Upper part
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n - i; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < i; j++)
//         {
//             cout << " "
//                  << " ";
//         }
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // Ḷower part
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// Output:
// 5
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 2; j++)
//         {
//             if (i = 0)
//             {
//                 cout << i + 1;
//                 cout << " ";
//             }
//             else
//             {
//                 cout << i + 1;
//                 cout << "*";
//             }
//         }

//         cout << endl;
//     }
// }