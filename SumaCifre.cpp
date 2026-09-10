#include <iostream>
using namespace std;

void sumcif(int& n ,int& s ,int& t);

int main()
{
    int n, s, t;
    cin >> n;


    cout << s <<' '<< t;

    return 0;
}

void sumcif(int& n ,int& s ,int& t)
{
    s = 0;
    t = 0;
    while(n)
        {
                if (n % 2 == 0)
                s += n % 10;
            else
                t += n % 10;

            n /= 10;
        }
}
