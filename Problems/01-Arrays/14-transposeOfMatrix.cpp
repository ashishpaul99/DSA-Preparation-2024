// 10. Transpose of a matirx
// 1 2 3                  1 4 8
// 4 6 7        ----->    2 6 7
// 8 9 10                 3 7 10
// #include <iostream>
// using namespace std;
// void transposeMatrix(int arr[3][3], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = i; j < col; j++)
//         {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int row = 3;
//     int col = 3;
//     transposeMatrix(arr, row, col);
// }

// Output:
// 1 4 7
// 2 5 8
// 3 6 9