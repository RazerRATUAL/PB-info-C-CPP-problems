#include <iostream>
#include <fstream>
using namespace std;

ifstream in("izolate.in");
ofstream out("izolate.out");

int x[101][101];

int main() 
{
    int n, a, b, izolate = 0;
    in >> n;
    while(in >> a >> b) 
    {
        x[a][b] = 1, x[b][a] = 1;
    }
    for(int i = 1; i <= n; i++) 
    {
        int k = 0;
        for(int j = 1; j <= n; j++)
            if(x[i][j])
                k += 1;
        if(k == 0)
            izolate += 1;
    }
    out << izolate <<" ";
    for(int i = 1; i <= n; i++) 
    {
        int k = 0;
        for(int j = 1; j <= n; j++)
            if(x[i][j])
                k += 1;
        if(k == 0)
            out << i <<" ";
    }
}