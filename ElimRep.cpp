#include <iostream>
using namespace std;

const int Dim = 1001;
int a[Dim];

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    
    for(int i = 1; i <= n; ++i){
        int rep = a[i];
        for(int j = i + 1; j <= n; ++j)
            if(a[j] == rep)
            {
                for(int k = j + 1; k <= n; ++k)
                    a[k - 1] = a[k];
                n--;
                j--;
            }
    }

    for(int i = 1; i <= n; ++i)
        cout << a[i] << ' ';

    return 0;
}
