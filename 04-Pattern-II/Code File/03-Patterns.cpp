// Pattern-19:Fancy Pattern

// *
// **
// ***
// ****
// *****

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
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

// Pattern-20:
// 1
// 22
// 333
// 4444
// 55555

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
//             cout << i + 1;
//         }
//         cout << endl;
//     }
// }

// Output:
// enter n:
// 5
// 1
// 22
// 333
// 4444
// 55555

// Pattern-21:
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
// for (int i = 0; i < n; i++)
// {

//     for (int j = 0; j < 2*i+1; j++)
//     {
//         if(j%2==0){
//            cout<<i+1;
//         }
//         else{
//             cout<<"*";
//         }
//     }
//     cout << endl;
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

// Pattern-22:
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
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

//         for (int j = 0; j < 2*n-2*i-1; j++)
//         {
//             if(j%2==0){
//                cout<<n-i;
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout << endl;
//     }
// }

// Output:
// enter n:
// 5
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1

// Pattern-23:
// 4
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//      for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < 2*i+1; j++)
//         {
//             if(j%2==0){
//                cout<<i+1;
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < 2*n-2*i-1; j++)
//         {
//             if(j%2==0){
//                cout<<n-i;
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout << endl;
//     }
// }

// Output:
// enter n:
// 4
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1

//  Alternative
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << i + 1;
    //         if (j != i) // if(not a last character) print star
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << n - i;

//             if (j != n - i - 1)
//             {
//                 cout << "*";
//             }
//         }
//         cout << endl;
//     }
// }

// Ouput:
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
