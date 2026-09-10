#include <iostream>
#include <fstream>
using namespace std;

ifstream in("gradmax.in");
ofstream out("gradmax.out");

int x[101][101];

int main() 
{
    int n, a, b, gradmax=0, kgradmax=0;
    in>>n;
    while(in>>a>>b) {
        x[a][b] = 1, x[b][a] = 1;
    }
    for(int i = 1; i <= n; i++) 
    {
        int k = 0;
        for(int j = 1; j <= n; j++)
            if(x[i][j])
                k += 1;
        if(k > gradmax)
            gradmax=k, kgradmax=1;
        else if(k==gradmax)
            kgradmax += 1;
    }
    out<<kgradmax<<" ";
    for(int i=1; i<=n; i++) {
        int k = 0;
        for(int j=1; j<=n; j++)
            if(x[i][j])
                k += 1;
        if(k==gradmax)
            out<<i<<" ";
    }
}