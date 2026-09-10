#include <iostream>
#include <fstream>
using namespace std;

int n, v[10], sol[10];
bool aux[100];
ifstream fin("permutari2.in");
ofstream fout("permutari2.out");

void printSol() {
    for(int i = 1; i <= n; i++)
        fout << sol[i] << " ";
    fout << endl;
}

void backtracking(int k) {
    if(k == n + 1) {
        printSol();
    } else {
        for(int i = 1; i <= n; i++) 
        {
            if(!aux[i]) {
                sol[k] = v[i];
                aux[i] = true;
                backtracking(k + 1);
                aux[i] = false;
            }
        }
    }
}

int main() {
    fin >> n;
    for(int i = 1; i <= n; i++)
        fin >> v[i];
    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(v[i] > v[j])
                swap(v[i], v[j]);
    backtracking(1);
}