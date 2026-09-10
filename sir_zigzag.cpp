#include <iostream>

using namespace std;

int main(){
    int n, i, asta, crescator = 1;
    cin >> n;
    cin >> asta;

    for (i = 2; i <= n; i++) {
        int urm;
        cin >> urm;

    if (crescator){
        if (urm <= asta) 
            crescator = 0;
        } 
        else{
        if (urm >= asta) {
            crescator = 1;
      }
    }

    asta = urm;
    }

    if (crescator)
        cout << "NU" << endl;
    else 
        cout << "DA" << endl;


  return 0;
}
