// 2. counting zeros and ones
// ->intialize zeroCount and oneCount with zero.
// ->traverse through an array. 
// ->if element is equal to zero increment zeroCount by 1 and if not increment oneCount by 1.
#include<iostream>
using namespace std;
int main(){
    int size=6;
    int arr[size]={0,1,1,0,1,1};
    int zeroCount=0,oneCount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeroCount++;
        }else{
            oneCount++;
        }
    }
    cout<<"number of zeros = "<<zeroCount<<endl;
    cout<<"number of ones = "<<oneCount<<endl;
}

// Output:
// number of zeros = 2
// number of ones = 4
