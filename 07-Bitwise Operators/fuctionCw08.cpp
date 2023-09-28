// Example-1: write a fuction to print sum of 3 numbers

// #include<iostream>
// using namespace std;

// void addThree(int a, int b, int c){
//      int sum=a+b+c;
//      cout<<sum<<endl;
// }
// int main(){
//    addThree(10,20,30);
//    return 0;
// }

// Output:
// 60

// Example-2: write a fuction to retrun sum of 3 numbers
// #include<iostream>
// using namespace std;

// int addThree(int a, int b, int c){
//      int sum=a+b+c;
//      return sum;
// }
// int main(){
//    addThree(10,20,30);             //fuction retruns sum

//    int result=addThree(10,20,30);
//    cout<<result<<endl; //printing returned value
//    return 0;
// }

// Example-3:  find max of 3 numbers
// #include<iostream>
// using namespace std;

// void maxOf(int a, int b, int c){
//     if(a>b){
//         if(a>c){
//             cout<<a<<" is greater"<<endl;
//         }
//         else{
//             cout<<c<<" is greater"<<endl;
//         }
//     }
//     else if(b>a){
//         if(b>c){
//             cout<<b<<" is greater"<<endl;
//         }
//         else{
//             cout<<c<<" is greater"<<endl;
//         }
//     }
// }
// int main(){
//     maxOf(60,20,40);
// }

// alter-1
// #include<iostream>
// using namespace std;

// void maxOf(int a, int b, int c){
//     if(a>=b && a>=c){
//             cout<<a<<" is greater"<<endl;
//     }
//     else if(b>=a && b>=c){
//             cout<<b<<" is greater"<<endl;
//     }
//     else{
//         cout<<c<<" is greater"<<endl;
//     }
// }
// int main(){
//     maxOf(60,90,90);
// }
// Output:
// 90 is greater

// alter-2:
// #include<iostream>
// using namespace std;

// void maxOf(int a, int b, int c){
//     if(a>=b && a>=c){
//             cout<<a<<" is greater"<<endl;
//     }
//     else if(b>=a && b>=c){
//             cout<<b<<" is greater"<<endl;
//     }
//     else{
//         cout<<c<<" is greater"<<endl;
//     }
// }
// int main(){
//     maxOf(60,90,90);
// }

// alter-3:
// #include<iostream>
// using namespace std;
// void maxOf(int a, int b,int c){
//   int ans1=max(a,b);
//   int ans2=max(ans1,c);
//   cout<<"max of 3 numbers is "<<ans2<<endl;
// }
// int main(){
//     maxOf(30,20,50);
// }

// Output:
// max of 3 numbers is 50

// Example-4: counting from 1 to n
// #include <iostream>
// using namespace std;
// void count(int n)
// {
//     for (int i = 1; i<=n; i++)
//     {
//         cout << i <<" ";
//     }
// }
// int main()
// {
//     count(10);
// }
// Output: 1 2 3 4 5 6 7 8 9 10

// Example-5:Check prime or not prime
// #include <iostream>
// using namespace std;
// void prime(int n)
// {

//     bool flag = true;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             flag = true;
//             cout << "it's not prime" << endl;
//             break;
//         }
//     }
//     if (flag = false)
//     {
//         cout << "it's prime" << endl;
//     }
// }
// int main()
// {
//     prime(3);
// }
// Example-6: Check prime or not
// return true if N is prime
// return flase if N is not prime

#include<iostream>
using namespace std;
bool checkPrime(int n){
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            // remainder=0 ->Perfectly divisible
            // not a prime number
            return false;
        }
    }
    return true;
}
int main(){
    
    bool check=checkPrime(3);

    if(check){
        cout<<"it is prime"<<endl;
    }
    else{
        cout<<"it's not prime"<<endl;
    }
   
}



// Example-7: sum of all number from 1 to n
// #include<iostream>
// using namespace std;
// void sumOf(int n){

//     int sum=0;

//     for(int i=1;i<=n;i++){
//          sum=sum+i;

//     }
//     cout<<sum<<endl;

// }
// int main(){
//     sumOf(2);
// }

// Output:3

// Example-8:
// #include<iostream>
// using namespace std;
// void sumOf(int n){

//     int sum=0;

//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             sum=sum+i;
//         }
//     }
//     cout<<sum<<endl;

// }
// int main(){
//     sumOf(5);
// }

// Output:6

// alternattive:
// #include<iostream>
// using namespace std;
// void sumOf(int n){

//     int sum=0;

//     for(int i=2;i<=n;i=i+2){

//             sum=sum+i;
//     }
//     cout<<sum<<endl;

// }
// int main(){
//     sumOf(5);
// }

// Output:6