#include <iostream>
using namespace std;

void PaulImpare(){
    int paul, n = 0, m = 0; 
    cin >> paul; 
    while(cin >> paul)
        if(paul % 2 != 0)
            if(n == 0)
                n = paul;
            else
                m = n, n = paul;
    if(m == 0)
        cout << "Numere insuficiente";
    else
        cout << m << ' ' << n;
}


int main()
{
    PaulImpare();
    return 0;
}
