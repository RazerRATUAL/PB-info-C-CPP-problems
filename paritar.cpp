#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");
int main(){
    int minp= 1e6 + 1, minimp = 1e6 + 1, maxp = -1, maximp = -1;
    int n, x;
    fin >> n;
    for(int i = 1; i <= n; ++i)
    {
        fin >>x;
        if(x % 2 == 0 && x > maxp)
            maxp = x;
        else 
            if(x % 2 == 1 && x > maximp)
            maximp = x;
    }
    for(int i = 1; i <= n; ++i)
    {
        fin >> x;
        if(x % 2 == 0)
        {
                if(x < minp) minp =x;
                else
                    if(x < minimp) minimp = x;
        }        
    }
    if(maxp < minimp && maximp < minp)
        cout << "DA";
    else 
        cout << "NU";
}