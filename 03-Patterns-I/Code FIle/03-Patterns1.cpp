// 3. Pattern Solving
// Step-1: Observe how many rows are present in pattern.
// Step-2: Observe how many columns are present in pattern.
// Step-3:see how many stars are priting in each column. Then print that many starts in column.

// 57:35
// ->Patterns are printed using nested loops
//->nested loop
// a. 2 loops
// b. Multiple loops

// ->a. 2 loops
//  i. Outer loop represents rows
//  ii.Inner loop represnts columns

// eg:
// for(int i=1;i<n;i++)     -> Outer loop
// {
//     for(int j=1;j<n;j++) -> inner loop
//     {

//     }
// }

//  Pattern-1: Solid Reactangle
//  * * * *
//  * * * *
//  * * * *

// Step-1: Observe how many rows are present in pattern.
// row -> 3 rows

// Step-2: Observe how many columns are present in pattern.
// columns->5 rows

// Step-3:see how many stars are priting in each column. Then print that many starts in column.
// column-1 -> print 5 stars
// column-2 -> print 5 stars
// column-3 -> print 5 stars

// #include <iostream>
// using namespace std;
// int main()
// {
// Outer loop for row
//     for (int row = 1; row <= 3; row++)
//     {
// Outer loop for column
//         for (int col = 1; col <= 5; col++)
//         {
//             cout << "*"
//                  << " ";
//         }
//         // new line after each column
//         cout << endl;
//     }
// }

// Output:
// * * * * *
// * * * * *
// * * * * *

// Pattern-2: Print square pattern
// * * * *
// * * * *
// * * * *
// * * * *

// row from 1 to 4
// col from 1 to 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output:
// * * * *
// * * * *
// * * * *
// * * * *

// Genric code-Taking input from user
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
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

// Pattern-3: Hollow rectangle
// * * * * *
// *       *
// * * * * *

// Observation
// row-1 -> print 5 stars
// row-2 -> one star at starting, 3 spaces ,one star at last
// row-3-> print 5 stars

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 3; i++)
//     {

//         if (i == 1 || i == 3)
//         {
//             for (int j = 1; j <= 5; j++)
//             {
//                 cout << "*"
//                      << " ";
//             }
//         }
//         else
//         {
//             cout << "*"
//                  << " ";
//             for (int k = 2; k <= 4; k++)
//             {
//                 cout << " "
//                      << " ";
//             }
//             cout << "*"
//                  << " ";
//         }
//         cout << endl;
//     }
// }

// Output:
// * * * * *
// *       *
// * * * * *

// Alternative: Genric code
// #include <iostream>
// using namespace std;
// int main()
// {

//     int rowCount,colCount;
//     cout<<"Enter rowCount:"<<endl;
//     cout<<"Enter colCount:"<<endl;
//     cin>>rowCount;
//     cin>>colCount;

//     for (int i = 1; i <= rowCount; i++)
//     {

//         if (i == 1 || i == rowCount)
//         {
//             for (int j = 1; j <= colCount; j++)
//             {
//                 cout << "*"
//                      << " ";
//             }
//         }
//         else
//         {
//             cout << "*"
//                  << " ";
//             for (int k = 2; k <= colCount-1; k++)
//             {
//                 cout << " "
//                      << " ";
//             }
//             cout << "*"
//                  << " ";
//         }
//         cout << endl;
//     }
// }

// Output:
// Enter rowCount:
// Enter colCount:
// 4
// 6
// * * * * * *
// *         *
// *         *
// * * * * * *

// Pattern-4: Print hollow square
// * * * * *
// *       *
// *       *
// *       *
// *       *
// * * * * *

// row-1 -> 5 stars
// row-2 -> 1 star,3 spaces , 1 star
// row-3 -> 1 star,3 spaces , 1 star
// row-4 -> 1 star,3 spaces , 1 star
// row-5 -> 5 stars

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++){
//         if(i==1 || i==5){
//             for(int j=1;j<=5;j++){
//                 cout<<"*"<<" ";
//             }
//         }
//         else{
//             cout<<"*"<<" ";
//             for(int k=2;k<=4;k++){
//                 cout<<" "<<" ";
//             }
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output:
// * * * * *
// *       *
// *       *
// *       *
// * * * * *

// Alternative: Genric code
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i == 1 || i == n)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 cout << "*"
//                      << " ";
//             }
//         }
//         else
//         {
//             cout << "*"
//                  << " ";
//             for (int k = 2; k <= n - 1; k++)
//             {
//                 cout << " "
//                      << " ";
//             }
//             cout << "*"
//                  << " ";
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
