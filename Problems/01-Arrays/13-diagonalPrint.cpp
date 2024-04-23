// 9. Diagonal Print
// #include <iostream>
// using namespace std;
// void diagonalSum(int arr[4][4], int row, int col)
// {
//    for (int i = 0; i < col; i++)
//    {
//       cout<<arr[i][i]<<" ";
//    }
// }
// int main()
// {
//    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//    int row = 4;
//    int col = 4;
//    diagonalSum(arr, row, col);
// }

// Output:
// 1 6 11 16

// 10. Printing another diagonal
//  1,  2,  3,  4
//  5,  6,  7,  8
//  9, 10, 11, 12
// 13, 14, 15, 16

// Diagonal elements= 13,10,7,4

// #include <iostream>
// using namespace std;
// void diagonalSum(int arr[4][4], int row, int col)
// {
//      for(int i=row-1,j=0;i>=0;i--,j++){
//         cout<<arr[i][j]<<" ";
//      }
// }
// int main()
// {
//    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//    int row = 4;
//    int col = 4;
//    diagonalSum(arr, row, col);
// }

// Output: 13 10 7 4
