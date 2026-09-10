#include <fstream>
using namespace std;
ifstream fin("ore.in");
ofstream fout("ore.out");

struct ore{
    long long h;
    long long m;
    long long s;
}hour[3];

int main()
{
    long long h , m , s;
    fin >> hour[1].h >> hour[1].m >>hour[1].s >>hour[2].h >> hour[2].m >>hour[2].s;

    fout << hour[1].h << ": " << hour[1].m << ": " << hour[1].s << '\n';
    fout << hour[2].h << ": " << hour[2].m << ": " << hour[2].s << '\n';
    
    long long h1 = hour[1].h * 3600 + hour[1].m * 60 + hour[1].s;
    long long h2 = hour[2].h * 3600 + hour[2].m * 60 + hour[2].s;
    
    fout << h1 << '\n' << h2 << '\n';

    long long ht = h1 + h2;
    s = ht % 60;
    m = ((ht - 3) / 60) % 60;
    ht = (ht - 3) / 60;
    h = ht / 60;

    fout << h << ": " << m << ": " << s;
    return 0;
}