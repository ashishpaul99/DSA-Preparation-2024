// 1. Address of memory allocation
// Example-1
// #include<iostream>
// using namespace std;
// int main(){
 
//    int a=5;
//    cout<<"Address of a"<<&a<<endl;

// }

// Output: Address of a0x61ff0c

//Example-2:
// #include<iostream>
// using namespace std;
// int main(){
 
//    int arr[10];
//    cout<<"Address of a"<<&arr<<endl;
//    cout<<"it gives base address "<<arr<<endl;


// }

// Output: 
// Address of a0x61fee8
// it gives base address 0x61fee8
  
// =>size of array
// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     cout<<"Size of a "<<sizeof(a)<<endl; 
    
//     int arr[10];
//     cout<<"Size of arr "<<sizeof(arr)<<endl;
// }

// Output:
// Size of a 4
// Size of arr 40

// 2. Accessing elements in array
// Example-1:
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3]={2,6,5};
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
// }

// Output:
// 2
// 6
// 5

// Example-2:
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={5,6,4,2,7};
    // for(int i=0;i<5;i++){
    //      cout<<arr[i]<<" ";         
    // }
// }

// Output: 5 6 4 2 7 

// 3. Taking input in array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
// // taking input
//     for(int i=0;i<5;i++){
//         cout<<"enter element:"<<endl;
//         cin>>arr[i];
//     }

// // print elements
//     for(int i=0;i<5;i++){
//          cout<<arr[i]<<" ";         
//     }
// }

// Problem statement-1
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10];
//     for(int i=0;i<10;i++){
//         cout<<"Enter value:"<<endl;
//         cin>>arr[i];
//     }
//     cout<<endl;
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     for(int i=0;i<10;i++){
//         int doub=arr[i]*2;
//         cout<<doub<<" ";
//     }

// }

// Problem statement-2 : sum of elements in array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     int sum=0;
//     for(int i=0;i<5;i++){
//         cout<<"Enter value:"<<endl;
//         cin>>arr[i];
//     }
//     cout<<endl;
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     for(int i=0;i<5;i++){
//          sum=sum+arr[i];     
//     }
//      cout<<sum<<" ";
// }

// Output:
// Enter value:
// 1
// Enter value:
// 2
// Enter value:
// Enter value:
// 4
// Enter value:
// 5

// 1 2 3 4 5
// 15

