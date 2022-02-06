#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0, x = 1, lastDigit;
    while (n > 0)
    {
        lastDigit = n % 10;
        ans += (x * lastDigit);
        x *= 2;
        n = n / 10;
    }
    return ans;
}

int octalToDecimal(int n)
{
    int ans = 0, x = 1, lastDigit;
    while (n > 0)
    {
        lastDigit = n % 10;
        ans += (x * lastDigit);
        x *= 8;
        n = (n / 10);
    }
    return ans;
}


int main()
{
    int n, choice;
    cout << "Enter a number:"<<endl<<"1 for Binary To Decimal\n2 for Octal To Decimal\n3 for Hexadecimal To Decimal"<<endl;
    cin >> choice;
    cout<<"Enter a number: ";
    cin >> n;
    switch (choice)
    {
    case 1:
        cout << binaryToDecimal(n);
        break;
    case 2:
        cout << octalToDecimal(n);
        break;

    default:
        cout<<"Enter a valid input";
        break;
    }

    return 0;
}