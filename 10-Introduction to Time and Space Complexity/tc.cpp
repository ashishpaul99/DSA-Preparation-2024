// Lecture-10 An Introduction to Time and Space Complexity  Date:19/03/2024  Time:4:32 PM

// 1. What is Time Complexity?
// ->Amount of time taken by an algorithm to run as a function of length of input.
// ->How much time cpu works on code.

// eg-1:
// ->cpu perfroms this operation for n times.
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     cout<<"Hello World";
// }

// ->Time complexity of above code is O(n)

// 1.1 cpu operations vs Lenght of input
// ->time taken for cpu to run algorithm is directly proportional to length of Input.

//         f porpotional to N

// ->f -> time taken for cpu to run algorithm or number of operations or cpu operations
// ->N -> length of Input

// ->If number of operations are increases then time complexity also get increased.

// 2. Why to study time and space complexity?
// 1. good engineer always thinks about the complexity of the code.
// 2. Resources are limited.
// 3. Measure algorithm to make efficent programs.
// 4. Asked by interviewer after every solution you give.

// eg-1:
// Algorithm-A         |      Algorithm-B
// do same thing            do same thing
// cpu processing high      cpu processing low

// ->Algorithm-B is bettern than Algorithm-A.
// ->cpu takes less time run Algorithm-B.

// 3. What is Space Complexity?
// ->Amount of space taken by an algorithm to run as a function of length of input.

// eg-1:
// int a=1; //takes 4 bytes of space
// int b[5];//it takes 20 bytes of space

// ->total it takes 24 bytes of space.
// Time complexity : O(1) - constant time

// eg-2:
// ->as input grows then space will also get increased.
// #include <iostream> // Include the iostream header
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
    
//     int *b = new int[n];
    
//     // Initialize the elements of the array
//     for(int i = 0; i < n; i++) {
//         b[i] = i; // Example initialization, you can change it according to your requirements
//     }

//     // Access and print the elements of the array
//     for(int i = 0; i < n; i++) {
//         cout << b[i] << " ";
//     }

//     // Don't forget to deallocate the memory
//     delete[] b;
    
//     return 0;
// }

// 4. Unit to Represent Complexity
// 1. Big O   : Upper bound -> algorithm uppper bound(worst case)
// 2. Theta θ : Average case 
// 3. Omega Ω : Lower bound -> best case

// eg-1:search in array
// In order to find an element in an array with size n 

// eg-1: array -> [1,2,3,4,5...n]
// 1. finding 1 
// Time complexity -> lower bound : Ω (1)

// 2. finding 6(worst case)
// Time complexity ->  O(n)

// ->Better representation of time complexity of algorithm is Big O(n)
// ->Big O is better representation for representing time complexity of algorithm.

// 5. Big O: Complexities
// ->complexities in Big O
// 1. Constant time: O(1)
// 2. Linear Time :O(n)
// 3. Logarthmic time: O(logN)
// 4. Quadratic time: O(N^2)
// 5. Cubic time complexity: O(N^3)




// 1. Constant time: O(1)
// ->it is not depend on length of the input hence it takes constant time.

// eg-1:int a=5;

// 2. Linear Time :O(n)
// ->if value of n increases then time also increases linearly.
// ->it depends on n(lenght of input).

// eg-1:
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<i<<endl;
//     }
// }

// 3. Logarthmic time: O(logN) -> need to learn in binary search concept

// 4. Quadratic time: O(N^2)

// ->Time complexity= O(N^2) of below code
// eg-1: 
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){

//     }
// }

// 5. Cubic time complexity: O(N^3)

// ->Time complexity of below code: O(N^3)
// eg-1:
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//        for(int k=0;k<n;k++){
               
//        }

//     }
// }


// ->Time complexity get added in case of multiple loops in code
// eg-2: Time complexity: O(2n)

// for(int i=0;i<n;i++){  -> O(n)

// }

// for(int j=0;j<n;j++){  -> O(n)
    
// }

// ->see image tc1 and tc2


// 6. find time and space complexity?
// 1.f(n)=2n^2+3n    -> TC: O(n^2)
// 2.f(n)=4n^4+ 3n^3 -> TC: O(n4)
// 3.f(n)=N^2+ logN  -> TC: O(n^2)
// 4. f(n)=200       -> TC: O(1) -> constant time
// 5. f(n)=f(n/2)    -> TC: O(N/4) -> O(N)


// 7. least time complexity to highest time complexity

// O(1)(least complexity)< O(logN) < O(√n) < O(nlog base n) < O(n^2) < O(n^3) < O(2^n) < O(N!) < O(N^2)(highest complexity)

// eg-1:


// array -> [1,2,3,4,5]

// Linear search -> O(N)
// binary search -> O(log base 2(N))
//    N->N/2 -> N/4 -> N/2^k ....1
            // N=2^k
            // log2N=log b












