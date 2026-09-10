#include <fstream>
using namespace std;
fstream fin("pozitiiconsecutive.in");
ofstream fout("pozitiiconsecutive.out");

int a, b;

int main() {
    fin >> a >> b;
    int x;
    while(b >= 0 && a >= 0){
        fout << b << " " << a << " ", x = a;
        b = 2 * a + 2 - b;
        a = 2 * b + 2 - a;
    }
    if(x)
        fout << 0;

    fin.close();
    fout.close();
    return 0;
}