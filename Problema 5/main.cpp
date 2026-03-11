#include <iostream>
using namespace std;

int main() {
    int x, c;
    cout << "Introdu x: ", cin >> x;
    cout << "Introdu o cifra: ", cin >> c;
    int p = 1;
    int result = 0;
    while(x != 0)
    {
        int cif = x % 10;
        x = x / 10;
        if(cif != c)
        {
            result = result + cif * p;
            p = p * 10;
        }
    }
    cout << result << endl;
    return 0;
}