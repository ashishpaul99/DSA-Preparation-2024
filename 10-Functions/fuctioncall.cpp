// // Reference Variable
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int &k=n;
//     int &m=n;
//     cout<<"n: "<<n<<endl;
//     cout<<"k: "<<k<<endl;
//     cout<<"m: "<<m<<endl;

//     k++;
//     cout<<"n: "<<n<<endl;
//     cout<<"k: "<<k<<endl;
//     cout<<"m: "<<m<<endl;

// }

// 1. call by value
//  ->if we change value of n in  function then actual value of n in main fuction will not change.
//  #include<iostream>
//  using namespace std;
//  int increamentn(int n){
//     n=n+1;
//     return n;
//  }
//  int main(){
//      int n;
//      cout<<"enter n:"<<endl;
//      cin>>n;
//      n=increamentn(n);
//      cout<<"n after incrementing by one: "<<n<<endl;
//  }

// 2. Call by reference
// ->if we change value of n in  function then actual value of n in main fuction will change.
// #include <iostream>
// using namespace std;
// int increment(int &k)
// {
//     k = k * 100;
// }
// int main()
// {
//     int n;
//     cout << "enter n:" << endl;
//     cin >> n;
//     increment(n);
//     cout << n << endl;
// }
