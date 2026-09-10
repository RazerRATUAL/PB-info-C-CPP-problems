#include <iostream>
#include <cmath>
using namespace std;
int a[1001];
void CitesteSir(int &n, int a[]){
    for(int i = 1; i <= n; i++)
        cin >> a[i];
}
void Selection(int &n, int a[]){
 for(int i = 1; i <= n; ++i){
        int r = sqrt(a[i]);//pt pp
        if(r * r == a[i]){
            int min = 10000000, poz = 0;
            for(int j = i; j <= n; ++j){
                int r1 = sqrt(a[j]);
                if(r1 * r1 == a[j] && a[j] < min)
                    min = a[j], poz = j;
            }
            swap(a[i], a[poz]);
        }
    }
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    CitesteSir(n, a);
    Selection(n, a);

    for(int i = 1; i <= n; ++i)
        cout << a[i] << " ";
    return 0;
}