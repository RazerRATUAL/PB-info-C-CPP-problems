#include <iostream>
using namespace std;

int main (){
    int nrdiv = 0, ndmax = 0, nrmic, nrmare, a, b, aux;
    cin >> a >> b;
    if (a % 2 == 1)
        a++;
    for (int i = a; i <= b; i = i + 2){
        aux = i;
        nrdiv = 0;
        for (int d = 1; d * d <= aux; d++)
            if(aux % d == 0){
                if(d % 2 == 0) 
                nrdiv++;
            if (d * d < aux)
                if ((aux / d) % 2 == 0)
                    nrdiv++;
        }
        if(nrdiv > ndmax){
            ndmax = nrdiv;
            nrmic = aux;
        }
    }
    if (b % 2 == 1)
    b = b - 1;
    for (int i = b; i >= a; i = i - 2){
        aux = i;
        nrdiv = 0;
        for (int d = 1;d * d <= aux;d++)
            if(aux % d == 0)
        {
            if(d % 2 == 0) 
                nrdiv++;
            if (d * d < aux)
            if((aux / d) % 2 == 0)
                nrdiv++;
        }
        if(nrdiv == ndmax)
        {
            nrmare = aux;
            break;
        }
    }
    cout << ndmax << " " << nrmic << " " << nrmare;
    return 0;
}
