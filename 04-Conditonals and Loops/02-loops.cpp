// 1. for loop
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         cout<<"hello"<<endl;
//     }
// }

// Output:
// hello
// hello
// hello
// hello
// hello

// 2. Nested loop
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<3;i++){
//         cout<<"Outer loop"<<"-"<<i<<endl;
//         for(int j=0;j<3;j++){
//            cout<<"Inner loop"<<"-"<<j<<endl;
//         }
       
        
//     }
// }

// eg-1:
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<5;i++){
//         cout<<"hello"<<endl;
//     }
// }

// alternative
// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;
    
//     for(; ;){
//         if(i<5){
//         cout<<"hello"<<endl;
//         i=i+1;
//         }
//     }
// }

// eg-2: Print 11 numbers from 1
// #include<iostream>
// using namespace std;
// int main(){
//   for(int i=1;i<=11;i++){
//        cout<<i<<" ";
//   }
// }
// Output:1 2 3 4 5 6 7 8 9 10 11 

// eg-3: print 19 table
// #include<iostream>
// using namespace std;
// int main(){
//   for(int i=1;i<=10;i++){
//        int prod=19*i;
//        cout<<"19"<<"*"<<i<<"="<<prod<<endl;
//   }
// }

// Output:
// 19*1=19
// 19*2=38
// 19*3=57
// 19*4=76
// 19*5=95
// 19*6=114
// 19*7=133
// 19*8=152
// 19*9=171
// 19*10=190

// eg-4: print even numbers between 1 to 100
// #include<iostream>
// using namespace std;
// int main(){
//   for(int i=1;i<=100;i++){
//     if(i%2==0){
//         cout<<i<<" ";
//     }
      
//   }
// }

// Output:
// 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 
// 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100 