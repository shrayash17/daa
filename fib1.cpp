#include<iostream>
using namespace std;
// void fun(int a , int b , int curr , int n){
//     if(curr>n){
//         return;
//     }
//     cout<<a+b<<" ";
//     int c = a+b;
//     a=b;
//     fun(a,c,curr+1,n);

// }
// int main(){
//     cout<<0<<" ";
//     cout<<1<<" ";
//     fun(0,1,3,10);
// }



int main(){
    int n ;
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<" ";
    cout<<b<<" ";
    
    n=n-2;
    while(n){
        cout<<a+b<<" ";
        int c=a+b;
        a=b;
        b=c;
        n=n-1;
    }
}