// Type casting 
// 1. Implicit Type conversion
// example-1:int to float
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     float b=5.5;
//     float result=a+b;
//     cout<<result<<endl; //Output: 15.5

// }

// example-2: float to int
// #include<iostream>
// using namespace std;
// int main(){

//     int a=10;
//     float b=5.5;
//     int result=a+b;
//     cout<<result<<endl; //Output: 15

// }

// example-3: char to int
// #include<iostream>
// using namespace std;
// int main(){

    // char c='A';
    // int a=c+1;    //implicit conversion from char to int
    // cout<<a<<endl; //Output:66

  
// }

// example-4:
// #include<iostream>
// using namespace std;
// int main(){

//     char c='A';
//     char a=c+1;    
//     cout<<a<<endl;  //Output:B

// }

// Example-5: int to char
// #include<iostream>
// using namespace std;
// int main(){

//     int a=97;
//     char b=a;    //implicit conversion from char to char
//     cout<<b<<endl;  //Output:a

// }

// 2. Explicit Type Conversion
// Example-1:Expicit conversion from float to int 
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     float b=5.5;
//     float result=a+(int)b; 
//     cout<<result<<endl;

// }

// Output: 15

// Example-2: double to int
// #include<iostream>
// using namespace std;
// int main(){
//     double pi=3.14159;
//     int intpi=(int)pi;
//     cout<<intpi<<endl; 
// }

// Output:3

// Example-3: float to char
// ->char acts as int
// #include<iostream>
// using namespace std;
// int main(){
//     float floatnum=65.6;
//     char charvalue=(char)floatnum;
//     cout<<charvalue<<endl;

// }

// Output: A


#include<iostream>
using namespace std;
int main(){
    if(~0==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"N0"<<endl;
    }
}

