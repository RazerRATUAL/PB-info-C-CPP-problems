#include <iostream>
#include <algorithm>

using namespace std;

//const int Dim = 100001;
//int a[Dim], n, T, M;
//int main()
//{
//    cin >> n >> T;
//    for (int i = 0; i < n; ++i)
//        cin >> a[i];
//
//    sort(a, a + n);
//
//    int st = 0, dr = n - 1, mj;
//
//    for (int i = 1; i <= T; ++i)
//        int ob = 0;
//    {
//
//    }
//    return 0;
//}
int main()
{
    int n, prod;
    cin >> n >> prod;
    int a[1001];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    int st = 1, dr = 1000000, min = 1000001;
    while(st <= dr)
        {
        int mij = (st + dr) / 2;
        int val = 0;
        for(int i = 1; i <= n; ++i)
            val += mij / a[i];
        if(val >= prod)
        {
            if(mij < min)
                min = mij;
            dr = mij - 1;
        }
        else
            st = mij + 1;
    }
    cout << min;
    return 0;
}
