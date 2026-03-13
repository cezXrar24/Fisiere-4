#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Introdu x: ";
    cin >> x;
    int number = 0;
    for(int i = 9; i >= 0; i--)
    {
        int temp = x;
        while(temp != 0)
        {
            int cif = temp % 10;
            if(cif == i)
            {
                number = number*10 + cif;
            }
            temp /= 10;
        }
    }
    cout << "Numarul format: " << number << endl;
    return 0;
}