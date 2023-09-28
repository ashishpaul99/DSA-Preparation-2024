// if else vs Switch case
// Example-1:
// #include<iostream>
// using namespace std;
// int main(){
//  float a;
//  cout<<"enter a:"<<endl;
//  cin>>a;

//  float b;
//  cout<<"enter b:"<<endl;
//  cin>>b;

//  int op;
//  cout<<"enter op:"<<endl;
//  cin>>op;
//  float result;

// //  0-> Add, 1->sub, 2->mul, 3->div

//  if(op==0){
//     result = a+b;
//  }
//  else if(op=1){
//     result=a-b;
//  }
//  else if(op=2){
//     result=a*b;
//  }
//  else if(op=3){
//     result=a/b;
//  }
//  else{
//     cout<<"invalid operation"<<endl;
//  }

//  cout<<"Your answer is:"<<result<<endl;

// }
// Output:
// enter a:
// 10
// enter b:
// 10
// enter op:
// 0
// Your answer is:20

// Example-2:
#include <iostream>
using namespace std;
  
// Driver Code
// int main()
// {
//     float a,b;
//     cout<<"enter a and b:"<<endl;
//     cin>>a>>b;
    

//     int op;
//     cout<<"enter op:"<<endl;
//     cin>>op;
    
//     float result;
//     switch (op) {
//     case 1:
//         cout << "Adding"<<endl;;
//         result=a+b;
//         break;
//     case 2:
//         cout << "subtracting"<<endl;
//         result=a-b;
//         break;
//     case 3:
//         cout << "Multiplying"<<endl;
//         result=a*b;
//         break;

//     case 4:
//         cout<<"dividing"<<endl;
//         result=a/b;
//         break;
//     default:
//         cout << "Invalid operation";
//         return 0;
//     }

//     cout<<"Your answer is:"<<result<<endl;
//     return 0;
// }