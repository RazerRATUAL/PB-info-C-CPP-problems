#include <iostream>
using namespace std;

const int Dim = 1001;
int a[Dim];

int main(){
    int n;
    int minim = 1 << 30;
    cin >> n;
for (int i = 1; i <= n; i++){
    cin >> a[i];
    if(minim >= a[i])
        minim = a[i];
}
for (int i = 1; i <= n; i++){
     if (a[i] == minim)
        {
            for (int j = i; j < n; j++)
                a[j] = a[j + 1];
            n--;
            i--;
        }
     else
        cout << a[i] << ' ';
}

}
    