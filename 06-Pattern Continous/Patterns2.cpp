// Pattern-14: flipped solid diamond
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     // section code
//     for(int i=0;i<n;i++){
//         // Iverted pyramid(stars)
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }

//         // full pyramid(spaces)
//         for(int j=0;j<2*i+1;j++){
//             cout<<" ";
//         }

//         // invered pyramid(star)
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     // section-2 code
//     for(int i=0;i<n;i++){

//         // pyramid(stars)
//         for(int j=0;j<i+1;j++){
//             cout<<"*";
//         }

//         // inverted full pyramid(spaces)
//         for(int j=0;j<2*n-2*i-1;j++){
//             cout<<" ";
//         }

//         // pyramid(stars)
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

// Pattern-15: fancy PAttern-1
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){

//             if(j==i){
//                 cout<<i+1;
//             }
//             else{
//                 cout<<i+1<<"*";
//             }
//         }
//         cout<<endl;
//     }

// }

// Output:
// enter n:
// 5
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5

// Alternative:
// ->Print numbers for even column numbers
// ->print numbers for odd column numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<2*i+1;j++){
//         if(j%2==0){
//             cout<<i+1;
//         }
//         else{
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }
// }

// Output:
// enter n:
// 5
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5

// Pattern-16:fancy pattern-2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:" << endl;
    cin >> n;
    int k = n;
    // fancy pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << i + 1;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    // inverted fancy pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (j == n - i - 1)
            {
                cout << k;
            }
            else
            {
                cout << k << "*";
            }
        }
        cout << endl;
        k--;
    }
}

// enter n:
// 5
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1