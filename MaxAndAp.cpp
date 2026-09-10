#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0, ap = 0;
    for(int i = 1; i <= n; ++i){
        int x;
        cin >> x;
        if(x > max)
            max = x, ap = 1;
        else if(x == max)
            ap++;
    }
    cout << max << ' ' << ap;
    return 0;
}
