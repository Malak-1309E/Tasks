#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int test;
    cout << "Enter the number of test cases :";
    cin >> test;

    while (test < 1 || test > 100)
    {
        cout << "Invalid number of test cases. Please enter the number again (1-100)";
        cin >> test;
    }
    for (int z = 1; z <= test; z++)
    {
        int upperbound;
        cout << "Enter a number for the upper bound of range :";
        cin >> upperbound;

        while (upperbound < 2 || upperbound > 1000000)
        {
            cout << "Invalid upper bound. Please enter the number again (2-1000000)";
            cin >> upperbound;
        }

        int GCD;
        int MaxGCD = 0;

        for (int j = 1; j <= upperbound; j++)
        {
            for (int k = j + 1; k <= upperbound; k++)
            {
                GCD = __gcd(j, k);
                if (GCD > MaxGCD)
                {
                    MaxGCD = GCD;
                }
            }
        }

        cout << "The Maximum GCD = "<< MaxGCD << endl;
    }
    return 0;
}