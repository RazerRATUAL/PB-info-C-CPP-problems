#include <iostream>
using namespace std;

void P(int *x, int n, int &mini, int &maxi, int &sum)
{
    mini = maxi = sum = x[0];

    for (int i = 1; i < n; ++i)
    {
        sum += x[i];
        if (x[i] > maxi)
            maxi = x[i];
        else if (x[i] < mini)
            mini = x[i];
    }
}

int main()
{
    return 0;
}