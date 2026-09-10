#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cin >> a >> b;
    if(a > b)
        swap(a , b);
    bool ok = true;
    int cnt = 0;
    for(int i = 1 ; ok ; ++i)
    {
        if(a != b)
        {
            a++;
            cnt+=i;
            if(a == b)
                ok=false;
            else
                b-- , cnt+=i;
        }
        else
        {
            ok = false;
        }
    }
    cout << cnt;
    return 0;
}
