#include <cmath>
long long nroot(int n, long long x)
{
    if(x < 0)
        x =  -x;
    long long r;
    r = round (pow(x, 1.0/n));
    return r;
}
