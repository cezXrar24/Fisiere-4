#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Introdu n: ", cin >> n;
    int v[n];
    for(int i=0; i<n; i++)
    {
        cout << "v[" << i << "]: ",  cin >> v[i];
    }
    for(int i = n-1; i >= 0; i--)
    {
        while(v[i] > 10)
        {
            v[i] = v[i] / 10;
        }
        cout << v[i];
    }
    return 0;
}