#include <iostream>
#include <cstring>
using namespace std;

char s[101];

int main(){
    cin.getline(s, 101);
    bool este = false;
    char *p = strtok(s, " ");
    while(p){
    if (strstr(p, "DO") || strstr(p, "RE") || strstr(p, "MI") || strstr(p, "FA") || strstr(p, "SOL") || strstr(p, "LA") || strstr(p, "SI"))
        {
        cout << p << '\n';
        este = true;
        }
        p = strtok(NULL, " ");
    }

    if(!este)
        cout << "nu exista";

}