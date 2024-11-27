// function Questions
// 1. finding max of 3 numbers
#include<iostream>
using namespace std;
void maxOf3(int a,int b,int c){
     if(a>b){
        if(a>c){
            cout<<"a is greater"<<endl;
        }
        else{
            cout<<"c is greater"<<endl;
        }
     }
     else if(b>c){
        cout<<"b is greater"<<endl;
     }
}
int main(){
   maxOf3(50,55,30);
   return 0;
}