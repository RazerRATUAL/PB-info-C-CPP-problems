#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxim = 1000000000;
    for(int i = 1; i <= n; ++i){
        int x;
        cin >> x;
        if(x < maxim)
            maxim = x;
    }
    cout << maxim;
    return 0;
}
