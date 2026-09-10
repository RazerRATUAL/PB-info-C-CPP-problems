#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("puteri6.in");
ofstream fout("puteri6.out");
const int dim = 10;
int fr[10];

int main(){
    int n, i, pow, p, x;
    
    while (fin >> x)
    {
        pow = 0;
        while(x > 9){
        x /= 10;
        pow++; 
        }

        p = pow;
        fr[p]++;
    }
    int s = 0;

    for(int i = 0; i <= 9; ++i){
        s += fr[i];
        if(s >= n){
            // fout <<
            return 0; 
        }
    }
    fout << "Nu exista";
}