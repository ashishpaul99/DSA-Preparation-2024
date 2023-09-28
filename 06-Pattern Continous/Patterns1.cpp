// Pattern-8: Full Pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         // Printing spaces
//         for(int j=0;j<n-i-1;j++){
//              cout<<" ";
//         }

//         // printing stars
//         for(int j=0;j<i+1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }

// }

// Output:
// 5
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

// Pattern-9: Inverted Full Pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<i;j++){
//         cout<<" ";
//     }
//     for(int j=0;j<n-i;j++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }

// }

// Output:
// enter n:
// 5
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

// Pattern-10 Diamond
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         // Printing spaces
//         for(int j=0;j<n-i-1;j++){
//              cout<<" ";
//         }

//         // printing stars
//         for(int j=0;j<i+1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
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

// Pattern-11: Hollow pyramid
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {

//     // Printing spaces
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 0; j < i + 1; j++)
//         {
//             // Printing star at first and last column
//             if (j == 0 || j == i)
//             {
//                 cout << "*"
//                      << " ";
//             }
//             else
//             {
//                 cout << " "
//                      << " ";
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

// Pattern-12: Inverted Hollow Pyramid
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter n:"<<endl;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<i;j++){
//         cout<<" ";
//     }
//     for(int j=0;j<n-i;j++){
//         if(j==0 || j==n-i-1){
//             cout<<"*"<<" ";
//         }
//         else{
//             cout<<" "<<" ";
//         }
//     }
//     cout<<endl;
//   }
// }

// Output:
// enter n:
// 5
// *       *
//  *     *
//   *   *
//    * *
//     *

// ALternative
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int k=0;
//         for(int j=0;j<2*n-2*i-1;j++){
//            if(j<i){
//             cout<<" ";
//            }
//            else if(k<2*n-2*i-1){
//              if(k==0 || k==2*n-2*i){
//                  cout<<"*";
//              }
//              else{
//                 cout<<" ";
//              }
//              k++;
//            }
//         }
//         cout<<endl;

//     }
// }

// Pattern-13: Holow Diamond
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;

//     // Printing upper part
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i + 1; j++)
//         {
//             if (j == 0 || j == i)
//             {
//                 cout << "*"
//                      << " ";
//             }
//             else
//             {
//                 cout << " "
//                      << " ";
//             }
//         }
//         cout << endl;
//     }

//     // Printing lower part
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i; j++)
//         {
//             if (j == 0 || j == n-i-1)
//             {
//                 cout << "*"
//                      << " ";
//             }
//             else
//             {
//                 cout << " "
//                      << " ";
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



