#include<iostream>
using namespace std;

void sum(int n){
    int ans = (n*(n+1))/2;
    cout<< ans;
}

int main(){ 
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    sum(n);
    return 0;
}