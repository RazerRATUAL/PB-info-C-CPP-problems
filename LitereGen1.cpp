#include <iostream>

using namespace std;
int n, b[30];

void afisare()
{
    for(int i=1;i<=n;i++)
    {
        char c = 'a' + b[i] - 1;
        cout << c;
    }
    cout << '\n';
}

void back(int k)
{
    if(k > n)
    {
        if(b[n] == 1)
            afisare();
    }
    else
    {
        if(b[k-1]!=1)
        {
            b[k] = b[k-1] - 1;
            back(k+1);
            b[k] = 0;
        }
        b[k] = b[k-1]+1;
        back(k+1);
        b[k] = 0;
    }
}

int main()
{
    cin >> n;
    b[1] = 1;
    back(2);
    return 0;
}