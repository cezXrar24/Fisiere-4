#include <iostream>

using namespace std;

int main() {
    int k;
    cout << "Introdu k: ";
    cin >> k;
    int sum = 12;
    for(int i = 1000; i <= 9999; i++)
    {
        int sumDigits = 0;
        int temp = i;
        int kDigits = 0;
        while(temp > 0)
        {
            sumDigits += temp % 10;
            if (temp % 10 == k)
            {
                kDigits++;
            }
            temp /= 10;
        }
        if(sumDigits == sum && kDigits == 2)
            {
                cout << i << " ";
            }
        kDigits = 0;
    }
    return 0;
}