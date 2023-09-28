// 8.Fuctions
// Example-1:
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<5;i++){
//         cout<<"hello"<<endl;
//     }
//     for(int i=0;i<5;i++){
//         cout<<"Ashish"<<endl;
//     }
//     for(int i=0;i<5;i++){
//         cout<<"Welcome"<<endl;
//     }
// }

// Example-2: Above code using fuctions
// #include<iostream>
// using namespace std;

// void printName(string name){
//   for(int i=0;i<5;i++){
//      cout<<name<<endl;
//   }
// }
// int main(){
//     printName("Hello");
//     printName("Ashish");
//     printName("Welcome");
// }

// Example-3:
// #include<iostream>
// using namespace std;

// void printLine(){
//   for(int i=0;i<10;i++){
//      cout<<"I am doing DSA in C++"<<endl;
//   }
// }
// int main(){
//    printLine();
//    return 0;
// }

// Example-4: 
// #include<iostream>
// using namespace std;

// void printA(){
//     cout<<"I am inside A"<<endl;
// }
// int main(){
//    cout<<"Hi"<<endl;
//    printA();
//    return 0;
// }

// Function Call Stack

// Example-5:
// #include<iostream>
// using namespace std;

// void printA(){
//     cout<<"inside A"<<endl;
//     cout<<"going back to main"<<endl;
// }
// int main(){
//    cout<<"Inside Main"<<endl;
//    printA();
//    cout<<"Back in main"<<endl;
//    return 0;
// }
