//#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream fin("anagrame1.in");
ofstream fout("anagrame1.out");

char v[9], s[9];
int p[9];

void afis(){
    for(int i = 0; i< strlen(s); ++i){
        fout << v[i];
    }
    fout << '\n';
}

void back(int poz){
        for(int i = 0; i < strlen(s); ++i){
        if(!p[i]) {
            v[poz] = s[i];
            p[i]= 1;
            if (poz ==strlen(s) - 1)
                afis();
            else back(poz + 1);
            p[i] = 0; // !
        }
    }     
}
int main(){
    fin.getline(s, 9);
    for(int i = 0; i < strlen(s) - 1; i++) {
        for(int j = i + 1; j < strlen(s); j++) {
            if(s[i] > s[j]) {
                swap(s[i], s[j]);
            }
        }
    }

    back(0);
}