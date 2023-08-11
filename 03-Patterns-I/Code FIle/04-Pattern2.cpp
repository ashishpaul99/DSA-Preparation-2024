
// Pattern-5:Half Pyramid

// n=6

// *
// **
// ***
// ****
// *****
// ******

// Star Logic => no of stars =Row number
// row-1 -> 1 star
// row-2 -> 2 star
// row-3 -> 3 star
// row-4 -> 4 star
// row-5 -> 5 star
// row-6 -> 6 star

// #include<iostream>
// using namespace std;
// int main(){
//     for(int row=1;row<=6;row++){
//         for(int col=1;col<=row;col++){
//                 cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Output:
// *
// **
// ***
// ****
// *****
// ******

// =>Generic code for Half pyramid
// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout<<"enter n:"<<endl;
//    cin>>n;
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//    }
// }

// Output:
// enter n:
// 4
// *
// **
// ***
// ****

// Pattern-6:Inverted Half Pyramid
// ******
// *****
// ****
// ***
// **
// *

// ->Generic code for Inverted Half Pyramid
// Let n=6
// star logic-> (n-row)+1

//         (n-row)+1
// row-1->  6-1+1 -> 6 stars -> ******
// row-2->  6-2+1 -> 5 stars -> *****
// row-3->  6-3+1 -> 4 stars -> ****
// row-4->  6-4+1 -> 3 stars -> ***
// row-5->  6-5+1 -> 2 stars -> **
// row-6->  6-6+1 -> 1 stars -> *

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout<<"enter n:"<<endl;
//    cin>>n;
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//    }
// }

// enter n:
// 6
// ******
// *****
// ****
// ***
// **
// *

// Pattern-7: Numeric Half Pyramid
// 1
// 12
// 123
// 1234
// 12345

// number in row = 1 to row number of particular

// Let n=5

// row-1 -> 1
// row-2 -> 1 2
// row-3 -> 1 2 3
// row-4 -> 1 2 3 4
// row-5 -> 1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"enter n:"<<endl;
//    cin>>n;
//    for(int i=1 ; i<=n;i++){
//     for(int j=1 ;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
//    }
// }

// Output:
// enter n:
// 5
// 1
// 12
// 123
// 1234
// 12345

// Pattern-8: Inverted Numeric Half Pyramid

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// number logic:
// ->numbers in row = 1 to (n-row)+1

// Let n=6
//         (n-row)+1
// row-1->  6-1+1 -> 6  -> 123456
// row-2->  6-2+1 -> 5  -> 12345
// row-3->  6-3+1 -> 4  -> 1234
// row-4->  6-4+1 -> 3  -> 123
// row-5->  6-5+1 -> 2  -> 12
// row-6->  6-6+1 -> 1  -> 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (n - i) + 1; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// Output:
// enter n:
// 6
// enter n:
// 5
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
