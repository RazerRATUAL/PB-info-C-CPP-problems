#include <iostream>
#include <cstring>
using namespace std;

int suma_ascii(char s[]){

    int sum = 0;
    for(int i = 0; i < strlen(s); ++i)
        sum += s[i];
    return sum;


}

bool este_cuv(char c[]){
     bool este = false;
     for(int i = 0; i < strlen(c); ++i)
        if(isalpha(c[i]))
           este = true;


     return este;
}

char s[256], c[256], cuv[256][256];
int cnt = 0;
bool paul = false;

int main(){

    cin.getline(s, 256);
    char *p = strtok(s, " ");
    while (p){
        strcpy(c, p);
        if(este_cuv(c)){
            paul = true;
            strcpy(cuv[++cnt], c);
        }
        p = strtok (NULL, " ");
    }

    if(!paul){
        cout << "NU EXISTA";
        return 0;
    }

    for(int i = 1; i < cnt; ++i)
        for(int j = i + 1; j <= cnt; ++j)
    if(suma_ascii(cuv[i]) > suma_ascii(cuv[j])){

    strcpy(c, cuv[i]);
    strcpy(cuv[i], cuv[j]);
    strcpy(cuv[j], c);
    }

    cout << suma_ascii(cuv[1]) << " " << cuv[1] << " ";
    for(int i = 2; i <= cnt; ++i){
        if(suma_ascii(cuv[i]) == suma_ascii(cuv[i-1]))
        cout << cuv[i] << " ";
    else cout << '\n' << suma_ascii(cuv[i]) << " " << cuv[i] << " ";
}

return 0;
}