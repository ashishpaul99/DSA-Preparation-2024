 //Pattern-9: Full Pyramid
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *

// space logic=> n-row
// star logic => no of stars = 1 to row number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//     // for printing space
//     for(int j=1;j<=(n-i);j++){
//         cout<<" ";
//     }

//     // for printing star
//     for(int j=1;j<=i;j++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
//   }

// }

// Output:
// enter n:
// 6
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *

// Pattern-10: Inverted full pyramid
// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // for printing space
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << " ";
        }

        // for printing star
        for (int j = 1; j <= (n - i) + 1; j++)
        {
            cout << "*"<< " ";
        }
        cout << endl;
    }
}

// Output:
// enter n:
// 6
// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

// Pattern-11:

//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

// Space logic => n-row
// number logic of pyramid Part-1=>row to 2*(row)
// number logic of Pyramid part-2=>

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         // for printing space
//         for (int j = 1; j <= (n - i); j++)
//         {
//             cout << " "
//                  << " ";
//         }

//         // for printing pyramid part-1
//         for (int j = i; j < (2 * i); j++)
//         {
//             cout << j << " ";
//         }

//         // for printing pyramid part-2
//         int c = 2 * (i - 1);
//         for (int j = 1; j < i; j++)
//         {
//             cout << c << " ";
//             c--;
//         }
//         cout << endl;
//     }
// }

// enter n:
// 5
//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5
