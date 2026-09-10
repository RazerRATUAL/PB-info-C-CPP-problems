#include <fstream>
using namespace std;

ifstream fin("puteri6.in");
ofstream fout("puteri6.out");

int fr[10];

int main(){
    int n, i, x;
    fin >> n;
    int p;
    while(fin >> x){
        p = 0;
        while(x){
            p++;
            x /= 10;
        }
        fr[p]++;
    }
    bool gasit = false;
    x = 0;
    while(i < 10 && gasit == false){
        while(fr[i] != 0 && x != n){
            x++;
            fr[i]--;
        }
        if(x == n)
            gasit = true;
        i++;
    }

    if(gasit){
            fout << 1;
            for(int j = 1; j < i-1;j++)
                fout << 0;
        }
    else fout << "Nu exista";

return 0;
}