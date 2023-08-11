// Pattern-45:
// 1
// 2*3
// 4*5*6
// 7*8*9*10

// ->n=4

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     int k=1;
//      for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << k;
//             if (j != i) // if(not a last character) print star
//             {
//                 cout <<"*";
//             }
//             k++;
//         }
//         cout << endl;
//     }
// }

// Output:
// enter n:
// 4
// 1
// 2*3
// 4*5*6
// 7*8*9*10

// Pattern-46: need to complete
// 1
// 2*3
// 4*5*6
// 7*8*9*10

// Pattern-47: Floyd's Triangle Pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 15

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     int k=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<k<<" ";
//             k++;
//         }
//         cout<<endl;
//     }
// }

// Output:
// enter n:
// 5
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// Pattern-48: Pascal triangle Pattern
// 1
// 1  1
// 1  2  1
// 1  3  3  1
// 1  4  6  4  1
// 1  5  10 10 5  1
// 1  6  15 20 15 6 1

// Pattern-49: Butterfly Pattern
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

// ->n=5

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // Printing stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // printing space
        for (int j = 2 * n - 2 * i - 2; j >= 1; j--)
        {
            cout << " ";
        }

        // printing stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Output:
// enter n:
// 5
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *
