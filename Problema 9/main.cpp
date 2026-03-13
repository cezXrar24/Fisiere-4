#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Introdu x: ";
    cin >> x;
    int div;
    int highestPrime = 0;
    int lowestPrime = x;
    for(int div = 2; div <= x/2; div++)
    {
        if(x % div == 0)
        {
            int isPrime = 1;
            for(int i = 2; i <= div/2; i++)
            {
                if(div % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(div == 1)
            {
                isPrime = 0;
                lowestPrime = 0;
            }
            if(isPrime == 1)
            {
                if(div >= highestPrime)
                    highestPrime = div;
                if(div <= lowestPrime)
                    lowestPrime = div;
            }
        }
    }
    if(div == 2)
    {
        highestPrime = div;
        lowestPrime = div;
    }

    cout << "Cea mai mare divizor prim al lui x este: " << highestPrime << endl;
    cout << "Cea mai mic divizor prim al lui x este: " << lowestPrime << endl;
    return 0;
}