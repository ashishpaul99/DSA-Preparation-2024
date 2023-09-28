// 1. Deciaml to binary number system


// 1. Divison method
// #include <iostream>
// #include<math.h>
// using namespace std;
// int decimalToBinary(int n)
// {
//     while (n > 0)
//     {
//         int bit = n % 2;
//         cout << bit << endl;
//         n = n / 2;
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     int Binary = decimalToBinary(n);
// }

// Alternative
// int main() {
//  int n;
//     cout<<"enter n:";
//     cin>>n;
//     int binaryno=0;
//     int i=0;
//     while(n>0){
//        int bit=n%2;
//        binaryno=bit*pow(10,i++)+binaryno;
//        n=n/2;
//     }
//     cout<<binaryno<<" "<<endl;

//     return 0;
// }

// 2. Bitwise method - it is fasted method when comapared with division method.
// include <iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     int binaryno=0;
//     int i=0;
    
//     while(n>0)
//     {
//         int bit=n&1;
//         binaryno=binaryno+bit*pow(10,i++);
//         n=n>>1;
//     }
//     cout<<binaryno<<endl;
//     return 0;
// }
#








// 3. Binary to decimal number
// #include <iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     int decimal=0;
//     int i=0;
    
//     while(n>0)
//     {
//         int bit=n%10;
//         decimal=decimal+bit*pow(2,i++);
//         n=n/10;
//     }
//     cout<<decimal<<endl;
//     return 0;
// }

// Output:
// enter n:
// 1111
// 15
