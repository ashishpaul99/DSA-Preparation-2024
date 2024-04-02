// 12. Reference variable    Dare : 26/03/24  Time: 3:18 PM

// eg-1:
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 10;
//     int &k = n;
//     int &c = n;

//     // normal integer varaible
//     cout << "n: " << n << endl;

//     // k is reference variable reffering to n
//     cout << "k: " << k << endl;

//     // c is reference variable reffering to n
//     cout << "c: " << c << endl;
// }

// Output:
// n: 10
// k: 10
// c: 10

// eg-2:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 10;
//     int &k = n;
//     int &c = n;

//     k++;

//     // normal integer varaible
//     cout << "n: " << n << endl;

//     // k is reference variable reffering to n
//     cout << "k: " << k << endl;

//     // c is reference variable reffering to n
//     cout << "c: " << c << endl;
// }

// Output:
// n: 11
// k: 11
// c: 11

// 2. call by value
// eg-1:increment n by 1
// #include <iostream>
// using namespace std;
// void incrementBy1(int &n)
// {
//     n = n + 1;
// }
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     incrementBy1(n);
//     cout << "n: " << n << endl;
// }

// Output:
// enter n: 10
// n: 11