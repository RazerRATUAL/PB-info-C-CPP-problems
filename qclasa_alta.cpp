#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("qclasa.in");
ofstream cout("qclasa.out");


struct elev
{
    int medie, cod, absenta;
}a[41];

bool nr_absente(elev a, elev b){
    if(a.absenta > b.absenta) return 1;
    else if(a.absenta == b.absenta && a.cod < b.cod) return 1;
    else return 0;
}
int main()
{
    int n , cnt , mediec;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i].cod >> a[i].medie >> a[i].absenta;
        if(a[i].medie == 10) cnt++;
        mediec += a[i].medie;
    }
    cout << cnt << '\n' << abs(mediec / n) << '\n';
    sort(a + 1, a + n + 1, nr_absente);
    cout << a[1].cod << ' ' << a[1].medie << ' ' << a[1].absenta << "\n";
    cout << a[2].cod << ' ' << a[2].medie << ' ' << a[2].absenta << "\n";
    return 0;
}