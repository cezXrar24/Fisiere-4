#include <iostream>

using namespace std;


int main() {
    int n, x, cc;
    cout << "Introdu n: ", cin >> n;
    x = 1;
    while(x <= n)
    {
        if (x == 0) cc = 0;
          else 
          {
          cc = x % 9;
          if (cc == 0)
          {
            cc = 9;
          }
          }
        if (x % cc == 0)
        {
            cout << x << " ";
        }
        x++;
    }
    cout << endl;
    return 0;
}