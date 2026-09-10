#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        int k=(n+1)/2;
        while(n)
        {
            cout<<k<<" ";
            k++;
            n--;
        }
    }
    else
    cout << "NU ESTE NOROCOS";
}
