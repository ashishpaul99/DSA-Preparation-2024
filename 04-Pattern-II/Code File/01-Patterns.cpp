// Pattern-13
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
// for(int i=0;i<n;i++){
//     int k=0;
//     for(int j=0;j<(2*n-1);j++){
//         if(j<n-i-1){
//             cout<<" ";
//         }
//         else if(k<i+1){
//             cout<<"*"<<" ";
//             k++;
//         }
//     }
//     cout<<endl;
// }
// }

// Output:
// enter n:
// 5
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

// Alternative
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){

//         for(int j=0;j<n-i-1;j++){
//            cout<<" ";
//         }
//         for(int j=0;j<i+1;j++){
//            cout<<"*"<<" ";
//         }

//         cout<<endl;
//     }
// }

// enter n:
// 5
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

// Pattern-14: Inverted full pyramid
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {

//         int k = 0;
//         for (int j = 0; j < (2 * n - 1); j++)
//         {
//             if (j < i)
//             {
//                 cout <<" ";
//             }
//             else if (k < n - i)
//             {
//                 cout << "*"
//                      << " ";
//                 k++;
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
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

// Alternative:
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//        for(int j=0;j<i;j++){
//         cout<<" ";
//        }
//        for(int j=0;j<n-i;j++){
//         cout<<"*"<<" ";
//        }
//        cout<<endl;
//     }
// }

// Output:
// enter n:
// 5
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

// Pattern-15:

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//     // Full pyramid
//     for (int i = 0; i < n; i++)
//     {
//        for(int j=0;j<n-i-1;j++){
//           cout<<" ";
//        }
//        for(int j=0;j<i+1;j++){
//         cout<<"*"<<" ";
//        }
//        cout<<endl;
//     }

//     // Inverted full pyramid
//     for (int i = 0; i < n; i++)
//     {
//       for(int j=0;j<i;j++){
//         cout<<" ";
//        }
//        for(int j=0;j<n-i;j++){
//         cout<<"*"<<" ";
//        }
//        cout<<endl;
//     }
// }

// Output:
// enter n:
// 5
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

// Alternative:
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<< "enter n:" <<endl;
//     cin>>n;
//     // Full pyramid
//         for(int i=0;i<n;i++){
//         int k=0;
//         for(int j=0;j<(2*n-1);j++){
//             if(j<n-i-1){
//                 cout<<" ";
//             }
//             else if(k<i+1){
//                 cout<<"*"<<" ";
//                 k++;
//             }
//         }
//         cout<<endl;
//     }
//     // Inverted full pyramid
//      for (int i = 0; i < n; i++)
//     {

//         int k = 0;
//         for (int j = 0; j < (2 * n - 1); j++)
//         {
//             if (j < i)
//             {
//                 cout <<" ";
//             }
//             else if (k < n - i)
//             {
//                 cout << "*"
//                      << " ";
//                 k++;
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
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
