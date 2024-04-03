// Lecture 13 - Arrays Level-2      Date:26/03/24 Time:3:45 PM
// 1. Finding unique element
// Approach: by using XOR truth table.
#include <iostream>
using namespace std;

int getUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n = 9;
    int arr[n] = {2, 10, 11, 10, 2, 13, 15, 13, 15};

    int uniqueElement = getUnique(arr, n);
    cout << "Unique element in array is: " << uniqueElement << endl;
}

// Output:
// Unique element in array is: 11

// 2. Print all pairs
#include <iostream>
using namespace std;

void printPairs(int arr[], int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")";
        }
    }

}
int main()
{
    int n = 3;
    int arr[n] = {10,20,30};
    printPairs(arr, n);

}

// Output:
// (10,10)(10,20)(10,30)(20,10)(20,20)(20,30)(30,10)(30,20)(30,30)

// 3. Pair Sum
#include <iostream>
using namespace std;

void printPairs(int arr[], int n,int s)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==s)
            cout<<"("<<arr[i]<<","<<arr[j]<<")";
        }
    }

}
int main()
{
    int n = 5,sum=5;
    int arr[n] = {1,2,3,4,5};
    printPairs(arr, n ,sum);

}

// Output:
// (1,4)(2,3)(3,2)(4,1)

// 4. Print triplets
#include <iostream>
using namespace std;
void printPairs(int arr[], int n,int s)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
             cout<<"("<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<")"<<" ";
          }
        }
        cout<<endl;
    }

}
int main()
{
    int n = 5,sum=5;
    int arr[n] = {1,2,3,4,5};
    printPairs(arr, n ,sum);

}

// 5. Sort 0's and 1's
#include <iostream>
using namespace std;
void sortZerosOnes(int arr[], int n)
{
    int zeroCount=0;
    int oneCount=0;
    for(int i=0;i<n;i++){
         if(arr[i]==0){
            zeroCount++;
         }else{
            oneCount++;
         }
    }

    cout<<"zerocount: "<<zeroCount<<endl;
    cout<<"oneCount: "<<oneCount<<endl;
    int newSize=oneCount+zeroCount;

    for(int i=0;i<newSize;i++){
         if(i<zeroCount){
            arr[i]=0;
         }
         else if(i>=zeroCount and i<newSize){
            arr[i]=1;
         }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int n = 6;
    int arr[n] = {0, 1, 1, 1, 1, 0};
    sortZerosOnes(arr, n);

}

// alter-1: using for loop
#include <iostream>
using namespace std;
void sortZeroOne(int arr[], int n)
{
    int zeroCount=0;
    int oneCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }

    // Place zeros and ones
    int i;
    for(i=0;i<zeroCount;i++){
        arr[i]=0;
    }
    for(int j=i;j<n;j++){
        arr[j]=1;
    }
}
int main()
{
    int n = 6;
    int arr[n] = {0, 1, 1, 1, 1, 0};
    sortZeroOne(arr, n);

    // print array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Output:
// 0 0 1 1 1 1

// easiest way
// alter-2:using while loop
#include <iostream>
using namespace std;
void sortZeroOne(int arr[], int n)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else
        {
            oneCount++;
        }
    }

    // Place zeros and ones
    int index = 0;

    // loop continues as long as zeroCount is not zero
    while (zeroCount--)
    {
        arr[index] = 0;
        index++;
    }
    while (oneCount--)
    {
        arr[index] = 1;
        index++;
    }
}
int main()
{
    int n = 6;
    int arr[n] = {1, 0, 1, 0, 1, 0};
    sortZeroOne(arr, n);

    // print array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Output:
// 0 0 0 1 1 1
