#include <fstream>
#include <cstring>
using namespace std;

ifstream cin("inserarechar.in");
ofstream cout("inserarechar.out");

char s[256], c[16], sn[512];

int main(){
    bool este = false;
    cin >> c;
    cin.get();
    cin.getline(s, 256);

    char *p = strtok(s, " ");
    while(p){
        strcat(sn, p);
        if(strcmp(c, p) == 0){
            strcat(sn, "?");
            este = true;
        }
        strcat(sn, " ");
        p = strtok(NULL, " ");
    }

    if(este)
    cout << sn;
    else 
    cout << "NU APARE";
}