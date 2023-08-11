// Pattern-24
// A
// AB
// ABC
// ABCD
// ABCDE

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         char c='A';
//         for(int j=0;j<i+1;j++){
//             cout<<c++;
//         }
//         cout<<endl;

//     }
// }

// Output:
// enter n:
// 5
// A
// AB
// ABC
// ABCD
// ABCDE

// Pattern-25:
// A
// BC
// DEF
// GHIJ
// KLMNO

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;

//     char c='A';
//     for(int i=0;i<n;i++){

//         for(int j=0;j<i+1;j++){
//             cout<<c;
//         c++;
//         }
//         cout<<endl;

//     }

// }

// Pattern-26

// A
// BB
// CCC
// DDDD
// EEEEE
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;

//     char c='A';
//     for(int i=0;i<n;i++){

//         for(int j=0;j<i+1;j++){
//             cout<<c;
//         }
//         cout<<endl;
//         c++;

//     }
// }
// output:
// enter n:
// 5
// A
// BB
// CCC
// DDDD
// EEEEE

// Pattern-27:
//
// A
// BA
// CBA
// DCBA

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;

//     char c = 'A'-1;

//     for (int i = 0; i < n; i++)
//     {
//         char k=c;
//         for (int j = 0; j < i; j++)
//         {
//             cout << k;
//             k--;

//         }
//         cout << endl;
//         c++;
//     }
// }

// Pattern-28:

// 1
// 121
// 12321
// 1234321
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
//       int c=1;
//       for(int j=0;j<i+1;j++){
//         cout<<c++;
//       }
//       for(int j=i;j>=1;j--){
//         cout<<j;
//       }
//       cout<<endl;
//     }
// }

// Pattern-29:
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter n:" << endl;
  cin >> n;

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < i + 1; j++)
    {
      int ans = j;
      char ch = ans + 'A';
      cout << ch;
    }

    // Reverse printing
    for (int j = i; j >= 1; j--)
    {
      int ans = j;
      char ch = ans + 'A' - 1;
      cout << ch;
    }
    cout << endl;
  }
}

// Output:
// 5
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
