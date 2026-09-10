#include <iostream>
using namespace std;

const int Dim = 1001;
int a[Dim];

int main(){
    int n;
    cin >> n;
for (int i = 1; i <= n; i++){
    cin >> a[i];
     if (a[i] % 2 == 0)
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
    