#include <iostream>

using namespace std;

int main() {
    int x, y, k;
    cout << "Introdu x, ", cin >> x;
    cout << "Introdu y, ", cin >> y;
    cout << "Introdu k, ", cin >> k;
    int powx = 0;
    int powy = 0;
    while(x > 0 && y > 0)
    {
        if(x % k == 0)
        {
            powx++;
            x /= k;
        }
        else
            x = 0;
        if(y % k == 0)
        {
            powy++;
            y /= k;
        }
        else
            y = 0;
    }
    if (powx > powy)
    {
        cout << "Cea mai mare putere a lui k este: " << powx << endl;
    }
    else
    {
        cout << "Cea mai mare putere a lui k este: " << powy << endl;
    }
    return 0;
}