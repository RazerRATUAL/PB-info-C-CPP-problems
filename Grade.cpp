#include <iostream>
#include <fstream>
using namespace std;

ifstream in("grade.in");
ofstream out("grade.out");

int x[101][101];

int main() 
{
    int n, a, b;
    in >> n;
    while(in >> a >> b) 
    {
        x[a][b] = 1, x[b][a] = 1;
    }
    for(int i = 1; i <= n; i++) {
        int k = 0;
        for(int j=1; j <= n; j++)
            if(x[i][j])
                k += 1;
        out << k << " ";
    }
}