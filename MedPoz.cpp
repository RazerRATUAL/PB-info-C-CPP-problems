#include <fstream>
#include <iomanip>
using namespace std;

ifstream cin("medpoz.in");
ofstream cout("medpoz.out");

const int dim = 21;
int m[dim][dim];

int main(){
    int n;
    double nr = 0, ma = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j<= n; ++j)
        {
            cin >> m[i][j];
            if(i > j && m[i][j] > 0)
            {
                ma+= m[i][j];
                nr++;
            }
        }
    }

    if(nr == 0)
        cout << "NU EXISTA";
    else
        cout << fixed<< setprecision(3)<< ma/nr;

return 0;
}
