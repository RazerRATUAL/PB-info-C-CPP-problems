#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

ifstream fin("secv10.in");
ofstream fout("secv10.out");

int main(){
    int n, ant, x, lmax = 0, cnt = 0, l = 0;
    fin >> n;

    for (int i = 1; i <= n; ++i){
        fin >> x;

        if (x % 10 == 0)
        {
            l++;
            if (l > lmax)
            {
                lmax = l;
                cnt = 1;
            }
            else if (l == lmax)
                cnt++;
        }
        else
            l = 0;
    }

    fout << lmax << ' ' << cnt;

    return 0;
}