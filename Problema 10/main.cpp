#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Introdu x: ";
    cin >> x;
    int minCif = 9;
    int posCif = 0;
    int pos = 1;
    int posMin = 0;
    if(x < 10)
    {
        minCif = x;
        posMin = 1;
    }
    else {
        while(x != 0)
        {
            int cif = x % 10;
            if(cif < minCif)
            {
                minCif = cif;
                posMin = pos;
            }
            x /= 10;
            pos++;
        }
         }
    cout << "Cea mai mica cifra: " << minCif << endl;
    cout << "Pozitia celei mai mici cifre: " << posMin << endl;
    return 0;
}