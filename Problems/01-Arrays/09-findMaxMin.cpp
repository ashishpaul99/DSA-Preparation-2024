// 5. Find maximum number in an array
// #include<iostream>
// #include<limits.h>
// using namespace std;

// void findMaximum(int arr[][3],int row, int col){
//    int max=INT_MIN;
//    for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//          if(arr[i][j]>max){
//             max=arr[i][j];
//          }
//       }
//    }
//    cout<<"Printing maximum number in array: "<<max<<endl;
// }

// void findMinimum(int arr[][3],int row, int col){
//    int min=INT_MAX;
//    for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//           if(arr[i][j]<min){
//             min=arr[i][j];
//           }
//       }
//    }
//    cout<<"Printing minmum number in array: "<<min<<endl;
// }

// int main(){
//    int row=3;
//    int col=3;
//    int arr[3][3]={{10,90,30},{40,70,60},{50,80,20}};
//    findMaximum(arr,row,col);
//    findMinimum(arr,row,col);
// }

// Output:
// Printing maximum number in array: 90
// Printing minmum number in array: 10