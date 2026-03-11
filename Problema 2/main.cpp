#include <iostream>

using namespace std;

int main() {
    int divCount = 0;
    int x = 100;
    while(x <= 999)
    {
        int x2 = x/10;
        int x3 = x/100;
        for(int div=2; div<=x/2; div++)
        {
            if (x % div == 0)
            {
                divCount++;
            }
        }
        if (divCount < 1)
        {
            divCount = 0;
            for(int div=2; div<=x2/2; div++)
            {
                if (x2 % div == 0)
                {
                    divCount++;
                }
            }
            if (divCount < 1 && x2 != 1)
            {
                divCount = 0;
                for(int div=2; div<=x3/2; div++)
                {
                    if (x3 % div == 0)
                    {
                        divCount++;
                    }
                }
                if (divCount < 1 && x3 != 1)
                {
                    divCount = 0;
                    cout << x << " ";
                }
            }
        }
        else
        {
            divCount = 0;
        }
        x++;
    }
    return 0;
}