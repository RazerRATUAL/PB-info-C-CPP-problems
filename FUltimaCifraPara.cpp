#include <iostream>
using namespace std;

int UCP(int n);

int main()
{
    int a;
    cin >> a;
    cout << UCP(a);

    return 0;
}

int UCP(int n)
{
    if(n == 0)
        return 0;
    while(n){
        int c = n % 10;
        if(c % 2 == 0)
            return c;
        n/=10;
    }
    return -1;
}
