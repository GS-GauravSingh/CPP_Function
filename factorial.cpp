#include <iostream>
using namespace std;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Using Recursion ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// int fac(int n){
//     if (n==1 || n==0)
//     {
//         return 1;
//     }
//     else{
//         return n*fac(n-1);
//     }

// }
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Using Iteration ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int fac(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

int main()
{
    int n, ans;
    cout << "Enter a number: ";
    cin >> n;
    ans = fac(n);
    cout << ans;
    return 0;
}