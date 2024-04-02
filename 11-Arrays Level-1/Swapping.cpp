// Swapping of Two numbers
// Method-1: Swapping using Addition and subtraction
// #include<iostream>
// using namespace std;
// int main(){
//     int x=10,y=5;
// cout<<"x and y before swapping"<<" "<<x<<" "<<y<<endl;
//     x=x+y;
//     y=x-y;
//     x=x-y;
// cout<<"x and y after swapping"<<" "<<x<<" "<<y<<endl;
// }

// Method-2: Swapping using multiplication and division
// #include<iostream>
// using namespace std;
// int main(){
//     int x=10, y=5;
//  cout<<"x and y before swapping"<<" "<<x<<" "<<y<<endl;
//     if(y==0){
//         x=y;
//         x=0;
//     }
//     else if(x==0){
//         x=y;
//         y=0;
//     }
//     else{
//         x=x*y;
//         y=x/y;
//         x=x/y;
//     }

// cout<<"x and y after swapping"<<" "<<x<<" "<<y<<endl;
// }
// Output:
// x and y before swapping 10 5
// x and y after swapping 5 10

// Method-3: Swapping using bitwise XOR
// #include<iostream>
// using namespace std;
// int main(){
//     int x=5,y=20;
// cout<<"x and y before swapping"<<" "<<x<<" "<<y<<endl;
//     x=x^y;
//     y=x^y;
//     x=x^y;
// cout<<"x and y after swapping"<<" "<<x<<" "<<y<<endl;

// }

// Method-4: using temporary varaible
#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 5, temp;
    cout << "x and y before swapping"
         << " " << x << " " << y << endl;
    temp = x; // temp=10
    x = y;    // x=5
    y = temp; // y=10
    cout << "x and y after swapping"
         << " " << x << " " << y << endl;
}
