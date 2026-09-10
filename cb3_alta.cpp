//cb3

#include <fstream>
#include <cmath>
#include <algorithm>


using namespace std;

int partitionare(int a[], int st, int dr)
{
    int poz = st;
    for (int i = st; i < dr; i++)
        if (a[i] < a[dr])
        {
            swap(a[i], a[poz]);
            poz++;
        }
    swap(a[poz], a[dr]);
    return poz;
}

void quicksort(int a[], int st, int dr)
{
    if (st < dr)
    {
        int poz = partitionare(a, st, dr);
        quicksort(a, st, poz - 1);
        quicksort(a, poz + 1, dr);
    }
}


int celMaiMareMaiMicSauEgal(int a[], int n, int val)
{
    int st = 1, dr = n, poz = 0;
    while (st <= dr) {
        int mij = (st + dr) / 2;
        if (a[mij] <= val)
        {
            poz = mij;
            st = mij + 1;
        }
        else dr = mij - 1;
    }
    return poz;
}

int a[10001], n, Q, x;

int sp[10001];

ifstream cin("cb3.in");
ofstream cout("cb3.out");

int main()
{
    
    cin >> n >> Q; 

    for (int i = 1; i <= n; i++)
        cin>>a[i];

    quicksort(a, 1, n);

    for (int i = 1; i <= n; i++)
        sp[i] = sp[i - 1] + a[i];
    
    for (int i = 1; i <= Q; i++)
    {
        cin >> x;
        cout << celMaiMareMaiMicSauEgal(sp, n, x) << '\n';
    }
    
    return 0;
}