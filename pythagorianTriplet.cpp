#include<iostream>
using namespace std;
// you can use max function to identify a maximum value in given inputs, max(x,max(y,z))
void triplet(int h,int p,int b){
    h = h*h;
    int a = (p*p) + (b*b);
    if (h == a)
    {
        cout<<"This is a pythagorian Triplet";
    }
    else{
        cout<<"Not a pythagorian Triplet";
    }
    

}

int main(){ 
    int h, p, b;
    cout<<"Enter h, p, b: ";
    cin>>h>>p>>b;
    triplet(h,p,b);
    return 0;
}