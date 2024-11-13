#include<iostream>
using namespace std;


// Recursive function to calculate Fibonacci numbers
int fibonacci_recursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main() {
    int n = 10; // Number of terms to print

    cout << "Fibonacci sequence (Recursive) up to " << n << " terms:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << fibonacci_recursive(i) << " ";
    }
    cout << endl;

    return 0;
}



// int main(){
//     int n ;
//     cin>>n;
//     int a = 0;
//     int b = 1;
//     cout<<a<<" ";
//     cout<<b<<" ";
    
//     n=n-2;
//     while(n){
//         cout<<a+b<<" ";
//         int c=a+b;
//         a=b;
//         b=c;
//         n=n-1;
//     }
// }