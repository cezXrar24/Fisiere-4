#include <iostream>

using namespace std;

int main() {
    int n;
    int max = 1;
    int cif = 1;
    cout << "Introdu n: ", cin >> n;
    while(n > 0)
    {
        int temp = max;

        while(temp != 0 && n > 0)
        {
            cout << cif << " ";
            n--;
            cif++;
            temp--;
        }
        cif = 1;
        max++;
    }
    return 0;
}