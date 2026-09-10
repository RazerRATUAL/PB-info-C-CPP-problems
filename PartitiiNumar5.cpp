#include <iostream>

using namespace std;

int n , x[21], cnt;

void Afisare(int a)
{
    for(int i =1 ; i <= a ; i ++)
        cout << x[i] << " ";
    cout << endl;
}

void PAUL(int poz , int S)
{
    for(int i = x[poz-1] ; i <= n ; i += 2)
    {
        x[poz] = i;
        if(S + x[poz] <= n)
        {
            if(S + x[poz] == n)
                Afisare(poz), cnt ++;
            else
                PAUL(poz + 1 , S + x[poz]);
        }
    }
}

int main()
{
    cin >> n;
    x[0] = 2;
    PAUL(1 , 0);
    if(cnt == 0)
        cout << "imposibil\n";
    return 0;
}