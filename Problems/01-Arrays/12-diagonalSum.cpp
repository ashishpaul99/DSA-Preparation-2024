// 8. Diagonal Sum
//  1, 2, 3, 4
//  5, 6, 7, 8
//  9, 10, 11, 12
// 13, 14, 15, 16

// ->Diagonal sum = 1+6+11+16 = 34

// #include <iostream>
// using namespace std;
// void diagonalSum(int arr[4][4], int row, int col)
// {
//    int sum = 0;
//    for (int i = 0; i < col; i++)
//    {

//       for (int j = 0; j < row; j++)
//       {
//          if(i==j){
//              sum = sum + arr[j][i];
//          }
//       }
//    }
//    cout <<"sum of diagonal elements:"<<sum<<endl;
// }
// int main()
// {
//    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12},{13,14,15,16}};
//    int row = 4;
//    int col = 4;
//    diagonalSum(arr, row, col);
// }

// Output:sum of diagonal elements:34

// Alternative
// #include <iostream>
// using namespace std;
// void diagonalSum(int arr[4][4], int row, int col)
// {
//    int sum = 0;
//    for (int i = 0; i < col; i++)
//    {
//       sum = sum + arr[i][i];
//    }
//    cout << "diagonal sum: " << sum << endl;
// }
// int main()
// {
//    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//    int row = 4;
//    int col = 4;
//    diagonalSum(arr, row, col);
// }

// Output:
// diagonal sum: 34