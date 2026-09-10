#include <fstream>
#include <iostream>

using namespace std;

ifstream fin("cifreord1.in");
ofstream fout("cifreord1.out");

int fr[10];

int main(){
    int x, cnt = 0;
    while(fin >> x){
        while(x){
            fr[x % 10]++;
            x /= 10;
        }
    }
    
    for(int i = 9 ; i >= 0 ; --i)
        for(int j = 1 ; j<= fr[i] ; ++j){
            fout << i << " ";
            cnt++;
            if(cnt % 20 == 0)
                fout << endl;
        }
    return 0;
}