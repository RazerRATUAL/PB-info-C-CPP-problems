#include <fstream>
using namespace std;
ifstream fin("nrdiv.in");
ofstream fout("nrdiv.out");

long long int DC(int n);

int main(){
    long long n;
    fin >> n;
    fout << DC(n);

    return 0;
}
long long int DC(int n){
    int divs = 2, f = 2;

    f = 2;
    if (n == 1){
        divs = 1;
    }
    else {
         while(f * f <= n) {
        if(n % f == 0) {
            divs++;
            if(n / f != f)
                divs++;
        }
        f++;
    }
    }
   

    return divs;
}