#include <iostream>
#include <deque>
#include <string.h>

using namespace std;

int n, suma, ok;
int V[25], C[25], X[25];

void Afisare(int k)
{
    for (int i = 1; i < k; i++) 
        cout << X[i] << " ";
    
    cout << '\n';
}

void Back(int k, int sum){

    if(sum == suma && k == n + 1){
        int cnt = 0;

        for (int i = 1; i < k; i++) 
            if(X[i] > 0)
                cnt++;

        if(cnt == k - 1)
            Afisare(k), ok = 1;

        return;
    }
    if(k <= n && !ok)
        for(int i = 0; i <= C[k]; ++i){
            X[k] = i;

            if(i * V[k] + sum <= suma)
                Back(k + 1, i * V[k] + sum);
        }


}

int main()
{
    cin >> n >> suma;

    for(int i = 1; i <= n; ++i)
        cin >> V[i];

    for(int i = 1; i <= n; ++i)
        cin >> C[i];

    Back(1, 0);

    return 0;
}