#include <fstream>
 /// #include <algorithm>
using namespace std;

ifstream cin("permutari2.in");
ofstream cout("permutari2.out");
int v[10], p[10], s[10];
int n;
void afis(){
    for(int i = 1; i <= n; ++i)
        cout << v[i] << ' ';
    cout << '\n';
}

void back(int poz){
    for(int i = 1; i <= n; ++i){
        if(!p[i]) {
            v[poz] = s[i];
            p[i]= 1;
            if (poz ==n)
                afis();
            else back(poz + 1);
            p[i] = 0; // !
        }
    }     
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> s[i];
    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(s[i] > s[j])
                swap(s[i], s[j]);
    back(1);
}