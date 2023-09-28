// 1. Multiply two numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"enter a:"<<endl;
//     cin>>a;
//     cout<<"enter b:"<<endl;
//     cin>>b;

//     c=a*b;
//     cout<<c<<endl;

// }

// output:
// enter a:
// 10
// enter b:
// 20
// 200


// 2. Find Perimeter of a triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int side,perimeter;
//     cout<<"enter side:"<<endl;
//     cin>>side;
//     perimeter=4*side;
//     cout<<perimeter<<endl; 
// }

// Output:
// enter side:
// 10
// 40
// PS 

// 3. Find simple interest
// #include<iostream>
// using namespace std;
// int main(){
//     int principle, rateofinterest, time, SI;
//     cout<<"enter principle:"<<endl;
//     cin>>principle;

//     cout<<"enter rateofinterest:"<<endl;
//     cin>>rateofinterest;

//     cout<<"enter time:"<<endl;
//     cin>>time;
    
//     SI=(principle*rateofinterest*time)/100;
//     cout<<SI<<endl; 
// }

// Output:
// enter principle:
// 10
// enter rateofinterest:
// 10
// enter time:
// 10
// 10


// 4. Printing counting from 1 to N
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     int count=0;
//     for(int i=10;i>0;i--){
//      count=count+1;
//      cout<<count<<" ";
//     }

// }

// 2.Printing counting from N to 1
// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout<<"enter n:"<<endl;
//    cin>>n;
//    for(int i=n;i>0;i--){
//       cout<<i<<" ";
//    }

// }

// 5. Find factorial of a number
// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout<<"enter n:"<<endl;
//    cin>>n;
//    int fact=1;
//    for(int i=n;i>0;i--){
//        fact= fact*i;
//    }
//    cout<<fact<<endl;

// }
// 6. Check a number is prime or not


// #include <iostream>
// using namespace std;

// int main() {

//   int i=2, n;
//   bool flag= true;

//   cout << "Enter a positive integer: ";
//   cin >> n;

//   // 0 and 1 are not prime numbers
//   if (n == 0 || n == 1) {
//    flag = false;
//   }

//   // loop to check if n is prime
//   while ( i <= n/2) {
//     if (n % i == 0) {
//       flag= false;
//       break;
//     }
//     i++;
//   }

//   if (flag){
//     cout << n << " is a prime number";
//   }
//   else{
//     cout << n << " is not a prime number";
//   }

//   return 0;
// }




// 7. Print only even number from 1 to N
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"enter n:"<<endl;
//    cin>>n;
//    for(int i=1;i<=n;i++){
//       if(i%2==0){
//          cout<<i<<" ";
//       }
//    }
// }

// 7. Check given triangle is valid or not
