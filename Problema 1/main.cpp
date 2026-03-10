#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Introdu n: ", cin >> n;
    int x, ogl;
    x = 11;
    while(x < n)
    {
        int temp = x;
        ogl = 0;
        while(temp != 0)
        {
            ogl = ogl*10 + temp%10;
            temp /= 10;
        }
        if (x<n && ogl<n)
        {
            cout << x << " " << ogl << endl;
        }
        x++;
        if (x % 10 == 0)
        {
            x++;
        }
    }
    return 0;
}