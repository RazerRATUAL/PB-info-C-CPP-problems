#include <fstream>
using namespace std;
ifstream cin("interclasare1.in");
ofstream cout("interclasare1.out");

const int dim = 1000001;
int k = 0;
int a[dim], b[dim], c[dim];

void CitireSir(int n, int s[]);
void Interclasare(int a[], int b[], int n, int m);
void Afisare(int n);

int main(){
int n, m, x;
cin >> x;
cin >> n;
CitireSir(n, a);
cin >> m;
CitireSir(m, b);

int i = 0, j = 0;
while(i <= n && j <= m)
    {
        if(a[i] < b[j])
        {
            if(a[i] % x == 0)
            {
                c[k] = a[i];
                k++;
                i++;
            }
            else
                i++;
        }
        else
        {
            if(a[i] > b[j])
            {
                if(b[j] % x == 0)
                {
                    c[k] = b[j];
                    k++;
                    j++;
                }
                else
                    j++;
            }
            else
            {
                i++;
                j++;
            }
        }
    }
    if(i <= n)
    {
        while(i <= n)
            if(a[i] % x == 0)
            {
                c[k] = a[i];
                k++;
                i++;
            }
            else
                i++;
    }
    else
    {
        while(j <= m)
        {
            if(b[j] % x == 0)
            {
                c[k] = b[j];
                k++;
                j++;
            }
            else
                j++;
        }
    }
    for(int i = 0 ; i < k ; i++)
        if(c[i] != 0)
        cout<<c[i]<<" ";

return 0;
}

void CitireSir(int n, int s[]){
    for(int i = 0; i < n; ++i){
        cin >> s[i];
    }
}

void Afisare(int n){
    if (k++ == 10)
    {
        cout << '\n' << n << ' ';
        k = 1;
    }
    else
        cout << n << ' ';
}