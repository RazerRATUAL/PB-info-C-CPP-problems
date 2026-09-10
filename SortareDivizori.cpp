#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");
const int dim = 1001;
int a[dim];

int NRDIV(int n);

int main(){
int n;
fin >> n;

for(int i = 1; i <= n; ++i)
    fin >> a[i];


}

int NRDIV(int n){
    int nd = 1;
        for(int d = 2; d <= n ; d ++ ){
            if(n % d == 0)
        nd++;
        }
        
    return nd;
}