#include <iostream>
#include <cstring>
using namespace std;
const int Dim = 256;
char s[Dim], s1[Dim], aux[Dim];;

int main(){ 
    cin.getline(s,Dim);
    cin.getline(s1, Dim);
    char *p = strstr(s, s1);
    while(p){
        strcpy(aux , p + strlen(s1));
        strcpy(p, aux);
        p = strstr(s, s1);
    }
    cout << s << '\n';
    return 0;
}