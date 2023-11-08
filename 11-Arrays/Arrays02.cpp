// 1. Linear search in an Array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={2,4,6,8,11,10};
//     int key=10;
//     bool flag=true;
//     for(int i=0;i<6;i++){
//         if(key==arr[i]){
//             flag=true;
//             cout<<"key is found at "<<i<<endl;
//         }
//     }
//     if(flag=false){
//         cout<<"key is not found"<<endl;
//     }
// }

// Output:
// key is found at 5

// Alter
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 4, 5, 6, 8};
    int key = 8;
    int n = 5;
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "key found" << endl;
    }
    else
    {
        cout << "key not found" << endl;
    }

    return 0;
}
