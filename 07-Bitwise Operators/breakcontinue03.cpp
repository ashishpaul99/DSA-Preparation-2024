// Example-1
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=5;i++){
//         cout<<i<<endl;
//         if(i==3)
//           break;
//     }
// }

// Example-2:
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=5;i++){
        if(i==3)
          continue;
        cout<<i<<endl;
    }
}

// Output:
// 0
// 1
// 2
// 4
// 5