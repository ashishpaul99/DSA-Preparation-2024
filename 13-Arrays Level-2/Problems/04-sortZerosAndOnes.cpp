// 4. sort zeros and ones
// 1. counting approach
// ->while is loop is used for sorting zeros and ones.
#include <iostream>
using namespace std;
void sortOnesZeros(int arr[], int n)
{
    int zerosCount = 0;
    int onesCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zerosCount++;
        }
        else
        {
            onesCount++;
        }
    }

     int index=0;
     while(zeroCount--){
        arr[index]=0;
        index++;
     }
     while(onesCount--){
        arr[index]=1;
        index++;
     }

    //    printing array
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}
int main()
{
    int n = 9;
    int arr[n] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    sortOnesZeros(arr, n);
}

// Output:
// 0 0 0 0 0 0 1 1 1

// 2. using for loop
#include <iostream>
using namespace std;
void sortOnesZeros(int arr[], int n)
{
    int zerosCount = 0;
    int onesCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zerosCount++;
        }
        else
        {
            onesCount++;
        }
    }
    int i;
    for (i = 0; i < zerosCount; i++)
    {
        arr[i] = 0;
    }
    for (int j = i; j < n; j++)
    {
        arr[j] = 1;
    }

    //    printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 9;
    int arr[n] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    sortOnesZeros(arr, n);
}

// Output:
// 0 0 0 0 0 0 1 1 1

// 3. using two pointer approach
// ->intialize left=0 and right=n-1.
#include<iostream>
using namespace std;
void sortZerosOnes(int arr[], int n){
    int left=0,right=n-1;
    while(left<right){
        if(arr[left]==0){
            left++;
        }
        else if(arr[right]==1){
            right--;
        }
        else{
             swap(arr[left],arr[right]);
             left++;
             right--;
        }    
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=9;
    int arr[]={0,1,0,1,1,0,0,0,0};
    sortZerosOnes(arr,n);
}

// Output:
// 0 0 0 1 1 1 
