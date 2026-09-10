#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("evenoddxxl.in");
ofstream fout("evenoddxxl.out");

char s[1001];

int main(){
    fin >> s;
    int x = s[strlen(s)-1] - '0';
    if(x % 2 == 1)
        fout << "Impar";
    else
        fout << "Par";
    return 0;
}