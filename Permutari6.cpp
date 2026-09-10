#include <iostream>
using namespace std;

int a, b;
int v[9], p[9];
void afis(){
    for(int i = a; i <= b; ++i)
        cout << v[i-a+1] << ' ';
    cout << '\n';
}

void back(int poz){
    for(int i = a; i <= b; ++i){
        if(!p[i - a + 1]) {
            v[poz - a + 1] = i;
            p[i - a + 1]= 1;
            if (poz == b)
                afis();
            else back(poz + 1);
            p[i - a + 1] = 0; // !
        }
    }     
}

int main()
{
    cin >> a >> b;
    back(a);
    return 0;
}