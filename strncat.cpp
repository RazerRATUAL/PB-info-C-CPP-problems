#include <iostream>
#include <cstring>

using namespace std;

char s[1000001];

int main()
{
    cin >> s;
    int n;
    cin >> n;
    int x;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> x;
        if(x % 2 == 0)
        {
                strncat(s , s , x);
        }
        else
        {
            int l = 0;
            char d[1001];
            for(int j = x - 1 ; j >= 0 ; --j)
                d[l]=s[j] , l++;
            strncat(s , d , x);
        }
    }
    cout << s;
    return 0;
}