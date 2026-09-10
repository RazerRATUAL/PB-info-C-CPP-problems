#include <iostream>
using namespace std;

// DetPrim

bool este_prim(int n){
    if(n == 0 || n == 1)
        return false;
    if(n % 2 == 0 && n != 2)
        return false;
    for(int d = 3; d * d <= n; d += 2)
        if(n % d == 0)
            return false;
    return true;
}

int main() {

    int a, b;
    cin >> a >> b;
    int mij = (a + b) / 2;
    int prim_mai_mic = mij, prim_mai_mare = mij;
    while(!este_prim(prim_mai_mic) && prim_mai_mic > a)
        prim_mai_mic --;
    while(!este_prim(prim_mai_mare) && prim_mai_mare < b)
        prim_mai_mare ++;

    if(este_prim(prim_mai_mare) && este_prim(prim_mai_mic)){
        if(abs(a + b - 2 * prim_mai_mic) <= abs(a + b - 2 * prim_mai_mare))
            cout << prim_mai_mic;
        else if(abs(a + b - 2 * prim_mai_mic) > abs(a + b - 2 * prim_mai_mare))
            cout << prim_mai_mare;
    }
    else if(este_prim(prim_mai_mic))
        cout << prim_mai_mic;
    else if(este_prim(prim_mai_mare))
        cout << prim_mai_mare;
    else
        cout << "NU EXISTA";

    return 0;
}