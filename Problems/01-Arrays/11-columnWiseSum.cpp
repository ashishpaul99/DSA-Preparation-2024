// 11. column wise sum
// #include <iostream>
// using namespace std;
// void rowSum(int arr[3][4], int row, int col)
// {
//    for (int i = 0; i < col; i++)
//    {
//       int sum = 0;
//       for (int j = 0; j < row; j++)
//       {
//          sum = sum + arr[j][i];
//       }
//       cout <<"sum of column "<<i<<":"<<sum<<endl;
//    }
// }
// int main()
// {
//    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//    int row = 3;
//    int col = 4;
//    rowSum(arr, row, col);
// }

// Output:
// sum of column 0:15
// sum of column 1:18
// sum of column 2:21
// sum of column 3:24