// 8. Searching
// ->searching elements in 2-D Array.
// 10 20 30
// 40 50 60
// 70 80 90

// ->target=70   -----> Output: true or false
// ->check wheather 70 is present in 2-D array  or not.
// ->if 70 is present print true.
// ->if 70 not found print false.


// Code

// #include<iostream>
// using namespace std;

// bool linearSearch(int arr[][3],int row, int col,int target){
//    for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//           if(arr[i][j]==target){
//             // if target found, return true
//               return true;
//           }
//       }
//    }
//    // if target not found after checking all elements
//    return false;
// }
// int main(){
//    int row=3;
//    int col=3;
//    int target=70;
//    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
//    bool result=linearSearch(arr,row,col,target);
//    // cout<<result<<endl;
//    if(result){
//        cout<<"element found"<<endl;
//    }
//    else{
//       cout<<"element not found"<<endl;
//    }
// }

// Output:
// element found