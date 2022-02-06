#include <iostream>
using namespace std;

void fib(int n)
{
    int term1 = 0, term2 = 1, term3;
    for (int i = 0; i < n; i++)
    {   cout<<term1<<" ";
        term3 = term1 + term2;
        term1 = term2;
        term2 = term3;
    }
    cout <<endl<< "Fibonacci Sequence of " << n << " is " << term3;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    fib(n);
    return 0;
}