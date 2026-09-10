#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int cnt = 0;
    bool ok = true;

    char a[21], b[21];

    cin >> a >> b;

    int n = strlen(a);
    int m = strlen(b);

    if (n != m)
        ok = false;

    for (int i = 0;i < n; ++i)
        for (int j = 0;j < m; ++j)
        {
            if (a[i] == b[j]){
                cnt++;
                b[j] = '\0';
                break;
            }
        }

    if (cnt != n && cnt != m)
        ok = false;

    cout << ok;

    return 0;
}
